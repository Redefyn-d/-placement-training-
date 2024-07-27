#include <stdio.h>
int main(){
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(x%i==0){
            printf("%d\t",i);
        }
    }
}
