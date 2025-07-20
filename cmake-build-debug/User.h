#ifndef USER_H
#define USER_H

#include <bits/stdc++.h>
       using namespace std;

class User {
private:
    string username;
    string password;
public:
    User();
    void SetUserName(string username);
    string GetUserName()const;
    void SetPassword(string password);
    string GetPassword()const;
    void SignUp();


};



#endif
