/*

1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1

*/

#include<stdio.h>

int main(){

    int row, i, j;

    printf("Enter number of row:    ");
    scanf("%d",&row);

    // first for loop is for number of rows
    for(i = row; i >= 1; i--){

        // first for loop is for number of rows
        for(j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}