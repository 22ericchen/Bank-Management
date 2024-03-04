#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User{
    private:
        string username, password;
    public:
        User(string name, string password){
            username = name;
            password = password;
        }
};

class UserManager{
    private:
        vector<User> users;
    public:
        void RegisterUser(){
            string username, password;
            cout<<"Enter Username: ";
            cin >> username;
            cout<< "enter Password: ";
            cin >> password;

            User newUswer(username, password);

            users.push_back()
        }
};