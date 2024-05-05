#include <stdio.h>
#include <math.h>
struct Euclidean{
    int x;
    int y;
};
int main(){
    int n,sigmaX,sigmaY;
    printf("Enter the number of points:");
    scanf("%d",&n);
    struct Euclidean points[n];
    for(int i=0;i<n;i++){
            printf("Enter the Coordinate of point(%d):",i+1);
            scanf("%d%d",&points[i].x,&points[i].y);
    }
    double D=sqrt(pow(points[1].x-points[0].x,2)+pow(points[1].y-points[0].y,2));
    printf("The Euclidean distance of points (%d,%d) and (%d,%d) is %f",
    points[0].x,points[0].y,points[1].x,points[1].y,D);

    return 0;
}