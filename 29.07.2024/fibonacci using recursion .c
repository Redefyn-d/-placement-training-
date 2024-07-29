#include <stdio.h>
int display(int n){
    if(n<=1){
        return n;
    }
    else{
        return display(n-1)+display(n-2);
    }
}
int main(){
    int x;
    printf("Enter the number of digits in series: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("%d ",display(i));
    }
}
