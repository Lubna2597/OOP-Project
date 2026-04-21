#include"audioBook.h"
using namespace std;
string Audiobook::extract(){
    string notes;
    NoteList nl(signUp::getUser());
nl.listAll();
int id;
cout<<"Enter Notes id: ";
cin>>id;
Note* n=nl.find(id);
if(n!=NULL){
    notes=n->getBody();
}
    
return notes;}
void Audiobook::speak(){
string text=extract();

string command="powershell -command \""
                "Add-Type -AssemblyName System.Speech;"
                "$synth= New-Object System.Speech.Synthesis.SpeechSynthesizer; "
                "$synth.Speak('"+ text +"')\"";
    system(command.c_str());
}
