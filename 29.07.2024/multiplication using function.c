#include <stdio.h>
void pow(int x, int y){
    int prd=1;
    for (int i=0;i<y;i++){
        prd*=x;
    }
    printf("%d",prd);
}
int main(){
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
