#include <stdio.h>
int sumPointer(int *,int *);
int swapPointer(int *,int *);

int main(){
    char choice;
    int sum,a,b,operation;
    
    do{
        printf("\nMenu:\n");
        printf("1.ADDITION OF TWO NUMBERS\n");
        printf("2.SWAPPING TWO NUMBERS\n");
        
        printf("3.EXIT\n");
      
        printf("Enter an operation: ");
        scanf(" %d", &operation);

        switch(operation){
            case 1:
                printf("Enter the numbers to take sum of:");
                scanf("%d%d",&a,&b);
                sum = sumPointer(&a,&b);
                printf("The sum of the two numbers %d and %d = %d",a,b,sum);
                break;
            case 2:
                printf("Enter the numbers to take swap:");
                scanf("%d%d",&a,&b);
                printf("\nThe numbers before swapping:%d and %d",a,b);
                swapPointer(&a,&b);
                printf("\nThe numbers after swapping:%d and %d",a,b);
                break;
            case 3:
                printf("Exiting...");
                break;
            default:
                printf("NOT A VALID OPERATION!");
                break;
        }


        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);

    }while(choice=='y'||choice=='Y');
}

int sumPointer(int *i,int *j ){
    return *i+*j;
}
int swapPointer(int *i,int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
    

}