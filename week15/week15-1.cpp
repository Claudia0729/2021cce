#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);

	int ans=1;
	if (a<0) a=-a;
	if (b<0) b=-b;
	for ( int i=1;i<=a;i++ )
	{
		if ( a%i==0 && b%i==0 )
		ans=i;
	}
	printf("%d",ans);
}

