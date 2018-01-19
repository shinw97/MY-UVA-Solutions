#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    int testcase;
    cin>>testcase;
    for(int i = 0; i < testcase; i++){
        int moves;
        cin>>moves;
        vector<int> record;
        string command;
        cin.ignore();
        for(int j = 0; j < moves; j++){
            getline(cin, command);
            int direction;
            if(command.compare("LEFT") == 0){
                direction = -1;
                record.push_back(-1);
            }else if(command.compare("RIGHT") == 0){
                direction = 1;
                record.push_back(1);
            }else{
                stringstream ss(command);
                string dontcare;
                int position;
                ss >> dontcare >> dontcare;
                ss >> position;
                record.push_back(record[position - 1]);
            }
        }
        int sum = 0;
        for(int j = 0; j < record.size(); j++){
            sum += record[j];
        }
        cout<<sum<<endl;
    }
    return 0;
}
