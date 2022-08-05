#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);

    if(0<h && h<=24){
        if(m<45){
            h = h-1;
            m = 60 - (45 -m); 
        } else {
            m = m -45;
        }
    } else if (h==0) {
        if(m<45){
            h = 23;
            m = 60 - (45 -m); 
        } else {
            m = m -45;
        }
    }

    printf("%d %d", h, m);
}