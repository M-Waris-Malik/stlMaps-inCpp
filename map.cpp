#include <iostream>
#include <map>
#include <windows.h>
using namespace std;

int main(){
map<int, string>student;
student[101] = "Qamar";
student[102] = "Ashar";
student[103] = "Zohan";

bool exit =false;
while(!exit){
cout<<"Welcome To Map Data structure"<<endl;
cout<<"*****************************"<<endl;
cout<<"1.Search Student"<<endl;
cout<<"2.Remove Student"<<endl;
cout<<"3.Exit"<<endl;
cout<<"Enter Choice: ";
int val;
cin>>val;
if(val==1){
system("cls");
int key;
cout<<"Enter Key: ";
cin>>key;
if(student.find(key) != student.end()){
cout<<"Student: "<<student[key]<<endl;
}
else{
cout<<"Student Not Found!"<<endl;
}
Sleep(3000);
}
else if(val==2){
system("cls");
int key;
cout<<"Enter Key: ";
cin>>key;
if(student.find(key) != student.end()){
cout<<"Student: "<<student[key]<<endl;
student.erase(key);
cout<<"Student Removed"<<endl;
}
else{
cout<<"Student Not Found!"<<endl;
}
Sleep(3000);
}
else if(val==3){
system("cls");
exit = true;
cout<<"Good Luck"<<endl;
Sleep(3000);
}	
}
}
