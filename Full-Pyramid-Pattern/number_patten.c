/*

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

* In this pattern I first split it and then solve it.
*/

#include<stdio.h>

int main(){
    int n;
    int temp;
    printf("Enter number of row:    ");
    scanf("%d",&n);

    //this for loop is for row
    for(int i=1;i<=n;i++){
        temp = i;
        //this is for space
        for(int k=n-1; k>=i; k--){
            printf("  ");
        }
        //this is for printing half pattern
        for(int j=0; j<i; j++){
            printf("%d ",temp++);
        }
        //this is for remainning pattern
        for(int l=1; l<i; l++){
            printf("%d ",--temp-1);
        }
        printf("\n");
    }
    return 0;
}