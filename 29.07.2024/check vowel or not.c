#include <stdio.h>
int main(){
    char x;
    printf("Enter the character");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("The character is a vowel:");
    }
    else{
        printf("The character is not vowel:");
    }
}
