//Write a c program to find the largest number of an array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the range:\n");
    scanf("%d",&n);
    int arr[n];
    int max=1;
    for (int i=0;i<n;i++){
        printf("Enter the element arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if(max <arr[i]){
            max=arr[i];
        }
    }
    printf("The largest number is :%d",max);
}
