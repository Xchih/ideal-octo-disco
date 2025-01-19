#include<stdio.h>     /*头文件*/
int main()          /*主函数*/
{
	int number;
	printf("输入一个整数:");
	scanf("%d",&number);
	printf("你输入的整数是：%d\n",number);
	if(number==0){
		printf("输入的整数是零");
		//TODO
	}
	else if(number==1){
		printf("输入的整数是壹");
		//TODO
	}
	else{
		printf("这个数字不是0或1");
	}
	return 0;
}
