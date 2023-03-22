#include <stdio.h>
int main()
{
	int n,i,key,j;								//declaring variables 
	printf("enter the size of array::\n");
	scanf("%d",&n);								//enter the size of array (eg. 5)
	int arr[n];								
	printf("Enter the elements::\n");
	for(i=1 ; i<=n ; i++)						//Always start from 2nd element  
	{
	scanf("%d",&arr[i]);						//taking input from user (a0,a1,a2,a3,a4)
	key=arr[i];									//set 2nd element as key (i.e. a1)
	j=i-1;
	while(j>=0 && arr[j]>key)  					//Comapring elements (if a1<a0)
		{
			arr[j+1]=arr[j];					//Shift larger element to right side(if condition true) 
			j--;
		}										
		arr[j+1]=key; 							//Shift smaller element to left side(if condition false)
	}
	printf("Sorted array is::\t");				//printing sorted array
	for(i=0;i<=n;i++)
		printf("%d\t",arr[i]); 
	return 0;
}
