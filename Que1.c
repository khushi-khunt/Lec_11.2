#include<stdio.h>
/*
Input:
Enter the array's size: 5


Enter array elements:
a[0] = 5
a[1] = 9
a[2] = 4
a[3] = 7
a[4] = 3

Output:
Reversed array elements:
3, 7, 4, 9, 5
*/
void main()
{
	int n,i;
	printf("Enter the array size:");
	scanf("%d",&n);

	int a[n];
	
	printf("Enter the array element:\n");

	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}

	int *p[n];

    for(i=n;i>=0;i--)
	{
     	p[i]=&a[i];
	}
      printf("Reversed array elements is\n");
	for(i=n-1;i>=0;i--)
	{
	   	printf("%d\n",*p[i]);   
    }


}
