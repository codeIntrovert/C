/*

5
54
543
5432
54321

*/

#include <stdio.h>

int main(){
    int n=5;
    for(int i=0; i<n;i++){
        for(int j=0; j<=i;j++){
            printf("%d",n-j);
        }
        printf("\n");
    }
//getch();
return 0;
}