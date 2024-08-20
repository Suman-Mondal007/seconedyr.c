//Write a c program to find average of array elements
#include<stdio.h>
int main(){
    int n;
    float sum=0.04,avg;
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
    avg=sum/n;
    printf("The average of total number is :%f",avg);
}
