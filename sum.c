//Write a c program to find sum of the elements of array.
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the range :\n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the elements arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("The sum of the total elements is : %d",sum);
}
