#ifndef LOGIN_H
#define LOGIN_H
#include <bits/stdc++.h>

#include "Question.h"
#include "User.h"
using namespace std;


class Login {
private:
vector<User>user;
    string current_user;
    int id =100;
    set< int> id_question ;
    vector<pair<int , string>>questions;
    vector<pair<int, string>>answers;
public:
    void SignUp();
    bool Login_();
   int menu();
   int menu2();
    void choice();
    bool Login_valid(const User &user ,const string &name , const string &password);
    void Ask_question();
    void Answer_question();
    void Show_All_question();
    void Delete_question();
    void Print_users();
    void LoadUsersFromFile();
    void SaveUsersToFile();
    void LoadQuestionsFromFile();
    void SaveQuestionsToFile();
    void LoadAnswersFromFile();
    void SaveAnswersToFile();

};



#endif //SYSTEM_H
