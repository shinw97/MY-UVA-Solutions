#include <stdio.h>

using namespace std;

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b)){
        if(a == -1 && b == -1){
            break;
        }
        int ans;
        if(b > a){
            if(b - a > 50){
                ans = 100 - b + a;
            }else{
                ans = b - a;
            }
        }else{
            if(a - b > 50){
                ans = 100 - a + b;
            }else{
                ans = a - b;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
