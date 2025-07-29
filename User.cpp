#include "User.h"
#include <bits/stdc++.h>
       using namespace std;

User::User() {
       username="";
       password="";
}

void User::SetUserName(string username) {
       this->username=username;
}
string User::GetUserName() const {
       return username;
}
void User::SetPassword(string password) {
       this->password=password;
}
string User::GetPassword() const {
       return password;
}

void User::SignUp() {
       string name;
       cout<<"Enter username : ";
       cin>>name;
       SetUserName(name);
       string pass;
       cout<<"Enter ur password : ";
       cin>>pass;
       SetPassword(pass);
}



