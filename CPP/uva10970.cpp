#include <stdio.h>

using namespace std;

int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
        int result = (x * y) - 1;
        printf("%d\n", result);
    }
    return 0;
}