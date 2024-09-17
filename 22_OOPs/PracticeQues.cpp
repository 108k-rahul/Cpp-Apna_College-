#include<iostream>
#include<string>
using namespace std;

class User{
private:
    int id;
    string password;
public:
    string username;

    User(int id){
        this->id = id;
    }

    //Setter
    void setpassword(string password){
        this->password = password;
    }
    //Getter
    string getpassword(){
        return password;
    }
};

int main(){
    User u1(101);
    u1.username = "Max Bernerson";
    u1.setpassword("abcd");

    cout<<"Username: "<<u1.username<<endl;
    cout<<"Password: "<<u1.getpassword()<<endl;
    return 0;
}