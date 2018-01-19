#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
string line;
while(getline(cin, line)){
    for(int i = 0; i < line.length(); i++){
        line.at(i) = line.at(i) - 7;
    }
    cout<<line<<endl;
}
}
