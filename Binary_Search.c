#include <stdio.h>
int main(){
    int n,i,x,L,H,Mid,flag=0;
printf("Enter number of data :");
scanf("%d",&n);
int arr[n];
printf("Enter array element :\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter a number to seacrh :");
scanf("%d",&x);
        L=0;
        H=n-1;

while(L<=H){
         Mid=(L+H)/2;
    if(arr[Mid]==x){
        printf("Found at %d position.\n",Mid+1);
        flag=1;
        return 0;
    }
    else if(arr[Mid]<x){
        L=(Mid+1);
    }
     else {
        H=(Mid-1);
    }
}
if(flag==0){
    printf("Value is not found");
}
return 0;
}
