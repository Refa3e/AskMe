//
// Created by IbraHeM on 7/20/2025.
//

#include "System.h"

#include <bits/stdc++.h>

#include "User.h"
using namespace std;


int System:: menu() {
    int choice =-1;
    while (choice==-1) {
        cout<<"Please make choice \n";
        cout<<"1) Login "<<"\n";
        cout<<"2) Sign Up "<<"\n";
        cin>>choice;
        if (!(choice==1 ||choice==2)) {
            cout<<"Invalid choice ,Try again !\n";
            choice=-1;
        }


    }
        return choice;
}

void System::choice() {

    while (true) {
        int choice=menu();
        if (choice==1) {
            Login();

        }
        else if (choice==2)
            SignUp();
    }
}


bool Login_valid(const User &user ,const string &name , const string &password) {
    return name==user.GetUserName() && password==user.GetPassword() ;
}


  void System::SignUp() {
        User u;
        u.SignUp();
        user.push_back(u);
    }

    void System::Login() {
        string name;
        cout<<"Enter ur username : ";
        cin>>name;
        string pass;
        cout<<"Enter ur password : ";
        cin>>pass;


        bool found = false;
        for (const auto &x :user) {
            if (Login_valid(x,name,pass)) {
                cout<<"Sucessful !";
                found=true;
                break;
            }


        }
 if (!found) {
                cout<<"username or password has an error "<<"\n";
            }
    }

