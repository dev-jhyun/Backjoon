#include <stdio.h>

int main() {
    int A;
    int arr[10];;
    int result=0;

    for(int i=0; i<10; i++){
        scanf("%d", &A);
        arr[i]=A%42;
    }

    for(int i=0; i<10; i++){
        int count = 0;
        for(int j=i+1; j<10; j++){
            if(arr[i] == arr[j])
                count++;
        }
        if(count==0)
            result++;
        
    }

    printf("%d",result);

}