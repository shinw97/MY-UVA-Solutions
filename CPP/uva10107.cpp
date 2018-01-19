#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long unsigned n;
    vector<long unsigned> v;
    while(scanf("%lu", &n) != EOF){
        v.push_back(n);
        sort(v.begin(), v.end());
        unsigned long ans;
        if(v.size() % 2 != 0){
            ans = v[v.size()/2];    
        }else{
            ans = (v[v.size()/2] + v[v.size()/2 - 1])/2;
        }
        printf("%lu\n", ans);
    }
    return 0;
}



