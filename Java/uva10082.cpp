#include <iostream>
#include <string>

using namespace std;

int main(){
    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str;
    while(getline(cin, str)){
        for(int i = 0; i < str.length(); i++){
            if(keyboard.find(str.at(i))== -1){
                cout<<str.at(i);
            }else{
                cout<<keyboard.at(keyboard.find(str.at(i)) - 1);
            }
        }
        cout<<"\n";
    }
}
