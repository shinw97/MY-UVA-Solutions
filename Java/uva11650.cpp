#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        string str;
        cin>>str;
        int index = str.find(":");
        str[index] = ' ';
        stringstream ss(str);
        int h, m;
        ss >> h;
        ss >> m;
        int reverse_h, reverse_m;
        if(m > 30){
            reverse_m = 0 + (60 - m);
        }else if(m == 0){
            reverse_m = 0;
        }else{
            reverse_m = 60 - m;
        }
        if(reverse_m == 0){
            if(h == 12){
                reverse_h = 12;
            }else if(h > 6){
                reverse_h = 0 + (12 - h);
                if(reverse_h == 0){
                    reverse_h = 12;
                }
            }else{
                reverse_h = 12 - h;
            }
        }else{
            if(h == 12){
                reverse_h = 11;
            }else if(h > 6){
                reverse_h = 0 + (12 - h) - 1;
                if(reverse_h == 0){
                    reverse_h = 12;
                }
            }else{
                reverse_h = 12 - h - 1;
            }
        }
        if(reverse_h / 10 == 0){
            cout<<"0"<<reverse_h<<":";
        }else{
            cout<<reverse_h<<":";
        }
        if(reverse_m / 10 == 0){
            cout<<"0"<<reverse_m<<endl;
        }else{
            cout<<reverse_m<<endl;
        }
    }
}
