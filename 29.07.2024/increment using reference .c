//Program to increement(with reference)
#include <stdio.h>
void add(int *x){
  *x+=1;
  printf("Increemented",*x)
}
int main(){
    int x;
    printf("Enter numbers:");
    scanf("%d",&x);
    printf("Before increement:%d",x);
    add(&x);
    printf("After increement:%d",x);
}
