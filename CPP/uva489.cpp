#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(){
    int round;
    while(cin >> round){
        if(round == -1){
            break;
        }
        string word, ans;
        cin >> word >> ans;
        list<char> l;
        list<char> a;
        for(int i = 0; i < word.length(); i++){
            l.push_back(word[i]);
        }
        for(int i = 0; i < ans.length(); i++){
            a.push_back(ans[i]);
        }
        int life = 7;
        cout<< "Round " << round <<endl;
        while(true){

            if(a.empty() && !l.empty() && life > 0){
                cout<< "You chickened out.\n";
                break;
            }
            if(life <= 0){
                cout<< "You lose.\n";
                break;
            }
            if(l.empty()){
                cout<< "You win.\n";
                break;
            }
            if(find(l.begin(), l.end(), a.front()) != l.end()){
                l.remove(a.front());
                char c = a.front();
                a.remove(c);
            }else{
                life--;
                char c = a.front();
                a.remove(c);
            }
        }
    }
    return 0;
}
