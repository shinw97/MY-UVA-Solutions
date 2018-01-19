#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

int main(){
string input;
getline(cin, input);
stringstream ss(input);
int testcase;
ss >> testcase;
for(int i = 0; i < testcase; i++){
    getline(cin, input);
    int value;
    stringstream ss1(input);
    ss1 >> value;
    string numLine;
    for(int j = 1; j <= value; j++){
        ostringstream ss;
        ss << j;
        numLine.append(ss.str());
    }
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;
    for(int j = 0; j < numLine.length(); j++){
        char c = numLine.at(j);
        switch(c){
        case '1':
            one++;
            break;
        case '2':
            two++;
            break;
        case '3':
            three++;
            break;
        case '4':
            four++;
            break;
        case '5':
            five++;
            break;
        case '6':
            six++;
            break;
        case '7':
            seven++;
            break;
        case '8':
            eight++;
            break;
        case '9':
            nine++;
            break;
        case '0':
            zero++;
            break;
        default:
            break;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d\n",zero, one, two, three, four, five, six, seven, eight, nine);
}

}
