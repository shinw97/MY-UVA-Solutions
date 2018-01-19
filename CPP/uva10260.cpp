#include <iostream>

using namespace std;

string alpha = "BFPVCGJKQSXZDTLMNR";
string val = "111122222222334556";

int main(){
    string str;
    while(cin >> str){
        if(str.empty()){
            break;
        }
        char tempval = ' ';
        string ans = "";
        for(int i = 0; i < str.length(); i++){
            size_t index = alpha.find(str.at(i));
            char tempchar;
            if(index == -1){
                tempchar = '0';
            }else{
                tempchar = val[index];
            }

            if(tempval == tempchar){
                continue;
            }

            if(index == -1){
                tempval = '0';
                continue;
            }
            tempval = tempchar;
            ans = ans + tempval;
        }
        cout<<ans<<endl;
    }
    return 0;
}
