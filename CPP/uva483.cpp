#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

int main(){
    string str;
    while(getline(cin, str)){
        //if(str.compare("") == 0){
        //    cout<<endl;
        //    continue;
        //}
        int whitespace = 0;
        for(int i = 0; i < str.length(); i++){
            if(!iswspace(str.at(i))){
                whitespace = i;
                break;
            }
        }
        stringstream ss(str);
        string temp;
        vector<string> v;
        while(ss >> temp){
            reverse(temp.begin(), temp.end());
            v.push_back(temp);
        }
        for(int i = 0; i < whitespace; i++){
            cout<<" ";
        }
        for(int i = 0; i < v.size(); i++){
            cout<<v[i];
            if(i == v.size() - 1){
                cout<<endl;
            }else{
                cout<<" ";
            }
        }
    }
    return 0;
}
