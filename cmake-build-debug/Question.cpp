#include "Question.h"
#include <bits/stdc++.h>
using namespace std;




void Question::User_Make_question() {
    string q;
    cout<<"Enter ur question : ";
    cin.ignore();
    getline(cin,q);
    question.push_back(q);

}

void Question::Show_All_Question() {
    if (!(question.empty())) {
        for (const string &x:question) {
            cout<<"Question : "<<x<<"\n";

        }
    }
    else
        cout<<"No Questions yet! \n";
}

