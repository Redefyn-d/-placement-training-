#include <stdio.h>
int main(){
    int x;
    printf("Enter the number till which you want to learn tables");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
        printf("Table of %d\n",i);
        for (int d=1;d<=10;d++){
            printf("%dx%d=%d\n",i,d,i*d);
        }
    }
}
