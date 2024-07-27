#include <stdio.h>
int main(){
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        for(int j=1;j<=i;j++){
            printf("%d\t",j);
        }
    printf("\n");
    }
}
