/*
    A B C D E
      A B C D
        A B C
          A B
            A

*/
#include<stdio.h>

int main(){
    int n;

    printf("Enter number of row:    ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        char c = 'A';
        for(int s=1;s<i;s++){
            printf("  ");
        }
        for(int j=n;j>=i;j--){
            printf("%2c",c++);
        }
        printf("\n");
    }
    return 0;
}