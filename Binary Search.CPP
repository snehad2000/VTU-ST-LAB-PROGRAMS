#include<stdio.h>
#include<conio.h>
#include<process.h>
#define WINDOWS 1
int main()
 {
 int a[20],n,low = 0,high,mid,key,I,flag = 0;

 printf("Enter the value of n:\n");
 scanf("%d",&n);
 printf("Enter the elements in ASCENDING order\n");
 for(int i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the key element to be searched\n");
 scanf("%d",&key);
 high=n-1;
 while(low<=high)
 {
 mid=(low+high)/2;
 if(a[mid]==key)
 {
 printf("Successful search\n");
 printf("Element found at Location %d\n",mid+1);
 flag = 1;
 break;
 }
 else if(a[mid]<key)
 {
 low=mid+1;
 }
 else
 {
 high=mid-1;
 }
 }
 if (flag == 1)
 printf("Key Element found\n");
 else
 printf("key element not found\n");
 }
 void console_clear_screen() {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
}
 
