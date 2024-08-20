//Write a c program to find the smallest element of array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    int arr[n];
    int min=arr[0];
    for (int i=0;i<n;i++){
        printf ("Enter the elements of arr[%d] :",i);
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The smallest number is : %d",min);
}
