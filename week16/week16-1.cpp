#include <stdio.h>
int a[100];
char s[20];


int main()
{
    printf("請輸入你的名字: ");
    scanf("%s",s);///沒有&

    printf("你剛剛輸入:%s\n",s);
}
