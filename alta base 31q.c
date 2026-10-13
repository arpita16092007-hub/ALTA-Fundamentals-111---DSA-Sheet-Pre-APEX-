#include<stdio.h>
int main (){
    int arr[3]={10,20,4};
    int largest=arr[0];

    printf("Largest element in array is:");

    for (int i=0;i<=3;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("%d",largest);
    return 0;
}