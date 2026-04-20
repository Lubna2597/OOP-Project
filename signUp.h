#ifndef SignUp_H
#define SignUP_H
#include<string>
#include<fstream>
using namespace std;
class signUp{
string userName;
string password;
public:
signUp();
signUp(string,string );
void setUser(string);
void setpassWord(string);
string getUser();
string getPass();
void createFolder();
};
#endif