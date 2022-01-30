#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<string.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 12;
	int sz = sizeof(arr) / sizeof(arr[0]);//表示元素的个数
	int left = 0;//表示左下标，从0开始
	int right = sz - 1;
	int mid = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到\n");
	}
	

	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(0);
	int left = 0;
	int right = sz - 1;
		int mid = (left + right) / 2;
		int k = 7;
		while (left <= right)
		{

			if (arr[mid] > k)
				right = mid - 1;
			else if (arr[mid]<k)
				left = mid + 1;
			else
				printf("下标是：%d"，mid);
		}
		if (left>right)
			printf("找不到\n")*/
	/*int i = 1;
	int j = 1;
	int sum = 0;
	int ret = 1;
	for (i = 1; i <= 3; i++)
	{
			ret = ret*i;
		
		sum = sum + ret;
	}
	printf("10!=%d", sum);*/
	/*int ret = 1;
	int i = 1;
	int n=0;
	scanf_s("%d", &n);
	for (i = 1; i<=n; i++)
	{
		ret = ret*i;		
	}
	printf("ret=%d", ret);*/
	/*int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	}
	 while (i < 11);*/
	//for (;;)
	//{
	//	printf("hehe\n");
	//}
	///*
	//int i = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	if (5 == i)
	//		continue;
	//		printf("%d", i);
	//}*/
	/*char ch ='\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch<'0' || ch>'9')
			continue;
		else
		putchar(ch);
	}*/
	/*int ch = 0;
	while ((ch=getchar()) != EOF)
	{
		putchar(ch);
	}*/
	/*int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码\n");
	scanf("%s", password);
	while (ch = getchar() != '\n');
	{
		printf("请确认（Y\N）:>");
		ret = getchar();
		if (ret == 'Y')
			printf("确认成功\n");
		else
			printf("放弃确认\n"); 
	}*/
	return 0;
}