#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student{
    string name;
    float cgpa;

public:
    void getPercentage(){
        // cout<<"Percentage:" <<(cgpa * 10)<<"% \n";
    }

    //setters
    void setname(string nameval){
        name = nameval;
    }
    void setcgpa(float cgpaval){
        cgpa = cgpaval;
    }

    //getters
    string getname(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
};

int main(){
    Student s1;

    s1.setname("Rahul");
    s1.setcgpa(9.0);

    cout<<"Name: "<<s1.getname()<<endl;
    cout<<"cgpa: "<<s1.getcgpa()<<endl;
    cout<<"CGPA: "<<fixed<<setprecision(1)<<s1.getcgpa()<<endl;  //#include<iomanip>

    s1.getPercentage();

    cout<<"sizeof s1 = "<<sizeof(s1)<<endl;
    return 0;
}