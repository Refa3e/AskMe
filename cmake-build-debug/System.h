#ifndef SYSTEM_H
#define SYSTEM_H
#include <bits/stdc++.h>

#include "User.h"
using namespace std;


class System {
private:
vector<User>user;
public:
    void SignUp();
    void Login();
   int menu();
    void choice();
};



#endif //SYSTEM_H
