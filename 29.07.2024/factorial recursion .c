#include <stdio.h>
int fact(int n){
    if(n<=2){
        return n;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int x;
    printf("Enter the number for which you want to find factorial");
    scanf("%d",&x);
    printf("%d",fact(x));
}
