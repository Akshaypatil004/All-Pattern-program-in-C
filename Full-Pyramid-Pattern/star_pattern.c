/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include<stdio.h>

int main(){
    int n;

    printf("Enter number of row:    ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int k=n-1;k>=i;k--){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        for(int l=1; l<i; l++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}