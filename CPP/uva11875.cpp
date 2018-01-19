#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int n;
        scanf("%d", &n);
        int ans;
        for(int j = 0; j < n; j++){
            int age;
            scanf("%d", &age);
            if(j == n / 2){
                ans = age;
            }
        }
        printf("Case %d: %d\n", (i + 1), ans);
    }
    return 0;
}
