#include <stdio.h>
int main()
{
    int n=12345;
    int sum=0;
    while ( n>0 ){
        ///printf("%d => %d %d\n",n,n/10,n%10);
        sum+=n%10;
        n=n/10;///這行很重要



    }
    printf("%d\n",sum);

}
