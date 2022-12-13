#include<stdio.h>
int a,b,c;
int main(){
    while (scanf("%d %d",&a,&b) != EOF){
        c = a+b;
        printf("%d\n",(c*c));
    }
    return 0;
}