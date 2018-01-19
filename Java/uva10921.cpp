#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string str;
    while(cin >> str){
        for(int i = 0; i < str.length(); i++){
            if(isalpha(str.at(i))){
                str.at(i) = toupper(str.at(i));
                if(str.at(i) == 'A' || str.at(i) == 'B' || str.at(i) == 'C'){
                    str.at(i) = '2';
                }else if(str.at(i) == 'D' || str.at(i) == 'E' || str.at(i) == 'F'){
                    str.at(i) = '3';
                }else if(str.at(i) == 'G' || str.at(i) == 'H' || str.at(i) == 'I'){
                    str.at(i) = '4';
                }else if(str.at(i) == 'J' || str.at(i) == 'K' || str.at(i) == 'L'){
                    str.at(i) = '5';
                }else if(str.at(i) == 'M' || str.at(i) == 'N' || str.at(i) == 'O'){
                    str.at(i) = '6';
                }else if(str.at(i) == 'P' || str.at(i) == 'Q' || str.at(i) == 'R' || str.at(i) == 'S'){
                    str.at(i) = '7';
                }else if(str.at(i) == 'T' || str.at(i) == 'U' || str.at(i) == 'V'){
                    str.at(i) = '8';
                }else{
                    str.at(i) = '9';
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
