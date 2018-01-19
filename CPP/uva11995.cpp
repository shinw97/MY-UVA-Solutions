#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int main(){
    int steps;
    while(cin >> steps){
        if(steps <= 0){
            cout<<"not sure"<<endl;
            continue;
        }
        int is_stack = 1, is_queue = 1, is_pq = 1;
        stack<int> s;
        queue<int> q;
        priority_queue<int> p;
        int act, val;
        for(int i = 0; i < steps; i++){
            cin >> act >> val;
            if(act == 1){
                s.push(val);
                q.push(val);
                p.push(val);
            }
            if(act == 2){
                if(s.empty()){
                    is_stack = 0;
                }
                if(q.empty()){
                    is_queue = 0;
                }
                if(p.empty()){
                    is_pq = 0;
                }
                if(is_stack){
                    if(s.top() != val){
                        is_stack = 0;
                    }else{
                        s.pop();
                    }
                }
                if(is_queue){
                    if(q.front() != val){
                        is_queue = 0;
                    }else{
                        q.pop();
                    }
                }
                if(is_pq){
                    if(p.top() != val){
                        is_pq = 0;
                    }else{
                        p.pop();
                    }
                }
            }
        }
        if(is_stack + is_queue + is_pq > 1){
            cout<<"not sure"<<endl;
        }else if(is_stack){
            cout<<"stack"<<endl;
        }else if(is_queue){
            cout<<"queue"<<endl;
        }else if(is_pq){
            cout<<"priority queue"<<endl;
        }else{
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}
