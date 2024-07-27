#include <stdio.h>
int main(){
    char x;
    int a,b;
    printf("Enter the character");
    scanf("%c",&x);
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    switch(x){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
    }
    return 0;
}
