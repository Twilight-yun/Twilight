#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<string.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 12;
	int sz = sizeof(arr) / sizeof(arr[0]);//��ʾԪ�صĸ���
	int left = 0;//��ʾ���±꣬��0��ʼ
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
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ���\n");
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
				printf("�±��ǣ�%d"��mid);
		}
		if (left>right)
			printf("�Ҳ���\n")*/
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
	printf("����������\n");
	scanf("%s", password);
	while (ch = getchar() != '\n');
	{
		printf("��ȷ�ϣ�Y\N��:>");
		ret = getchar();
		if (ret == 'Y')
			printf("ȷ�ϳɹ�\n");
		else
			printf("����ȷ��\n"); 
	}*/
	return 0;
}