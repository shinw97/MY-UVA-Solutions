#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
using namespace std;

int main(){
string str;
while(getline(cin, str)){
for(int i = 0; i < str.length(); i++){
    if(!(isalpha(str.at(i))||isspace(str.at(i)))){
        str.at(i) = ' ';
        //str.erase(str.begin()+i);
        //i--;
    }
}
//cout<<str<<endl;
istringstream iss(str);
int counter = 0;
string word;
while(iss >> word){
    counter++;
}
cout<<counter<<endl;
}
return 0;
}
