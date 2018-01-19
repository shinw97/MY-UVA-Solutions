#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main(){
int testcase;
vector<bool> v;
cin>>testcase;
cin.ignore();
for(int i = 0; i < testcase; i++){
    string str;
    getline(cin, str);
    int width;
    bool match = true;
    cin>>width;
    cin.ignore();
    int a, b, diff;
        scanf("%d %d", &a, &b);
        if(a > b){
            diff = a - b;
        }else{
            diff = b - a;
        }
        int temp = diff;
    for(int j = 1; j < width; j++){
        scanf("%d %d", &a, &b);
        if(a > b){
            diff = a - b;
        }else{
            diff = b - a;
        }
        if(temp!=diff){
            match = false;
        }
    }
    v.push_back(match);
}
for(int i = 0; i < v.size(); i++){
    if(v[i]==true){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    if(i != v.size()-1){
        cout<<endl;
    }
}
return 0;
}
