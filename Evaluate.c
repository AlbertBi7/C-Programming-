/*Enter integer variables a, b, c, d, and e. evaluate the following expressions:
I. a + b – c + d
II. a * b/c+d
III. 1 + a * b % c
IV. a+d %b-c
*/
#include <stdio.h>

int main() {
    int a,b,c,d,output1,output2,output3,output4;
    printf("enter the value of numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    output1=a + b - c + d;
    output2=a * b/c+d;
    output3=1 + a * b % c;
    output4=a+d % b-c;
    printf("a + b - c + d= %d\n",output1);
    printf("a * b/c + d= %d\n",output2);
    printf("1 + a * b %% c= %d\n",output3);
    printf("a + d %% b-c= %d",output4);

    return 0;
}