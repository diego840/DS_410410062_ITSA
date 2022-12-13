#include<stdio.h>
double x,y,z;
double tmp;
int main(){
    while(scanf("%lf %lf %lf",&x,&y,&z) != EOF){
        tmp = ((x+y)*z)/2;
        printf("Trapezoid area:%.1lf\n",tmp);
    }
    return 0;
}