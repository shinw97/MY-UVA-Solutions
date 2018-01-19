#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int nhello;
    int testcase = 0;
    while(cin>>nhello){
        if(nhello < 0){
            break;
        }
        int n = 1;
        int step = 0;
        while(true){
            if(n * 2 > nhello){
                break;
            }
            n *= 2;
            step++;
        }
        if(n == nhello){
            printf("Case %d: %d\n", (testcase + 1), step);
        }else{
            step++;
            printf("Case %d: %d\n", (testcase + 1), step);
        }
        testcase++;
    }
    return 0;
}
