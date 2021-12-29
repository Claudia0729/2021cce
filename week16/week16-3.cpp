#include <stdio.h>
char line[200];
int main()
{
    printf("請照著打:250 0.1526 1010101010\n");
    int n;
    float f;
    scanf("%d %f %s",&n,&f,line);

    printf("我們讀到了整數:%d\n", n);
    printf("我們讀到了整數:%f\n", f);
    printf("很長很長的字串:%s\n", line);

}

