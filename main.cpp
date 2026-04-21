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
    cout<<"Enter 0 to login and 1 to signup: ";
    cin>>choose;
   switch(choose){
case 0:
SIGNUP.checkU();
case 1:
LOGIN.loginCheck();
cout<<"\nLoading ";
for(int i=0;i<6;i++){
    cout<<".";
    sleep(1);

}
cout<<endl;
   }

}