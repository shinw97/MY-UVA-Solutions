#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int testcase;
    cin >> testcase;
    cin.ignore();
    for(int i = 0; i < testcase; i++){
        string line;
        getline(cin, line);
        stringstream ss(line);
        string piece;
        int rm = 0, rf = 0, lm = 0, lf = 0, numPieces = 0;
        while(ss >> piece){
            if(piece[0] == 'M'){
                lm++;
            }else{
                lf++;
            }
            if(piece[1] == 'M'){
                rm++;
            }else{
                rf++;
            }
            numPieces++;
        }
        if((rm == lf && lm == rf) && (numPieces != 1)){
            cout<<"LOOP"<<endl;
        }else{
            cout<<"NO LOOP"<<endl;
        }
    }
    return 0;
}
