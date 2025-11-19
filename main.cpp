#include <stdio.h>
#include "sum.h"

int main() {
    int a[5] = {1,2,4,6,7};
    int i = 5;
    while (i>0)
    {
        int result = getSum(a[i-1],10);
        printf("The sum of %d and 10 is %d\n", a[i-1], result);
        i--;
    }
    
    return 0;
}
