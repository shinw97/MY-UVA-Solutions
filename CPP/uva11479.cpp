#include <iostream>

using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        long long int a, b, c;
        cin >> a >> b >> c;
        if(a >= b + c || b >= a + c || c >= a + b || a <= 0 || b <= 0 || c <= 0){
            cout<<"Case "<<(i + 1)<<": Invalid"<<endl;
            continue;
        }else{
            if(a == b && b == c){
                cout<<"Case "<<(i + 1)<<": Equilateral"<<endl;
            }else if(a == b || a == c || b == c){
                cout<<"Case "<<(i + 1)<<": Isosceles"<<endl;
            }else{
                cout<<"Case "<<(i + 1)<<": Scalene"<<endl;
            }
        }
    }
    return 0;
}

