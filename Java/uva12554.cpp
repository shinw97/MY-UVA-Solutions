#include <iostream>
#include <string.h>
#include <sstream>
#include <queue>
#include <stdio.h>

using namespace std;

int main(){
queue<string> q1;
queue<string> q2;
string str;
string song = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you";
string exclude = " ";
int index = 0;
string token;
index = song.find(exclude);
while(index!=string::npos){
    token = song.substr(0, index);
    q1.push(token);
    song = song.substr(index+1, song.size());
    //song.erase(0, index + exclude.length());
    //cout<<song<<endl;
    index = song.find(exclude);
}
q1.push(song);
//lyrics moved to queue
int ppl;
getline(cin,str);
stringstream ss1(str);
ss1>>ppl;
for(int i = 0; i < ppl; i++){
getline(cin,str);
q2.push(str);
}

for(int i = 0; i < q1.size(); i++){
    string name = q2.front();
    q2.push(q2.front());
    q2.pop();
    string lyrics = q1.front();
    q1.push(q1.front());
    q1.pop();
    cout<<name<<": "<<lyrics<<endl;
}

int count = ppl/16;
for(int i = 0; i < count; i++){
for(int i = 0; i < q1.size(); i++){
    string name = q2.front();
    q2.push(q2.front());
    q2.pop();
    string lyrics = q1.front();
    q1.push(q1.front());
    q1.pop();
    cout<<name<<": "<<lyrics<<endl;
}
}
}
