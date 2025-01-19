#include<stdio.h>
int main()
{
	char a;
	printf("请输入一个大写字母:");
	scanf("%c",&a);
	int b=(int)a;
	int c=b+32;
	char d=(char)c;
	printf("小写字母为:%c",d);
	return 0;
}
