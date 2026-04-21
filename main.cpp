#include<iostream>
#include<fstream>
#include<unistd.h>
#include"friend.h"
#include"login.h"
#include"signUp.h"
#include"todo.h"
#include"note.h"
using namespace std;
int main(){
    signUp SIGNUP;
    login LOGIN;
    string n;
    int choose;
    cout<<"Enter 1 to login and 0 to signup: ";
    cin>>choose;
   switch(choose){
case 0:
SIGNUP.checkU();
case 1:
LOGIN.loginCheck();
if(LOGIN.isLoggedIn())
{cout<<"\nLoading ";
for(int i=0;i<6;i++){
    cout<<".";
    sleep(1);
}
cout<<endl;

                                    ////AFTER LOGIN
cout<<"========WELCOME TO NOTIFY: "<<signUp::getUser()<<"========="<<endl;
int options;
cout<<"CHOOSE:\n 1: Making Notes\n 2: AudioBook\n 3: TODO-LIST\n 4: Social Networks"<<endl;
cin>>options;
switch(options){
    case 1:
    {Note NOTES;
NoteList NOTELIST(signUp::getUser());
    break;}
    case 2:
    ////PENDING
   { break;}
    case 3: 
    {Todo TODO;
    TodoList TODOLIST(signUp::getUser());}
    break;
    case 4:
    {
        friendGroup FRIENDS;
        break;
    }
}

}
else{
    return 1;
}
}

}