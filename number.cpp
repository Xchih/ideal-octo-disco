#include<stdio.h>     /*ͷ�ļ�*/
int main()          /*������*/
{
	int number;
	printf("����һ������:");
	scanf("%d",&number);
	printf("������������ǣ�%d\n",number);
	if(number==0){
		printf("�������������");
		//TODO
	}
	else if(number==1){
		printf("�����������Ҽ");
		//TODO
	}
	else{
		printf("������ֲ���0��1");
	}
	return 0;
}
