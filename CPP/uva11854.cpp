#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long unsigned x, y, z;
    string builder = "";
    while(cin >> x >> y >> z){
        if(x == 0 && y == 0 && z == 0){
            break;
        }
        if(x > y){
            swap(x, y);
        }
        if(y > z){
            swap(y, z);
        }
        if((z * z) == (y * y + x * x)){
            builder.append("right\n");
        }else{
            builder.append("wrong\n");
        }
    }
    cout<<builder;
    return 0;
}
