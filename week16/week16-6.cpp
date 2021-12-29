#include <stdio.h>
#include <string.h>
char line [300];
int main()
{
	scanf("%s",line);
	int n=strlen(line);
	int bad=0;

	for ( int i=0;i<n;i++ )
	{
		//a[i] vs. a[n-1-i]
		if ( line[i]!=line[n-1-i]) bad=1;
	}
	if ( bad==0 ) printf("YES");
	else printf("NO");
}
