#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

int answer(int n, int ans){
    if(n / 10 == 0){
        return n;
    }
    while(n != 0){
        ans += n % 10;
        n /= 10;
    }
    return answer(ans, 0);
}

int main(){
    string n1, n2;
    while(getline(cin, n1) && getline(cin, n2)){
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n1.length(); i++){
            if(isalpha(n1.at(i))){
                n1.at(i) = tolower(n1.at(i));
                sum1 += n1.at(i) - 96;
            }
        }
        for(int i = 0; i < n2.length(); i++){
            if(isalpha(n2.at(i))){
                n2.at(i) = tolower(n2.at(i));
                sum2 += n2.at(i) - 96;
            }
        }
        sum1 = answer(sum1, 0);
        sum2 = answer(sum2, 0);
        double ans;
        if(sum1 > sum2){
            ans = ((double)sum2 / (double)sum1) * 100;
        }else{
            ans = ((double)sum1 / (double)sum2) * 100;
        }
        cout<<fixed<<setprecision(2)<<ans<<" %"<<endl;
    }
    return 0;
}
