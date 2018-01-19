#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str;
    while(cin>>str){
        if(str.compare("#") == 0){
            break;
        }
        if(next_permutation(str.begin(), str.end()) == true){
            cout<<str<<endl;
        }else{
            cout<<"No Successor"<<endl;
        }
    }
}
