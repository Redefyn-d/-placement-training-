#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf("Before swapping x=%d and y=%d\n",x,y);
    x=x-y;
    y=x+y;
    x=y-x;
    printf("After swapping x=%d and y=%d",x,y);
}
