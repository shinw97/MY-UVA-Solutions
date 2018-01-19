#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <sstream>

using namespace std;
bool isPalindrome(string str){
    string temp = str;
    reverse(temp.begin(), temp.end());
    if(str.compare(temp) == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int testcase;
    scanf("%d", &testcase);
    cin.ignore();
    for(int i = 0; i < testcase; i++){
        string num1;
        int counter = 0;
        getline(cin, num1);
        do{
            string num2 = num1;
            reverse(num2.begin(), num2.end());
            unsigned long n1, n2, sum = 0;
            istringstream iss1(num1);
            iss1 >> n1;
            istringstream iss2(num2);
            iss2 >> n2;
            sum = n1 + n2;
            stringstream ss;
            ss << sum;
            num1 = ss.str();
            counter++;
        }while(!isPalindrome(num1));
        cout<<counter<<" "<<num1<<endl;
    }
}
