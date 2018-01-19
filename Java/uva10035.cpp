#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

int main(){
    unsigned long a, b;
    while(scanf("%lu %lu", &a, &b)){
        if(a==0 && b==0){
            break;
        }
        int x[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int y[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        stringstream ss;
        ss << a;
        string sa = ss.str();
        stringstream ss2;
        ss2 << b;
        string sb = ss2.str();
        //cout<<"check1"<<endl;
        int index = 9;
        for(int i = sa.length() - 1; i >= 0; i--){
            x[index] = sa.at(i) - 48;
            index--;
        }
        //cout<<"check2"<<endl;
        index = 9;
        for(int i = sb.length() - 1; i >= 0; i--){
            y[index] = sb.at(i) - 48;
            index--;
        }

        //for(int i = 0; i < 10; i++){
          //  cout<<x[i]<<" "<<y[i]<<endl;
        //}
        //cout<<"check3"<<endl;
        int counter = 0;
        int carry = 0;
        for(int i = 9; i >= 0; i--){
            if(carry == 1){
                x[i]++;
                carry = 0;
            }
            if((x[i] + y[i]) >= 10 ){
                carry = 1;
                counter++;
            }
        }
        if(counter == 0){
            cout<<"No carry operation."<<endl;
        }else if(counter == 1){
            cout<<"1 carry operation."<<endl;
        }else{
            cout<<counter<<" carry operations."<<endl;
        }
        //scanf("%lu %lu"), &a, &b;
    }
}



