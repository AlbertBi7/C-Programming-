#include<stdio.h>

int main(){
int i,n,position;
printf("Enter the number of elements in array:");
scanf("%d\n",&n);
int array[n];
for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}

printf("Enter the position to delete:");
scanf("%d",&position);
i=0;
while(i!=position){
    i++;
}

while(i<n){
array[i]=array[i+1];
i++;
}
n--;

printf("The array is :");
for(i=0;i<n;i++){
    printf("%d ",array[i]);
}
return 0;
}