/*
         A
       A B C
     A B C D E
   A B C D E F G
 A B C D E F G H I

*/
#include<stdio.h>

int main(){

    int n;
    int i,j,k,l;
    printf("Enter number of rows:   ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(k=n-1;k>=i;k--){
            printf("  "); 
        }
        for(j=1;j<=i;j++){
            printf("%c ",64+j);
        }
        for(l=1;l<i;l++){
            printf("%c ",(64+j+l)-1);
        }
        printf("\n");
    }
    return 0;
}