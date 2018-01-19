#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
int a, b, c, d;
scanf("%d %d %d %d", &a, &b, &c, &d);
while(!(a == 0 && b == 0 && c == 0 && d == 0 )){
    int degree = 1080;
    if(b - a > 0){
        degree = degree + (a + 40 - b)*9;
    }
    if(b - a < 0){
        degree = degree + (a - b)*9;
    }
    if(c - b > 0){
        degree = degree + (c - b)*9;
    }
    if(c - b < 0){
        degree = degree + (c + 40 - b)*9;
    }
    if(d - c > 0){
        degree = degree + (c + 40 - d)*9;
    }
    if(d - c < 0){
        degree = degree + (c - d)*9;
    }
    cout<<degree<<endl;
    scanf("%d %d %d %d", &a, &b, &c, &d);
}
return 0;
}
