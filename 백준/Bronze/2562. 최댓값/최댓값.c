#include <stdio.h>

int main() {
    int arr[9];
    int index;
    int max = arr[0];
    
    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]);

        if(arr[i]>max){
            max = arr[i];
            index = i+1;
        }
    }

    printf("%d\n", max);
    printf("%d", index);
    
}