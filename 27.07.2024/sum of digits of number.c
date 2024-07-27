#include <stdio.h>
int main(){
    int x,sum;
    printf("Enter the number");
    scanf("%d",&x);
    while(x!=0){
        sum+=x%10;
        x/=10;
    }
    printf("Sum of the digits is :%d",sum);
}
