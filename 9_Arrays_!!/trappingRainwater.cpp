#include <iostream>
#include<climits>
using namespace std;

void trappingRainwater(int *heights, int n){
    int leftMax[20000], rightMax[20000];
    
    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1];

    // LEFT MAX
    cout<<leftMax[0];
    for(int i=1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
        cout<< leftMax[i]<< ",";
    }
    cout<<endl;

    // RIGHT MAX
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
        cout<< rightMax[i]<< ",";
        }
        cout<<rightMax[n-1];
        cout<<endl;

    int waterTrapped = 0;
    for(int i=0; i<n; i++){
        // for every single bar:
        int currentWater = min(leftMax[i], rightMax[i]) - heights[i];
        if(currentWater > 0){ // remove -ve values
            waterTrapped += currentWater;
        }
    }
    cout<<"Water Trapped = "<<waterTrapped<<endl;
}

int main(){
    int heights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);

    trappingRainwater(heights, n); 
    return 0;
}