#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the two numbers");
    scanf("%d %d",&x,&y);
    x=x-y;
    y=x+y;
    x=y-x;
    printf("The reversed numbers are %d %d",x,y);
}
