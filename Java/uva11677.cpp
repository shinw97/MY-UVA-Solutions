#include <stdio.h>

using namespace std;

int main(){
    int h1, m1, h2, m2;
    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2)){
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
            break;
        }
        int ans_m, ans_h;
        if(m1 > m2){
            ans_m = 60 - m1 + m2;
            h2--;
            if(h2 == -1){
                h2 = 23;
            }
        }else{
            ans_m = m2 - m1;
        }
        if(h1 > h2){
            ans_h = 24 - h1 + h2;
        }else{
            ans_h = h2 - h1;
        }
        int ans = (ans_h * 60) + ans_m;
        printf("%d\n", ans);
    }
    return 0;
}
