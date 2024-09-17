#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:
    //Non-Parameterized Constructor
    Car(){
        cout<<"Non-Parameterized Constructor called automatically.\n";
    }

    // Parameterized Constructor
    // Car(string namevalue, string colorvalue){
    //     cout<<"Parameterized Constructor is called automatically.\n";
    //     name = namevalue;
    //     color = colorvalue;
    // }
    Car(string name, string color){
        cout<<"Parameterized Constructor is called automatically.\n";
        this->name = name;// it means *(this).name or c1.name
        this->color = color;// c1.color = color
    }
    void start(){
        cout<<"Car has started.";
    }
    void stop(){
        cout<<"Car has stopped.";
    }

    //getter:
    string getname(){
        return name;
    }
    string getcolor(){
        return color;
    }
};

int main(){
//Note: Constructor Overloading: Ek hi class me more than one constructor likhna.
    Car c0; //It will call the Non-Parameterized Constructor.

    Car c1("maruti 800", "white"); //It will call the Parameterized Constructor.bkz parmeters are given here.
    cout<<"car model : "<< c1.getname()<<endl;
    cout<<"car color : "<< c1.getcolor()<<endl<<endl;

    Car c2("Forutner", "Black");
    return 0;
}