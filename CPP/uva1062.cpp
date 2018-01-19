#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
string str;
int testcase = 0;
getline(cin, str);
while(str.compare("end")!= 0 ){
    vector<char> v;
    for(int i = 0; i < str.length(); i++){
        if(v.empty()){
            v.push_back(str.at(i));
        } else {
            for(int j = 0; j < v.size(); j++){
                if(str.at(i) <= v[j]){
                    v[j] = str.at(i);
                    break;
                }if((str.at(i) > v[j]) && (j == v.size()-1)){
                    v.push_back(str.at(i));
                }
            }
        }
    }
    testcase++;
    printf("Case %d: %d\n",testcase, v.size());
    getline(cin, str);
}
return 0;
}
