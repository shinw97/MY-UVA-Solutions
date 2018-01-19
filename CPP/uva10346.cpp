#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
        int result = x;
        while(x / y > 0){
            result += x / y;
            x = x / y + x % y;
        }
        cout<<result<<endl;
    }
}
