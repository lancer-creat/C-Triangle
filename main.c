#include <stdio.h>
#include <stdlib.h>

void triangle(int jumlah);

int main()
{
    triangle(5);
    return 0;
}

void triangle(int jumlah){
    int i , j , k ;
    for(i=1;i<=jumlah;i++){
        for(j=1;j<=jumlah-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}
