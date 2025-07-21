#ifndef LOGIN_H
#define LOGIN_H
#include <bits/stdc++.h>

#include "Question.h"
#include "User.h"
using namespace std;


class Login {
private:
vector<User>user;
    vector<Question>questions;
public:
    void SignUp();
    bool Login_();
   int menu();
   int menu2();
    void choice();
    bool Login_valid(const User &user ,const string &name , const string &password);
    void Ask_question();
    void Show_All_question();
};



#endif //SYSTEM_H
