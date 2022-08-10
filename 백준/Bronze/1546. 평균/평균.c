#include <stdio.h>

int main() {
    int N;
    int max=0;
    float avg=0;
    scanf("%d", &N);

    int arr[1000];

    for(int i=0; i<N; i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
    }

    for(int i=0; i<N; i++){
        avg += (float)arr[i]/max*100;
    }

    printf("%f",avg/N);
}