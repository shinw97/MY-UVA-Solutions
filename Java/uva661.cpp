#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    int testcase = 1;
    int device, op, fuse;
    while(scanf("%d %d %d", &device, &op, &fuse)){
        if(device == 0 && op == 0 && fuse == 0){
            break;
        }
        vector<bool> state(device, 0);
        int consume[device];
        for(int i = 0; i < device; i++){
            scanf("%d", &consume[i]);
        }
        int sum = 0, max_A = sum;
        bool broken = false;
        for(int i = 0; i < op; i++){
            int op_on_device;
            scanf("%d", &op_on_device);
            state[op_on_device - 1] = !state[op_on_device - 1];
            if(state[op_on_device - 1]){
                sum += consume[op_on_device - 1];
            }else{
                sum -= consume[op_on_device - 1];
            }
            if(sum > fuse){
                broken = true;
            }else if(sum > max_A){
                max_A = sum;
            }
        }
        if(broken){
            printf("Sequence %d\nFuse was blown.\n", testcase);
        }else{
            printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n", testcase, max_A);
        }
        printf("\n");
        testcase++;
    }
    return 0;
}
