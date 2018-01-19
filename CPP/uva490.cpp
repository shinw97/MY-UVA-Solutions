#include <iostream>
#include <vector>
using namespace std;

int main(){
    string arr[102][102];
    for(int a = 0; a < 102; a++){
        for(int b = 0; b < 102; b++){
            arr[a][b] = " ";
        }
    }
    string str;
    int a = 0;
    int maxlength = 0;
    int counter = 0;
    int i = 0;
    int lastlength;
    while(getline(cin, str)){
        if(str.empty()){
            break;
        }
        for(int j = 0; j < str.length(); j++){
            arr[i][j] = str.at(j);
        }
        if(str.length() > maxlength){
            maxlength = str.length();
        }
        lastlength = str.length();
        i++;
        counter++;
    }
    for(int j = 0; j < maxlength; j++){
        for(i = counter - 1; i >= 0; i--){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
