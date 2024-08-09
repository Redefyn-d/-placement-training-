#include <stdio.h>
int main(){
    int a;
    printf("Enter the number you want the factorail for");
    scanf("%d",&a);
    int prd=1;
    for (int i=1;i<=a;i++){
        prd*=i;
    }
    printf("%d",prd);
}
