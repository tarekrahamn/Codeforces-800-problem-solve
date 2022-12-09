#include <stdio.h>
int main(){
    int t, x, y;
    scanf("%d",&t);
    while (t--){
        scanf("%d %d",&x,&y);
        int z = (x * y + 1) / 2 ;
        printf("%d\n",z);
    }
    return 0;
}

