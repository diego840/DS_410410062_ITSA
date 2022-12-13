#include<stdio.h>
double x,y;
double tmp;
int main(){
    while(scanf("%lf %lf",&x,&y) != EOF){
        tmp = (x*y)/2;
        printf("%.1lf\n",tmp);
    }
    return 0;
}