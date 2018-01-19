#include <stdio.h>
#include <algorithm>

using namespace std;

int get_DegreeM(int m){
    int ans = (m * 360) / 60;
    if(ans == 360){
        ans = 0;
    }
    return ans;
}

int get_DegreeH(int h, int m){
    int factor = m / 12;
    int ans = (h * 30) + factor * 6;
    if(ans == 360){
        ans = 0;
    }
    return ans;
}

int getMinimum(int h, int m){
    int a = get_DegreeH(h, m);
    int b = get_DegreeM(m);
    if(a < b){
        swap(a, b);
    }
    int ans;
    if(a - b > 180){
        ans = 360 - a + b;
    }else{
        ans = a - b;
    }
    return ans;
}

int main(){
    int degree;
    while(scanf("%d", &degree) != EOF){
        int h = 0, m = 0;
        int min_degree;
        bool check = false;
        while(true){
            if(h == 12 && m == 0){
                break;
            }
            min_degree = getMinimum(h, m);
            if(min_degree == degree){
                check = true;
                break;
            }
            m++;
            if(m == 60){
                m = 0;
                h++;
            }
        }
        if(check){
            printf("Y\n");
        }else{
            printf("N\n");
        }
    }
    return 0;
}
