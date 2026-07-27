#include <stdio.h>

int main() {
    int i,n,ele,flag=0,index;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : \n");
    int arr[n];
    for(i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search : ");
    scanf("%d",&ele);
    
    for (i = 0 ; i<n ; i++){
        if(arr[i]==ele){
            flag =1;
            index = i;
            break;
        }
    }
      if (flag == 1){
            printf("Element %d is available in the array\n",ele);
            printf("Index of the element is %d : \n",index);
        }
        
    else{
            printf("Element %d is not available",ele);
        }
    return 0;
}