/*

* * * * *    
  * * * *    
    * * *    
      * *    
        *    
        
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
        printf("\n");
    }
    return 0;
}