/*

* * * * *
* * * *
* * * 
* *
*

*/

#include<stdio.h>

int main(){

    int row, i, j;

    printf("Enter number of row:    ");
    scanf("%d",&row);

    // first for loop is for number of rows
    for(i = 1; i <= row; i++){

        // first for loop is for number of rows
        for(j = row; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}