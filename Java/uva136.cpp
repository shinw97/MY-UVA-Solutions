#include <iostream>

using namespace std;

bool isUgly(unsigned n){
    while(n % 2 == 0){
        n = n / 2;
    }
    while(n % 3 == 0){
        n = n / 3;
    }
    while(n % 5 == 0){
        n = n / 5;
    }
    if(n == 1){
        return true;
    }else{
        return false;
    }
}

int main(){
    unsigned n = 1;
    int counter = 0;
    while(counter != 1500){
        if(isUgly(n)){
            counter++;
        }
        n++;
    }
    cout<<"The 1500'th ugly number is "<<n<<"."<<endl;
}
