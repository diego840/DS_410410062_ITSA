#include<stdio.h>
int a,b;
int main(){
    while (scanf("%d",&a) != EOF){
        if (a<=31){
            b = 2;
            for (int i = 0; i < a-1; i++){
                b *= 2;
            }
            printf("%d\n",b);
        }else{
            printf("Value of more than 31\n");
        }
    }
    return 0;
}