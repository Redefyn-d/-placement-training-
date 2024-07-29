#include <stdio.h>
int main(){
    int c,x[10];
    for (int i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
    scanf("%d",&c);
    for (int i=0;i<10;i++){
        if (c==x[i]){
            printf("The index is %d",i);
            break;
        }
    }
}
