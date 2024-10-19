#include <stdio.h>

int main() {
    int a,b,c, dif1=0 , dif2=0, sum=0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if(a>b && a<c ){
       dif1 = a-b;
       dif2 = c-a;
       sum = dif1+dif2;
    }
    else if( a<b && c<a ){
       dif1 = b-a;
       dif2 = a-c;
       sum = dif1+dif2;
    }
    else if (b>a && b<c){
       dif1 = b-a;
       dif2 = c-b;
       sum = dif1+dif2;
    }
    else if (b<a && b>c){
       dif1 = a-b;
       dif2 = b-c;
       sum = dif1+dif2;
    }
    else if (a<c && c<b){
       dif1 = c-a;
       dif2 = b-c;
       sum = dif1+dif2;
    }
    else if (b<c && c<a){
       dif1 = c-b;
       dif2 = a-c;
       sum = dif1+dif2;
    }
    printf("%d",sum);

    return 0;
}
