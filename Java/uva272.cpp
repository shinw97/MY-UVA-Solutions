#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
string str;
int counter = 0;
while(getline(cin, str)){
    for(int i = 0; i < str.size(); i++){
        if(str.at(i)=='\"'){
            if(counter == 0 || counter % 2 == 0){
                cout<<"``";
                counter++;
                continue;
            }else if(counter == 1 || counter % 2 != 0){
                cout<<"''";
                counter++;
            }
        }else{
            cout<<str.at(i);
        }
    }
    cout<<endl;
}
}
