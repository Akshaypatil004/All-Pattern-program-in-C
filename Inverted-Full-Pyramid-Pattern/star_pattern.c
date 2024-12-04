/*

* * * * * * * * *   |   1 2 3 4 5 6 7 8 9   |   A B C D E F G H I
  * * * * * * *     |     1 2 3 4 5 6 7     |     A B C D E F G
    * * * * *       |       1 2 3 4 5       |       A B C D E
      * * *         |         1 2 3         |         A B C
        *           |           1           |           A
*/
#include<stdio.h>

int main(){
    int n;

    printf("Enter number of row:    ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int s=1;s<i;s++){
            printf("  ");
        }
        for(int j=n;j>=i;j--){
            printf("* ");
        }
        for(int k=n-1;k>=i;k--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}