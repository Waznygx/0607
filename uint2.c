  #define _CRT_SECURE_NO_WARNINGS
////�Ӵ�С���������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int mid = 0;//�м����������ֵ������ʹ��
//	printf("please input 3 num:");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)//��a������ֵ��b�м�����c��Сֵ
//	{
//		mid = a;
//		a = b;
//		b = mid;
//	}
//	if (a < c)
//	{
//		mid = a;
//		a = c;
//		c = mid;
//	}
//	if (b < c)
//	{
//		mid = b;
//		b = c;
//		c = mid;
//	}
//	printf("%d>%d>%d", a, b, c);
//	return 0;
//}
// 
////��ӡ1-100����3����������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for ( i = 1; i < 100; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//���������������������������Լ����շת�������
//#include<stdio.h>
//int main()
//{
//	int a = 75;
//	int b = 30;
//	int m = 0;//ȡģ����m��
	//if (m == 0)
	//{
	//	printf("%d", b);
	//}
	//else
	//{
	//	for (int i = 0; i < a; i++)//���ܻ���35��25֮�಻����һ��֮��������Լ�������֡����Ҫ����ѭ��
	//	{
	//		m = a % b;//����ʡ������ڶ���ѭ���õĻ��ǵ�һ��ѭ����ģ
	//		a = b;//����a%b���м���
	//		b = m;
	//		if (a % b == 0)
	//		{
	//			printf("%d", b);
	//			break;
	//		}
	//	}
	//}
//	while (m = a % b)//a%b!=0��������֮����ѭ��
//	{
//		//����ʡ������ڶ���ѭ���õĻ��ǵ�һ��ѭ����ģ
//		a = b;//����a%b���м���
//		b = m;
//	}
//	printf("%d", b);
//	return 0;
//}

////��ӡ1000-2000��֮�������(���������4�ı������Ҳ���100�ı�����;�ܱ�400������)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1000; i <= 2000; i++)
//	{
//		/*if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) 
//		{
//			printf("%d ", i);
//			count++;
//		}*/
//		if (i%4==0&&i%100)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i%400==0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

////��ӡ100-200֮�������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	for ( n = 100; n <= 200; n++)
//	{
//		for ( i = 2; i < n; i++)//��6=2*3=3*2��֪i�ķ�Χ��2����6-1������Ϊ6���Ա��Լ���1����
//		{
//			if (n%i == 0)
//			{
//				break;
//			}
//		}
//		if (i == n)
//		{
//			printf("%d ", n);
//			count++;
//		}
//		//for ( i = 2; i <= sqrt(n); i++)//�ڷ������е������n=i*����16=2*8=4*4��36=2*18=4*9=6*6�����i�ͣ�֮�б���һ���������㡰<=nƽ�������������
//		//{
//		//	if (n % i == 0)
//		//	{
//		//		break;
//		//	}
//		//}
//		//if (i > sqrt(n))
//		//{
//		//	printf("%d ", n); //���n
//		//	count++;
//		//}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

////1-100����ֶ��ٸ�����9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = i; i <= 100; i++)
//	{
//		if(i/10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

////��1/1-1/2+1/3-1/4+1/5-...+1/99-1/100
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;//��Ϊint�ͣ���ʹ184��ǿ��ת�����Ҳ����
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;//ʹsum�����������
//	}
//	printf("%f",sum);
//	return 0;
//}

////��10�������е����ֵ
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 41,25,13,24,51,63,67,28,59,65 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];//��Ҫ���������ֵ����Ĭ��Ϊ0������������ȫ�Ǹ�����������ֵ=0
//	for ( i = 0; i < length; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];	
//		}
//	}
//	printf("%d", max);//������for����������������ͬ�����ֵ
//	return 0;
//}

////����Ļ�����9*9�˷���
//#include<stdio.h>
//int main()
//{
//	int i = 0;//��
//	int j = 0;//��
//	int mul = 0;//�˻�
//	for ( i = 1; i <= 9; i++)//������
//	{
//		//��1����1�У���2����2�У���n����n��
//		// 1*1=1
//		// 1*2=2 2*2=4
//		// 1*3=3 2*3=6 3*3=9
//		for (j = 1; j <= i; j++)
//		{
//			mul = i * j;
//			//����������ӻ��з����������һ��ʽ��Ϊһ��
//			//%2d�Ҷ��룬-2d�����
//			printf("%d*%d=%-2d ", i, j, mul);
//		}
//		printf("\n");//ʹ��ÿ��i(1,2...9)����Ϊһ��
//	}
//	return 0;
//}

//��дһ�����������������������в��Ҿ���ĳ�������ҵ�Ҫ���ӡ�±꣬������ʾ�Ҳ���
#include<stdio.h>
int main()
{
	int arr[] = { 11,22,3,15,46,82,9,12,24,23,43,34,36,57,59,89 };
	int i = 0;
	int n = 0;
	int length = sizeof(arr) / sizeof(arr[0]);
	printf("please input a num you want to search:");
	scanf("%d", &n);
	for ( i = 0; i < length; i++)
	{
		if (n == arr[i])
		{
			printf("arr[%d]", i);
			break;
		}
	}
	if (i == length)
	{
		printf("not found");
	}
	return 0;
}

//int main()
//{
//	int arr[] = { 1,2,3,6,7,8,9,11,14,16,19,20,24,26,27,49 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int mid = 0;
//	int left = 0;
//	int right = length - 1;
//	printf("please input a num you want to search:");
//	scanf("%d", &i);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("already found!arr[%d]", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("not found!");
//	}
//	return 0;
//}

