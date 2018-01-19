#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int num_Swap(vector<int> v){
    int counter = 0;
        for(int j = 0; j < v.size(); j++){
            for(int k = 0; k < v.size() - 1; k++){
                if(v[k] > v[k + 1]){
                    int temp = v[k];
                    v[k] = v[k + 1];
                    v[k + 1] = temp;
                    counter++;
                }
            }
        }
    return counter;
}

int main(){
    string str;
    while(getline(cin, str)){
        if(str == "0"){
            break;
        }
        stringstream ss(str);
        int num;
        ss >> num;
        vector<int> v;
        while(ss>>num){
            v.push_back(num);
        }
        int temp = num_Swap(v);
        if(temp % 2 == 0){
            cout<<"Carlos"<<endl;
        }else{
            cout<<"Marcelo"<<endl;
        }
    }
}
