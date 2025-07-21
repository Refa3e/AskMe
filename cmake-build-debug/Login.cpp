//
// Created by IbraHeM on 7/20/2025.
//

#include "Login.h"

#include <bits/stdc++.h>

#include "User.h"
using namespace std;


int Login:: menu() {
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
int Login::menu2() {
    int choice=-1;
    while (choice==-1) {
        cout<<"please make choice \n";
        cout<<"1)Ask question \n";
        cout<<"2)Show all questions \n";
        cin>>choice;
        if (!(choice==1 || choice==2)) {
            choice=-1;
            cout<<"Invalid choice , Try again ! \n";
        }
    }
    return choice;
}


void Login::choice() {

    while (true) {
        int choice=menu();
        if (choice==1) {
if (Login_()) {
    while (true) {
        int choice1=menu2();
        if (choice1==1)
            Ask_question();
        else if (choice1==2)
            Show_All_question();
    }
}
    break;
        }
        else if (choice==2)
            SignUp();
    }
}


bool Login::Login_valid(const User &user ,const string &name , const string &password) {
    return name==user.GetUserName() && password==user.GetPassword() ;
}


  void Login::SignUp() {
        User u;
        u.SignUp();
        user.push_back(u);
    }

    bool Login::Login_() {
        string name;
        cout<<"Enter ur username : ";
        cin>>name;
        string pass;
        cout<<"Enter ur password : ";
        cin>>pass;



        for (const auto &x :user) {
            if (Login_valid(x,name,pass)) {
                cout<<"Successful !";
                return true;

            }

        }

        cout<<"username or password has an error , u can sign up now and login after . "<<"\n";
        return false;

    }

void Login::Ask_question() {
    Question q;
    q.User_Make_question();
    questions.push_back(q);
}
void Login::Show_All_question() {
  if (!(questions.empty()) ) {
      for (  auto &x :questions) {
          for (auto &y :user) {
              cout<<y.GetUserName()<<" ";
          }
          x.Show_All_Question();
      }
  }
}



