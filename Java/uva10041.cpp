#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int testcase;
    scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++){
        int n;
        scanf("%d", &n);
        vector<int> v;
        int live;
        for(int j = 0; j < n; j++){
            scanf("%d", &live);
            v.push_back(live);
        }
        sort(v.begin(), v.end());
        int mid;
        if(n % 2 == 0){
            mid = (v[n / 2] + v[(n / 2) - 1]) / 2;
        }else{
            mid = v[n / 2];
        }
        int ans = 0;
        for(int j = 0; j < v.size(); j++){
            if(mid > v[j]){
                ans += mid - v[j];
            }else{
                ans += v[j] - mid;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
