#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

bool check(queue<int> q, int length){
    bool b = true;
    int n = 1;
    stack<int> s;
    //printf("check enter function\n");
    while(true){
        if(s.empty()){
            s.push(n);
            n++;
            continue;
        }
        if(s.top() != q.front() && n > length){
            b = false;
            break;
        }
        if(s.top() == q.front()){
            s.pop();
            q.pop();
            if(s.empty() && q.empty()){
                break;
            }
        }else{
            s.push(n);
            n++;
        }
    }
    return b;
}

int main(){
    int ch_length;
    cin>>ch_length;
    while(ch_length != 0){
        string str;
        cin.ignore();
        while(getline(cin, str)){
            if(str.compare("0") == 0){
                cout<<endl;
                break;
            }
            queue<int> q;
            stringstream ss(str);
            int n;
            while(ss >> n){
                q.push(n);
            }
            if(check(q, ch_length)){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
        cin>>ch_length;
    }
}
