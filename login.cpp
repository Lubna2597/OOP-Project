#include<iostream>
#include<fstream>
#include<direct.h>
#include<dirent.h>
#include"login.h"
using namespace std;
login::login():userName(""),password(""),dir(NULL){}
login::login(string u,string p):userName(u),password(p){}
void login::setU(string n){
userName=n;
}
void login::setpass(string n){
password=n;
}
string login::getU(){
    return userName;
}
string login::getP(){
    return password;
}
void login::openFolder(){
    struct dirent* entry;
    string path="users/"+userName;
    dir=opendir(path.c_str());
    if(dir==NULL){
        cout<<"Could not open folder"<<endl;
        
    }
}
void login::loginCheck(){
    string fileUsename="";
    string filePassword="";
    cout<<"Enter Username: ";
    cin>>userName;
    cout<<"Enter password: ";
    cin>>password;
    int found=0;
    ofstream fout;
    ifstream fin;
    fin.open("login.txt");
    while(fin>>fileUsename>>filePassword){
        if(fileUsename==userName ){

found=1;
break;
        }
   
    }
    fin.close();
    if(found){
      if(filePassword==password)
{cout<<"Login successfull"<<endl;
openFolder();
}
else{
    cout<<"Wrong Password"<<endl;
}

    }
    else{
cout<<"Unable to find username"<<endl;
        
    }


}
void login::logout(){
    if(dir!=NULL){
        closedir(dir);
        dir=NULL;
        cout<<"Logged out successfully"<<endl;
    }
}

