#include <stdio.h>

using namespace std;

int main(){
    int h, u, d, f;
    while(scanf("%d %d %d %d", &h, &u, &d, &f)){
        if(h == 0 && u == 0 && d == 0 && f == 0){
            break;
        }
        double dropfactor = (double)u * ((double)f / 100);
        double current = 0;
        double du = (double)u;
        bool success;
        int day = 1;
        while(true){
            //printf("day %d %f %f", day, current, du);
            current = current + du;
            //printf(" %f", current);
            if(current > (double)h){
                success = true;
                break;
            }

            du = du - dropfactor;
            if(du < 0){
                du = 0;
            }
            current = current - (double)d;
            //printf(" %f\n", current);
            if(current < 0){
                success = false;
                break;
            }
            day++;
        }
        if(success){
            printf("success on day %d\n", day);
        }else{
            printf("failure on day %d\n", day);
        }
    }
    return 0;
}
