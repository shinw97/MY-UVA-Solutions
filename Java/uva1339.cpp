#include <iostream>
#include <cstring>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
typedef vector<int> T;

int main(){
string s1, s2;
while(cin>>s1>>s2){
    T n_str1;
    T n_str2;
    while(!s1.empty()){
        int counter = count(s1.begin(), s1.end(), s1.at(0));
        n_str1.push_back(counter);
        char c = s1.at(0);
        s1.erase(remove(s1.begin(), s1.end(), c), s1.end());
        //cout<<s1<<endl;
    }
    while(!s2.empty()){
        int counter = count(s2.begin(), s2.end(), s2.at(0));
        n_str2.push_back(counter);
        char c = s2.at(0);
        s2.erase(remove(s2.begin(), s2.end(), c), s2.end());
        //cout<<s2<<endl;
    }
    sort(n_str1.begin(), n_str1.end());
    sort(n_str2.begin(), n_str2.end());
    bool b = true;
    for(int i = 0; i < n_str1.size(); i++){
        if(n_str1[i] != n_str2[i]){
            b = false;
        }
    }
    if(b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
}
