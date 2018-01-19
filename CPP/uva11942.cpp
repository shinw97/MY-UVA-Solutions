#include <iostream>

using namespace std;

int main(){
    int testcase;
    cout<<"Lumberjacks:"<<endl;
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        int temp, current;
        cin>>temp;
        bool Io = false, Do = false;
        for(int j = 1; j < 10; j++){
            cin>>current;
            if(current == temp){
                continue;
            }
            if(current > temp){
                Io = true;
                temp = current;
                continue;
            }
            if(current < temp){
                Do = true;
                temp = current;
            }
        }
        if(Io ^ Do == true){
            cout<<"Ordered"<<endl;
        }else{
            cout<<"Unordered"<<endl;
        }
    }
    return 0;
}
