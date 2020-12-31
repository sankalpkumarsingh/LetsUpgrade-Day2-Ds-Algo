
//deleting array 

#include <stdio.h>

void display(int arr[],int n ){
for(int i=0;i<n;i++){
printf("%d  ",  arr[i]);
}
printf("\n");
}
 int deletion(int arr[],int size,int index){
     for(int i=index;i< size-1;i++){
         arr[i]= arr[i+1];
     }

 }

int  main()
 {
     int arr[100]={ 1,55,66,25,96 };
      int size=5,index=3;
      display(arr,size);
      deletion(arr,size,index);
      size -=1;
      display(arr,size);
 }
