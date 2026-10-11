#include <stdio.h>
int main(){
int n,i,x,flag=0;
printf("Enter number of data :");
scanf("%d",&n);
int arr[n];
printf("Enter array element :\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter a number to seacrh :");
scanf("%d",&x);
for(i=0;i<n;i++){
    if(x==arr[i])
     {
        printf("Position of %d is : %d \n",x,i+1);
        flag +=1;
     }
  }
  if(flag==0)
{
    printf("Value is not found.");
}
else
{
    printf("%d found %d time",x,flag);
}
}
