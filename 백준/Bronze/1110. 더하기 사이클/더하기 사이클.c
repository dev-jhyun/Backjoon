#include <stdio.h>

int main() {
    int N, result;
    int count =0;
    scanf("%d", &N);
    result = N;

    while(1){
        int A = N/10;
        int B = N%10;
        int C = (A+B)%10;
        int D = B*10+C;
        N=D;
        count++;

        if(D==result)
            break;
    }
    printf("%d", count);

}