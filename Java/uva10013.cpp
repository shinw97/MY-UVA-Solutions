#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int testcase;
    scanf("%d", &testcase);
    bool first = true;
    for(int i = 0; i < testcase; i++){
        if(!first){
            cout<<endl;
        }
        first = false;
        int digits;
        scanf("%d", &digits);
        vector<int> n1;
        vector<int> n2;
        int x, y;
        for(int j = 0; j < digits; j++){
            scanf("%d %d", &x, &y);
            n1.push_back(x);
            n2.push_back(y);
        }
        int sum = 0, carry = 0;
        string ans(digits, ' ');
        for(int j = digits - 1; j >= 0; j--){
            sum = n1[j] + n2[j] + carry;
            carry = sum / 10;
            ans[j] = (sum % 10 ) + '0';
        }
        if(carry == 1){
            printf("1");
        }
        cout<<ans<<endl;
    }
    return 0;
}
