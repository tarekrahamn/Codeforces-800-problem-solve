#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        long long int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        long long int r1,r2,r3,sum=0;
        r1=a*1;
        r2=b*2;
        r3=c*3;
        sum=r1+r2+r3;
        if(sum%2==0){
           printf("0\n");
        }
        else if(sum%2==1){
            printf("1\n");
        }
    }
    return 0;
}