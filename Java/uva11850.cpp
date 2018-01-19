#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int stops;
    while(scanf("%d", &stops)){
        if(stops == 0){
            break;
        }
        int diff;
        bool check = true;
        vector<int> v;
        for(int i = 0; i < stops; i++){
            int num;
            scanf("%d", &num);
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        if(v[0] > 200 || v[v.size() - 1] < 1322){
            check = false;
        }else{
            int temp = v[0];
            for(int i = 1; i < v.size(); i++){
                if(v[i] - temp > 200){
                    check = false;
                    break;
                }
                temp = v[i];
            }
        }
        if(check){
            printf("POSSIBLE\n");
        }else{
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
