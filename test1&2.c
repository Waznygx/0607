#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////1.����n�Ľ׳�
//int main()
//{
//	int i = 0;//�Լ���
//	int n = 0;//����ֵ
//	int jc = 1;//�׳���Сֵ
//	printf("please input a num:");
//	scanf("%d", &n); 
//	for (i = 1; i <= n; i++)//���磺3��= 1*(1+1)*(1+1+1)=9����n!=1*(1+1)*..*n
//	{
//		jc = jc * i;
//	}
//	printf("jc = %d\n", jc);
//	return 0;
//}

//2.����1��+2��+3��+...+10!
//int main()
//{
//	int i = 0;//�Լ���
//	int n = 0;//1-10
//	int jc = 1;//�׳�
//	int sum = 0;//�׳˺�
//	for (n = 1; n <= 4; n++)//����ֵ=1������ڶ���forִ�н׳ˣ��ٻص���һ��for���
//	{
//		jc = 1;//ʹÿ�δӵڶ���for���ص�һ��for������ִ��ʱ�׳˲�����Ӱ��
//		for ( i = 1; i <= n; i++)//ִ����׳�
//		{
//			jc = jc * i;
//		}
//		sum += jc;//�����ڵڶ���for���ᵼ��ÿһ���ԼӵĽ׳˼��㵽�����
//	}
//	printf("jc=%d,sum=%d", jc, sum);
//	return 0;
//}
int main()
{
	int n = 0;//1-10
	int jc = 1;//�׳�
	int sum = 0;//�׳˺�
	for (n = 1; n <= 4; n++)
	{
		jc = jc * n;//4!=3!*4,��n!=(n-1)!*n
		
	}
	sum += jc;
	printf("sum=%d", sum);
	return 0;
}