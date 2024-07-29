#include <stdio.h>
int main(){
    int ne,c,x[10];
    for (int i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
    scanf("%d",&c);
    printf("Enter new element");
    scanf("%d",&ne);
    for (int i=0;i<10;i++){
        if (i==c){
            x[i]=ne;
        }
    }
    for (int i=0;i<10;i++){
        printf("%d ",x[i]);
    }
}
