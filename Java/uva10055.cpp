#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    unsigned long a, b;
    while(scanf("%lu %lu", &a, &b)!= EOF){
        if(a >= b){
            printf("%lu\n", (a - b));
        }else{
            printf("%lu\n", (b - a));
        }
    }
}
