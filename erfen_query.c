#include<stdio.h>
int main()
{
	int i = 20;//Ҫ��ѯ������
	int arr[20] = { 20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,45,46,47,47,39 };//��������
	int length = sizeof(arr) / sizeof(arr[0]);//�������鳤�ȣ����������С/ÿ��Ԫ�صĴ�С=����Ԫ�ظ�������
	int mid = 0;//�����±���λ��
	int left = 0;//�����±���Сֵ
	int right = length - 1;//�����±����ֵ��arr[3]={5,6,7},��arr[0]=5,arr[1]=6
	while (left <= right)//�±�min��maxû�л���ʱ��������
	{
		mid = (left + right) / 2;//�����±���λ��
		if (arr[mid] < i)
		{
			left = mid + 1;
		}
		else if (arr[mid] > i)
		{
			right = mid - 1;
		}
		else
		{
			printf("already found,arr[%d]", mid);
			break;//����break����ѭ������������
		}
	}
	if (left > right)//û��if���Ļ�����ʹ�ҵ���������while���������already found���͡�not found��
	{
		printf("not found!");
	}
	return 0;
}