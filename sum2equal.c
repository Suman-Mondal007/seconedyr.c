//Write a program to check whether the sums of 2 arrays are same or not
#include<stdio.h>
int main(){
    int n;
   int  sum1=0,sum2=0;
    printf("Enter the range of first array :\n");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for (int i=0;i<n;i++){
        printf("Enter the elements arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum1=sum1+arr[i];
    }
    printf("The total sum is :%d\n",sum1);
   printf("The seconed array elements are:\n");
    for (int i=0;i<n;i++){
        printf("Enter the elements arr[%d]",i);
        scanf("%d",&brr[i]);
    }
    for(int i=0;i<n;i++){
        sum2=sum2+brr[i];
    }
    printf("The total sum is :%d\n",sum1);
    if(sum1==sum2){
        printf("Sum of two array is equal.");
    }else{
        printf("Sum of two arra is not equal.");
    }
}
