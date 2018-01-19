#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int countSpace(string &str){
int counter = 0;
for(int i = 0; i < str.length(); i++){
    if(str.at(i) == ' '){
        counter++;
    }
}
//cout<<"counter: "<<counter<<endl;
return counter;
}

void replaceSpace(string &str, int minspace){
if(minspace == 0){
    return;
}
int white = 0;
for(int i = 0; i < str.length(); i++){
    if(str.at(i) == ' '){
        white = i;
        break;
    }
}
for(int i = 0; i < minspace; i++){
    if(str.at(white) == ' '){
        //str.erase(i, 1);
        str.at(white) = '#';
        //cout<<"yes!"<<endl;
    }
    white++;
}
}

int main(){
string lineS;
getline(cin, lineS);
stringstream ss(lineS);
int lineSize;
ss >> lineSize;
while(lineS != "0"){
    stringstream ss(lineS);
    int lineSize;
    ss >> lineSize;
    vector<string> v;
    int minS = 100;
    for(int i = 0; i < lineSize; i++){
        string line;
        getline(cin, line);
        if(countSpace(line) < minS){
            minS = countSpace(line);
        }
        v.push_back(line);
    }
    //cout<<"minS: "<<minS<<endl;
    int space = 0;
    for(int i = 0; i < v.size(); i++){
        string strln = v[i];
        replaceSpace(strln, minS);
        space = space + countSpace(strln);
    }
    cout<<space<<endl;
    getline(cin, lineS);
}
}
