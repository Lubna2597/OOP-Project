#include<iostream>
#include<fstream>
#include<dirent.h>
#include<vector>
#include"signUp.h"
#include"friend.h"
using namespace std;

friendGroup::friendGroup(){}
void friendGroup::sendRequest(){
    vector<string>availPeople;
    //ofstream fout("login.txt");
ifstream fin("login.txt");
string fileUsername="";
int count =0;
    while(fin>>fileUsername){
//fin>>availPeople[count++];
 string temp;
 fin>>temp;
availPeople.push_back(fileUsername);
count++;
    }
    cout<<"Available People: ";
    for(int i=0;i<count;i++){
        int found=0;

        for(int j=0;j<f.size();j++)
        {
            if(availPeople[i]==f[j]){found=1; break;}
        }
if(!found){
    cout<<availPeople[i];
}
}
string name;
cout<<"Enter name of user to send friend request: ";
cin>>name;
for(int i=0;i<count;i++){
    if(name==availPeople[i]){
        ofstream send;
        string path=availPeople[i]+"/friendRequest.txt";
        send.open(path,ios::app);
        if(send.is_open())
{       send<<signUp::getUser()<<endl;
       send.close();}
       else{
        cout<<"Could not send request"<<endl;
       }
       break;
    
}
}}
void friendGroup::acceptRequest(){
    string friendRequest="";
    vector<string>fr;
    int count =0;
    string rePath=signUp::getUser()+"/friendRequest.txt";
    ifstream accept(rePath);
    while(accept>>friendRequest)
{
fr.push_back(friendRequest);
count++;
}
accept.close();

for(int i=0;i<count;i++){
    cout<<fr[i]<<endl;
}
string nameU;
cout<<"Write username to accept friend request: ";
cin>>nameU;
int found=0;
for(int i=0;i<count;i++){
    if(nameU==fr[i]){
        found=1;
        f.push_back(fr[i]);
        string myListPath=signUp::getUser()+"/friendList.txt";
        ofstream officialFriend(myListPath,ios::app);
        if(officialFriend.is_open())
 {       officialFriend<<fr[i]<<endl;
        officialFriend.close();
        string path=fr[i]+"/friendList.txt";
        ofstream addToOtherList(path,ios::app);
        if(addToOtherList.is_open())
     {   addToOtherList<<signUp::getUser()<<endl;
        addToOtherList.close();
     cout<<"Now you Both are friends"<<endl;
    }
    else{
        cout<<"Error in accepting request"<<endl;
    }
       }
       else{
        cout<<"Error"<<endl;
       }
       break; // if error check here

    }
 

}
if(!found){
    cout<<"No such UserName exists"<<endl;
}
}
void friendGroup::viewFriendList(){
    cout<<"=====MY FRIENDLIST======="<<endl;
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<endl;
    }
}

void friendGroup::message(){
cout<<"-----------WELCONE TO  CHAT SECTION---------------"<<endl;
cout<<"=====Your Friends are====="<<endl;
viewFriendList();
cout<<"------------------------------"<<endl;
string n;
cout<<"Write name of user to start conversation: ";
cin>>n;
for(int i=0;i<f.size();i++){
    if(f[i]==n){
    }
}
}