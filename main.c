#include <stdio.h>
#include <stdlib.h>

int main()
{
         int matris[10][10];
    int i,j,k;

    k=7;

    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            matris[i][j]=k;
            k=k+7;
        }
    }
    for(i=9;i>=0;i--){
        for(j=9;j>=0;j--){
            printf("%d ",matris[i][j]);
        }

    }
    return 0;
}
