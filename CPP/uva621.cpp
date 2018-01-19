#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        string str;
        cin>>str;
        if(str.compare("1") == 0 || str.compare("4") == 0 || str.compare("78") == 0){
            cout<<"+"<<endl;
        }else if((str.at(str.length() - 1) == '5') && (str.at(str.length() - 2) == '3')){
            cout<<"-"<<endl;
        }else if(str.at(0) == '9' && str.at(str.length() - 1) == '4'){
            cout<<"*"<<endl;
        }else{
            cout<<"?"<<endl;
        }
    }
    return 0;
}
