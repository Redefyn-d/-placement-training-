#include <stdio.h>
#include <stdlib.h>
struct emp{
    int phone;
    char name[20];
    char email[40];
    char address[50];
};

int count=0;
struct emp emp_list[100];

void add(){
    if (count>100){
        printf("The list is full remove some value.");
    }
    struct emp newemp;
    int num_emp;
    printf("Enter the number of employees: ");
    scanf("%d",&num_emp);
    for (int i=0;i<num_emp;i++){
        if (count>100){
        printf("The list is full remove some value.");
        }
        printf("Enter the new Phone number: ");
        scanf("%d",&newemp.phone);
        printf("Enter the new name of the employee: ");
        scanf("%s",&newemp.name);
        printf("Enter the new mail of the employee: ");
        scanf("%s",&newemp.email);
        printf("Enter the address of the new employee data: ");
        scanf("%s",&newemp.address);
        emp_list[count++]=newemp;
        printf("The data is added\n");
    }
}
void remove_contact(){
    int d_phone,found=0;
    printf("Enter the phone number you want to delete");
    scanf("%d",&d_phone);
    for (int i=0;i<count;i++){
        if (emp_list[i].phone==d_phone){
            found=1;
            for (int j=i;j<count-1;j++){
                emp_list[j]=emp_list[j+1];
            }
            count--;
            printf("The data is removed\n");
            break;
        }
    }
    if (!found){
        printf("The value is not found\n");
    }
}
void search_contact(){
    int d_phone,found=0;
    printf("Enter the phone number you want to search: ");
    scanf("%d",&d_phone);
    for (int i=0;i<count;i++){
        if (emp_list[i].phone==d_phone){
            found=1;
            printf("%d\n%s\n",emp_list[i].phone,emp_list[i].name);
        }
    }
    if (!found){
        printf("The value is not found\n");
    }
}
int main(){
    printf("1.Add Contacts\n");
    printf("2.Remove Contact\n");
    printf("3.Search Conatact\n");
    printf("4.Quit Program\n");
    int option;
    int l=1;
    while (l){
        printf("Enter your option from the menu: ");
        scanf("%d",&option);
        switch (option){
            case 1:
            add();
            break;
            case 2:
            remove_contact();
            break;
            case 3:
            search_contact();
            break;
            case 4:
            l=0;
        }
    }
}
