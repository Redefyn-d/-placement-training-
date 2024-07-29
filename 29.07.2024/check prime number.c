#include <stdio.h>
int prime_check(int a){
    int c=0;
    for (int i=1;i<=a;i++){
        if (a%i==0){
            c+=1;
        }
    }
    if (c==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    if (prime_check(x)){
        printf("Prime Number");
    }
    else{
        printf("Not Prime Number");
    }
}
