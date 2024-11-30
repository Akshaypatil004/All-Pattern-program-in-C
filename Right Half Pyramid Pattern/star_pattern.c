/*

*
* *
* * *
* * * *
* * * * *


*/
#include<stdio.h>

int main(){
    
    int i, j, rows;

    printf("Enter number of rows:   ");
    scanf("%d",&rows);

    // first for loop is for number of rows
    for(i = 1; i <= rows; i++){

        //second for is for number of columns
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}