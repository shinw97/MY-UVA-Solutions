#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout<<"PERFECTION OUTPUT"<<endl;
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        int sum = 1;
        int i = 2;
        while(i <= n/2){
            if(n % i == 0){
                sum += i;
            }
            i++;
        }
        cout<<setw(5)<<n;
        if(n == 1){
            cout<<"  DEFICIENT"<<endl;
        }else if(sum == n){
            cout<<"  PERFECT"<<endl;
        }else if(sum < n){
            cout<<"  DEFICIENT"<<endl;
        }else{
            cout<<"  ABUNDANT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
