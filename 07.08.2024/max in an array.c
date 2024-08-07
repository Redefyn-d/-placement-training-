#include <stdio.h>
int main(){
    int a;
    printf("Enter the number of elements in the array");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        printf("Enter the element value: ");
        scanf("%d",&arr[i]);
    }
    int max=0;
    for (int i =0;i<a;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
}
