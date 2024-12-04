/*


    * * * * *   |       1 2 3 4 5   |       A B C D E
   * * * * *    |      1 2 3 4 5    |      A B C D E
  * * * * *     |     1 2 3 4 5     |     A B C D E
 * * * * *      |    1 2 3 4 5      |    A B C D E
* * * * *       |   1 2 3 4 5       |   A B C D E


*/

#include<stdio.h>

int main(){
    int n;

    printf("Enter number of row:    ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int s=n-1;s>=i;s--){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}