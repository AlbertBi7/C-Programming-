#include <stdio.h>
struct employee{
    char name[20];
    long int e_id;
    double salary;
};
int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    struct employee emply[n];
        for(int i=0;i<n;i++){
            printf("Enter the details of employee %d\n",i+1);
            printf("Enter the employee ID:");
            scanf("%ld",&emply[i].e_id);
            printf("Enter the employee name:");
            scanf("%s",&emply[i].name);
            printf("Enter the salary of the employee:");
            scanf("%f",&emply[i].salary);
        }
        printf("\nDetails of %d students is:\n",n);
        printf("\nEmployeeId\tEmployee Name\tSalary\n");
        for(int i=0;i<n;i++){
            printf("%ld\t",emply[i].e_id);
            printf("%s\t",emply[i].name);
            printf("%.2f\n",emply[i].salary);
            
        }
        return 0; 
    }