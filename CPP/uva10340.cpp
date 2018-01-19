#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>
#include <sstream>

using namespace std;

int main(){

    string str;
    while(getline(cin, str)){
        stringstream ss(str);
        string s ,t;
        ss >> s;
        ss >> t;
        queue<char> q;
        for(int i = 0; i < s.length(); i++){
            q.push(s.at(i));
        }
        for(int i = 0; i < t.length(); i++){
            if(q.empty()){
                break;
            }
            if(q.front() == t.at(i)){
                q.pop();
            }
        }
        if(q.empty()){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
