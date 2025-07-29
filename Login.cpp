//
// Created by IbraHeM on 7/20/2025.
//

#include "Login.h"

#include <bits/stdc++.h>

#include "User.h"
using namespace std;


void Login::LoadUsersFromFile() {
    user.clear();
    ifstream file("users.txt");
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string name, pass;
        getline(ss, name, '|');
        getline(ss, pass);
        User u;
        u.SetUserName(name);
        u.SetPassword(pass);
        user.push_back(u);
    }
    file.close();
}

void Login::SaveUsersToFile() {
    ofstream file("users.txt");
    for (auto &u : user) {
        file << u.GetUserName() << "|" << u.GetPassword() << "\n";
    }
    file.close();
}


void Login::LoadQuestionsFromFile() {
    questions.clear();
    id_question.clear();
    ifstream file("questions.txt");
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        int qid;
        string text;
        ss >> qid;
        ss.ignore(); // تجاهل الـ '|'
        getline(ss, text);
        questions.push_back({qid, text});
        id_question.insert(qid);
        id = max(id, qid + 1); // أحدث ID
    }
    file.close();
}

void Login::SaveQuestionsToFile() {
    ofstream file("questions.txt");
    for (auto &q : questions) {
        if (!q.second.empty())
            file << q.first << "|" << q.second << "\n";
    }
    file.close();
}


void Login::LoadAnswersFromFile() {
    answers.clear();
    ifstream file("answers.txt");
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        int qid;
        string reply;
        ss >> qid;
        ss.ignore();
        getline(ss, reply);
        answers.push_back({qid, reply});
    }
    file.close();
}

void Login::SaveAnswersToFile() {
    ofstream file("answers.txt");
    for (auto &a : answers) {
        file << a.first << "|" << a.second << "\n";
    }
    file.close();
}




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
        cout<<"3)Answer question \n";
        cout<<"4)Delete question \n";
        cout<<"5)List system users \n";
        cin>>choice;
        if (!(choice>=1 && choice<=5)) {
            choice=-1;
            cout<<"Invalid choice , Try again ! \n";
        }
    }
    return choice;
}


void Login::choice() {
    LoadUsersFromFile();
    LoadQuestionsFromFile();
    LoadAnswersFromFile();

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
        else if (choice1==3)
            Answer_question();
        else if (choice1==4)
            Delete_question();
        else if (choice1==5)
            Print_users();
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
    SaveUsersToFile();
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
                cout<<"Successful ! \n";
                current_user=name;
                return true;

            }

        }

        cout<<"username or password has an error , u can sign up now and login after . "<<"\n";
        return false;

    }

void Login::Ask_question() {
    string q;

    cout<<"Enter ur question : ";
    cin.ignore();
    getline(cin,q);
    questions.push_back({id,q});
    id_question.insert(id);
    id++;
    SaveQuestionsToFile();
}

void Login::Answer_question() {
    int id;
    cout<<"Enter question id : ";
    cin>>id;
    auto x = id_question.find(id);
    if (x!=id_question.end()) {
        for (auto &y :questions)
        y.second;
    }
    string answer;
    cout<<"reply : ";
    cin.ignore();
    getline(cin,answer);
    answers.push_back({id , answer});
    SaveAnswersToFile();
}

void Login::Show_All_question() {
  if (!(questions.empty()) ) {
      for (  auto &x  :questions) {
         cout<<" question : "<<x.second<<" id ("<<x.first<<")""\n";
          if (!(answers.empty())) {
              for (auto &y :answers) {
                  if (x.first==y.first) {
                      cout<<" answer : "<<y.second<<" "<<"\n";
                  }

              }

          }
          else
              cout<<"No answer yet! \n";
      }
  }
    else
        cout<<"No questions yet! \n";
}


void Login::Delete_question() {
    int id;
    cout<<"Enter question id : ";
    cin>>id;
    auto x= id_question.find(id);
    if (x!=id_question.end()) {
        for (auto &z :questions) {
            if (z.first==id) {
                z.second.clear();
                cout<<"question ("<<z.first<<")"<<" has deleted successful \n";
            }
        }
    }
    else
        cout<<"No question with this id . \n";
    SaveQuestionsToFile();
}

void Login::Print_users() {
    if (!(user.empty())) {
    for (const auto &x:user) {
        cout<<"Name : "<<x.GetUserName()<<"\n";

    }
    }

}




