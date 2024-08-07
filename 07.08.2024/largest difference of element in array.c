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
    int min=999;
    for (int i =0;i<a;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    int scd_diff=0;
    for (int i=0;i<a;i++){
        for (int j=0;j<i;j++){
            if (arr[i]-arr[j]>scd_diff){
                    scd_diff=arr[i]-arr[j];
            }
        }
    }
    printf("%d",scd_diff);
}
