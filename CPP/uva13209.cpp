#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
int x;
scanf("%d", &x);
for(int i = 0; i < x; i++){
    long double n;
    cin>>n;
    cout<<1/n<<endl;
}
return 0;
}
