//
 	
//Write a program to print
 //all numbers from 1 to 
//N using a for loop.
  //Input: N = 5  Output: 1 2 3 4 5//

#include <stdio.h>
int main(){
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",i);
    }
    return 0;
}