#include <stdio.h>
int main(){
    int a[10],i,n;
    printf("enter limit");
    scanf("%d",&n);
    int *aptr=a;
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("a[%d]=%d\n", i, *(aptr+i));
    }

    return 0;
    
}