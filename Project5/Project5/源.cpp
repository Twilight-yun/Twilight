#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
int day = 0;
scanf("%d", &day);
switch (day)
{
case 1:
	printf("星期一\n");
	break;
case 2:
	printf("星期2\n");
	break;
case 3:
	printf("星期3\n");
	break;
case 4:
	printf("星期4\n");
	break;
case 5:
	printf("星期5\n");
	break;
case 6:
	printf("星期6\n");
	break;
case 7:
	printf("星期天\n");
	break;
default:
	printf("输入错误\n");
	break;


}


	int i = 1;
	printf("1-100之间的奇数\n");
	while (i < 101)
	{

		if (i % 2 != 0)
			printf("%d\n", i);
		i++;
	}

int s(int a)
{
	
	int m = a % 2;
	return m;
}
int main(){
	int input= 0;
	printf("判断是否为奇数\n");
	scanf("%d", &input);
	int m = s(input);
	if (m== 0 )
		printf("非奇数\n");
	else
	printf("奇数\n");
	int num =4
	if (5 = num)
		printf("hehe\n");

	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");*/

	int age = 45;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("中年\n");
	else
		printf("老年\n");*/
	return 0;
}
