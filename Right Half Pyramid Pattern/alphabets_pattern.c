/*

A
A B
A B C
A B C D
A B C D E

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
            printf("%c ",64+j);
        }
        printf("\n");
    }

    return 0;
}