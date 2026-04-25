# NOTIFY-your personal digital companion
### Group members:
Hafsa mukarram (25k-0894)\
Lubna jeswani (25k-0926)
## Description:
Notify is a multi-user, file based productiviy system built in c++ using object oriented programming principles. 
It allows users to securely sign up and log in, then access a suite of personal tools a rich note taking system, and audio reader that speaks your notes allowed,
a to-do list manager, and a social networking model for connecting and chatting with other users.\
Data is persisted locally via structured text files, organized per user in a dedicated directory (users/<username>/). The system demonstrate OOP concepts
including inheritance, polymorphism, encapsulation, static members, operator overloading, exception handling, and dynamic memory management.
## How to compile:
Requirements: windows OS,g++ compiler (MinGW recommended), Powershell(for audiobook feature)\
Compile command: 
##g++ main.cpp login.cpp signUp.cpp note.cpp todo.cpp friend.cpp audiobook.cpp -o myProgram.exe\
or compile all .cpp files at once: g++ *.cpp -o myProgram.exe -std=c++11\
make sure all cpp and .h files are in same directory before compiling.
## How to run:
open the terminal in the project directory.\
Run the compiled executable: 
##myProgram.exe\
The program must be run from the directory containing login.txt and users/ folder, or it will fail to read/write data correctly.
## How to use the system:
Enter 1 to login and 0 to signup:
#### Step1-create an account (first time):
* Enter 0 to signup.
* provide a unique username and password.
* your account foler is created automatically.
#### Step2-Login:
* Enter 1 to login.
* Enter your credentials.
* on success, you're taken to the main menu.
#### Step3-Main menu:
choose:\
1. Making notes.
2. Audio book.
3. TODO-LIST.
4. social networks.
5. Ends.
##### Making notes(option 1):
use a sub- menu to add, view,edit, delete, search, share, or revoke notes.
##### Audiobook (option 2):
Enter 1 to pick a note by id and have it read aloud.\
Enter 0 to return.
##### TODO-LIST (option 3):
Add tasks with priority, track completion, edit or delete task via the sub-menu.
##### Social networks (option 4):
Send friend requests, accept pending ones, view your friend list, or message a friend.
##### End (option 5):
exits the application.
## OOPs concepts used:
###### Classes:
login, signUp, note, noteList, Todo, TodoList, friendGroup, Audiobook.
###### Inheritance:
Note and Todo both inherit from abstract base class Content.
###### Abstract class:
Content declares pure virtual show().
###### Encapsulation:
All class data members are private with public getters/setters.
###### Static member:
signUp:: userName (static) keeps the logged in user accross all classes.
###### Operator overloading:
Note::operator== compares notes by ID.
###### Dynamic memory:
NoteList and TodoList use new/delete for pointer arrays.
###### File I/O:
All data is persisted using ifstream/ofstream.
###### Exception handling:
is used to ensure proper sign up of user and creation of all required files like friend list messages, request list automatically when user sign in and if there is an error then exception handling will handle it
## Use case:
Each user's data is isolated in their own users/<username>/ folder. The only shared resource is login.txt, which holds credentials for all registered accounts.
### use case 1 (signup and creates notes):
Enter 1 to login and 0 to signup: 0\
Enter Username: ali\
Enter Password: ali123\
====Account Created Successfully=====\
Enter Username: ali\
Enter Password: ali123\
Login Successful!\
Loading ......
========WELCOME TO NOTIFY: ali========\
Choice: 1   [Making Notes]\
Choice: 1   [Add Note]\
Enter title: OOP Summary\
Enter subject: Computer Science\
Enter body (END to finish):\
Inheritance allows a class to derive from another.\
Polymorphism lets one interface represent many types.\
END\
Note added!

Choice: 1   [Add Note}\
Enter title: Math Formulas\
Enter subject: Mathematics\
Enter body (END to finish):\
Quadratic formula: x = (-b +- sqrt(b2-4ac)) / 2a\
END\
Note added!

Choice: 2   [View All Notes]

[1] OOP Summary\
Subject: Computer Science\
Owner  : ali\
Shared : None\
Content:\
Inheritance allows a class to derive from another.\
Polymorphism lets one interface represent many types.

[2] Math Formulas\
Subject: Mathematics\
Owner  : ali\
Shared : None\
Content:\
Quadratic formula: x = (-b +- sqrt(b2-4ac)) / 2a\
### use case 2 (manages todo list):
Enter 1 to login and 0 to signup: 0\
Enter Username: sara\
Enter Password: sara456\
====Account Created Successfully====

Enter Username: sara\
Enter Password: sara456\
Login Successful!\
Loading ......\
========WELCOME TO NOTIFY: sara=========

Choice: 3   [TODO-LIST]

Choice: 1   [Add Task]\
Task: Complete Biology lab report\
Priority (low/medium/high): high\
Task added!

Choice: 1   [Add Task]\
Task: Read Chapter 4\
Priority (low/medium/high): medium\
Task added!

Choice: 1   [Add Task]\
Task: Buy stationery\
Priority (low/medium/high): low\
Task added!\
Choice: 2   [View All Tasks]\
--- Todo List ---\
[ ] [1] Complete Biology lab report (high)\
[ ] [2] Read Chapter 4 (medium)\
[ ] [3] Buy stationery (low)

Choice: 5   [Mark Task Done/Undone]\
Task ID: 1\
Status changed

Choice: 4   [View Completed]\
--- Completed ---\
[x] [1] Complete Biology lab report (high)

Choice: 3   [View Pending]\
--- Pending ---\
[ ] [2] Read Chapter 4 (medium)\
[ ] [3] Buy stationery (low)
### use case 3 (sends a friend request and messages ali):
Enter 1 to login and 0 to signup: 0\
Enter Username: omar\
Enter Password: omar789\
====Account Created Successfully=====

Enter Username: omar\
Enter Password: omar789\
Login Successful!\
========WELCOME TO NOTIFY: omar=========

Choice: 4   [Social Networks]

Choice: 1   [Send Friend Request]\
Available People:\
ali\
sara

Enter name of user to send friend request: ali\
Request Sent

[Omar exits. Ali logs in and accepts the request from his Social menu.]
As soon as request is accepted it will remove the name from request list and will add into friend list
[Omar logs back in]\
Enter 1 to login and 0 to signup: 1\
Enter Username: omar\
Enter Password: omar789\
Login Successful!\
========WELCOME TO NOTIFY: omar=========

Choice: 4   [Social Networks]

Choice: 4   [Message a Friend]\
=====Your Friends are=====\
ali

Write name of user to start conversation: ali

========= Previous Messages ==========\
[none yet]\
============================

========== Send Message ========\
Enter message (or 'exit' to quit): Hey Ali, can you share your OOP notes with me?\
Message sent!
### use case 4 (reads a shared note via audiobook):
Enter 1 to login and 0 to signup: 0\
Enter Username: zara\
Enter Password: zara321\
====Account Created Successfully=====

Enter Username: zara\
Enter Password: zara321\
Login Successful!\
========WELCOME TO NOTIFY: zara========

Choice: 1   [Making Notes]

Choice: 2   [View All Notes]

[1] OOP Summary\
Subject: Computer Science\
Owner  : ali\
Shared : zara\
Content:\
Inheritance allows a class to derive from another.\
Polymorphism lets one interface represent many types.

Choice: 0   [Back to Main Menu]

Choice: 2   [AudioBook]

Enter 1 for notes audio and 0 for exit: 1\
Enter Notes id: 1

[System speakers read aloud:]\
"Inheritance allows a class to derive from another.\
Polymorphism lets one interface represent many types."\

Enter 1 for notes audio and 0 for exit: 0
###use case 5:(Through this it will tested if entering invalid password can login you account
so enter Username:zara
Password:!234
Expected Output: Invalid Email or Password
###Use case 6:(To check if duplicate names can be enter for username while signing in)
I you alreay zara as username you can not use it again
after running program Enter 0 to sign in Enter username and password
Username: Zara Password: 123
Expected output:"Username already exists"
and it will again prompt you to write name;
## Assumptions and limitations:
##### Windows only:
The application uses <dirent.h> (_mkdir),<dirent.h>, powerShell for TTS. it will not compile or run on linux/MacOS without significant changes.
##### Message history is linear:
Messages are stored as a plain text lines. there is no timestamp or threading.
##### Max shared user per notes:
A single user can stop up to 100 notes and 100 tasks.
##### Audiobook requires PowerShell:
The TTS feature calls system() with PowerShell command and will not work if PowerShell is unavailable or blocked.
No pause,play, speed up speed down option available
##### No input validation on IDs:
Entering a non integer where an ID is expected may cause undefined behavior.
