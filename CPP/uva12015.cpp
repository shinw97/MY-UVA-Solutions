#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

int largestRanking(vector<int> v){
int m = -1;
for(int i = 0; i < v.size(); i++){
    if(v[i] > m){
        m = v[i];
    }
}
return m;
}

int main(){
int testcase;
cin>>testcase;
for(int i = 0; i < testcase; i++){
    vector<string> s;
    vector<int> ranking;
    vector<int> positions;
    string str;
    for(int j = 0; j < 10; j++){
        cin.ignore();
        getline(cin, str);
        int index = str.find(" ");
        string subtring = str.substr(0, index);
        s.push_back(subtring);
        str.erase(0, index + 1);
        stringstream ss(str);
        int post;
        ss >> post;
        ranking.push_back(post);
    }
    int largest = largestRanking(ranking);
    for(int j = 0; j < ranking.size(); j++){
        if(ranking[j] == largest){
            positions.push_back(j);
        }
    }
    printf("Case #%d:\n", (i+1));
    for(int j = 0; j < positions.size(); j++){
        cout<<s[positions[j]]<<endl;
    }
}
return 0;
}
