/*

A B C D E
A B C D
A B C
A B
A

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
           printf("%c ",64+j);
        }
        printf("\n");
    }
    return 0;
}