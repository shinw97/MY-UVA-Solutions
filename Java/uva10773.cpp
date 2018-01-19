#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 1; i <= testcase; i++){
        double w, u, v;
        //scanf("%f %f %f", &w, &u, &v);
        cin>>w>>u>>v;
        if((u == 0) || (v == 0) || (u >= v) || (w == 0)){
            printf("Case %d: can't determine\n", i);
            continue;
        }
        double d1 = w / (sin(atan(v/u)));
        double s1 = sqrt(pow(u, 2.0) + pow(v, 2.0));
        double t1 = d1 / s1;
        double d2 = w;
        double s2 = v * sin(acos(u/v));
        double t2 = d2 / s2;
        if(t1 > t2){
            double diff = t1 - t2;
            printf("Case %d: ", i);
            cout<<fixed;
            cout<<setprecision(3)<<diff<<endl;
        }else{
            double diff = t2 - t1;
            printf("Case %d: ", i);
            cout<<fixed;
            cout<<setprecision(3)<<diff<<endl;
        }
    }
}
