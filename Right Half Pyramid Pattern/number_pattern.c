/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include<stdio.h>

int main(){

    int rows, i, j;

    printf("Enter number of rows:   ");
    scanf("%d",&rows);

    // first for loop is for number of rows
    for(i = 1; i <= rows; i++){

        //second for is for number of columns
        for(j = 1; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}