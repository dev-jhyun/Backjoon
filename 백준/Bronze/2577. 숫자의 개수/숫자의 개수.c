#include <stdio.h>

int main() {
    int A, B, C;
    int num[10] = { 0,};
    int k;
    scanf("%d %d %d", &A, &B, &C);

    int gop = A*B*C;

    while(gop>0) {
        k = gop%10;
        num[k]++;
        gop/=10;

    }


    for(int i=0; i<10; i++){
        printf("%d\n", num[i]);
    }

    

}