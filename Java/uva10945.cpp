#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

bool is_Palindrome(string str){
    stack<char> s;
    for(int i = 0; i < str.length(); i++){
        s.push(str.at(i));
    }
    bool check = true;
    for(int i = 0; i < str.length(); i++){
        if(s.top() != str.at(i)){
            check = false;
            break;
        }else{
            s.pop();
        }
    }
    return check;
}

int main(){
    string str;
    while(getline(cin, str)){
        if(str.compare("DONE")==0){
            break;
        }
        string str_temp = "";
        for(int i = 0; i < str.length(); i++){
            if(isalpha(str.at(i))){
                str_temp += tolower(str.at(i));
            }
        }
        if(is_Palindrome(str_temp)){
            cout<<"You won't be eaten!"<<endl;
        }else{
            cout<<"Uh oh.."<<endl;
        }
    }
    return 0;
}
