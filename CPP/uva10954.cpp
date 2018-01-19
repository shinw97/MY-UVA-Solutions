#include <stdio.h>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main(){
    unsigned long n;
    while(scanf("%lu", &n) != EOF){
        if(n == 0){
            break;
        }
        priority_queue<unsigned long, vector<unsigned long>, greater<unsigned long> > q;
        for(int i = 0; i < n; i++){
            unsigned long num;
            scanf("%lu", &num);
            q.push(num);
        }
        unsigned long sum = 0;
        unsigned long cost = 0;
        while(q.size() > 1){
            sum = q.top(), q.pop();
            sum += q.top(), q.pop();
            cost += sum;
            q.push(sum);
        }
        printf("%lu\n", cost);
    }
}
