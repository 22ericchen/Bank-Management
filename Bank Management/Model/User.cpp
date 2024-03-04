#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User{
    private:
        string username, password;
    public:
    //User constructor
        User(string name, string password){
            username = name;
            password = password;
        }
};

//handles all User account features
class UserManager{
    private:
        vector<User> users;
    public:
        //registers new user by adding into user registery
        void registerUser(string username, string password){
            users.push_back(User(username, password));
        }

        //validates passoword by return true or false
        bool isValidPass(string password) {
            if (password.length() < 8 ){
                return false;
            }
            return true;
        }

        //users accesser method
        vector<User> getUsers(){
            return users;
        }
};