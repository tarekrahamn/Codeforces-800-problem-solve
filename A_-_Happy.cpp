#include<stdio.h>
int main (){
    int x,y;
    scanf("%d%d",&x,&y);
    if( x+y >= 10){
        printf("error\n");
    }
    else{
          printf("%d\n",x+y);
    }
    return 0;
}