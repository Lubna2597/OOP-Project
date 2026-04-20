#ifndef FRIENDGROUP_H
#define FRIENDGROUP_H
#include<iostream>
#include<string>
#include<dirent.h>
#include<vector>
#include<fstream>
using namespace std;
class friendGroup{
vector<string>f;
public:
friendGroup(){}
void sendRequest();
void acceptRequest();
void viewFriendList();
void message();
};
#endif