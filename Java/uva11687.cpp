#include <iostream>
#include <sstream>

using namespace std;

int compute(string str){
    stringstream ss;
    ss << str.length();
    if(str.compare(ss.str()) == 0){
        return 1;
    }else{
        return compute(ss.str()) + 1;
    }
}

int main(){
    string str;
    while(cin >> str){
        if(str.compare("END") == 0){
            break;
        }
        cout << compute(str) << endl;
    }
    return 0;
}
