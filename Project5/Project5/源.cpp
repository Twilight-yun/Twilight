#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
int day = 0;
scanf("%d", &day);
switch (day)
{
case 1:
	printf("����һ\n");
	break;
case 2:
	printf("����2\n");
	break;
case 3:
	printf("����3\n");
	break;
case 4:
	printf("����4\n");
	break;
case 5:
	printf("����5\n");
	break;
case 6:
	printf("����6\n");
	break;
case 7:
	printf("������\n");
	break;
default:
	printf("�������\n");
	break;


}


	int i = 1;
	printf("1-100֮�������\n");
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
	printf("�ж��Ƿ�Ϊ����\n");
	scanf("%d", &input);
	int m = s(input);
	if (m== 0 )
		printf("������\n");
	else
	printf("����\n");
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
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("����\n");
	else
		printf("����\n");*/
	return 0;
}
