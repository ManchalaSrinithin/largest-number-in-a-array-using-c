#include<stdio.h>
main()
{
	int a[100],i,n,large=0;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>large)
		large=a[i];
	}
	printf("large=%d",large);

}
	
	