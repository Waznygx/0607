#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int MAX(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int max = 0;
//	printf("shuru:");
//	scanf("%d%d", &n1, &n2);
//	max = MAX(n1, n2);
//	printf("%d\n",max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

////写一个函数判断一个数是否为素数
//#include<stdio.h>
//#include<math.h>
//int is_prime(int x)
//{
//	int i = 0;
//	for ( i = 2; i <=sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	printf("please input a num:");
//	scanf("%d", &n);
//	if (is_prime(n) == 1)
//		printf("suhu");
//	else
//	{
//		printf("not");
//	}
//	return 0;
//}

////判断闰年
//#include<stdio.h>
//int panduan(int i)
//{
//	if (i%4 == 0 && i%100 != 0)
//	{
//		return 1;
//	}
//	else if (i%400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	printf("input year:");
//	scanf("%d", &y);
//	if (panduan(y) == 1)
//	{
//		printf("runnian");
//	}
//	else
//	{
//		printf("not");
//	};
//	return 0;
//}

////整型数组二分查找
//#include<stdio.h>
//int binary_search(int arr[],int n,int length)
//{
//	int min = 0;
//	int mid = 0;
//	int max = length - 1;
//	while (min <= max)
//	{
//		mid = (min + max) / 2;
//		if (n > arr[mid])
//		{
//			min = mid + 1;
//		}
//		else if(n < arr[mid])
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	printf("input num:");
//	scanf("%d", &n);
//	int nn = binary_search(arr, n,length);
//	if (nn == -1)
//	{
//		printf("not found\n");
//	}
//	else
//	{
//		printf("found!arr[%d]\n", nn);
//	}
//	return 0;
//}

////调用一次函数，num+1
//#include<stdio.h>
//void add(int* p)
//{
//	(*p)++;//++优先级高于*p
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//printf(printf("%d", printf("%d", 43)));
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//void print(int i)
//{
//	if (i > 9)
//	{
//		print(i/10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("shuru:");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
////int main()
////{
////	char arr[] = "bit";
////	int len = my_strlen(arr);
////	printf("%d\n", len);
////	return 0;
////}
//int Strlen(char* str)
//{
//	if (*str == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + Strlen(str + 1);
//	}
//	
//}
//int main()
//{
//	char* p = "abcdef";
//	int len = Strlen(p);
//	printf("%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//int jc(int i)
//{
//	if (i <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return i * jc(i - 1);
//	}
//}
//int main() 
//{
//	int n = 0;
//	printf("input:");
//	scanf("%d", &n);
//	printf("%d", jc(n));
//	return 0;
//}

#include<stdio.h>
void NUM(int n, int* arr, int length)
{
	int min = 0;
	int max = length - 1;
	int mid = 0;
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (n > arr[mid])
		{
			min = mid + 1;
		}
		else if (n < arr[mid])
		{
			max = mid - 1;
		}
		else
		{
			printf("found,arr[%d]", mid); 
			break;
		}
	}
	if (min > max)
	{
		printf("not found\n");
	}
}
int main()
{
	int arr[] = { 1,2,3,5,6,7,9,11,15,17,18,20,23,24,25,26,27,33,34,36,38,44,45,46,47,48,49 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	printf("input:");
	scanf("%d", &n);
	NUM(n, arr, length);

	return 0;
}

//#include<stdio.h>
//#include<string.h>
//int zishu(char* p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1+zishu(p+1);
//}
//int main()
//{
//	char arr[] = "my hasband is LayZhang";
//	printf("%s\n", arr);
//	printf("zishu=%d\n", zishu(arr));
//	return 0;
//}


//#include<stdio.h>
//int fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//		while (i >= 3)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			i--;
//		}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	printf("input:");
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	return 0;
//}

//#include<stdio.h>
//int jc(int i)
//{
//	int jc = 1;
//	while (i > 1)
//	{
//		jc = jc * i;
//		i--;
//	}
//	return jc;
//}
//int main()
//{
//	int n = 0;
//	printf("input:");
//	scanf("%d", &n);
//	printf("%d\n", jc(n));
//	return 0;
//}

//#include<stdio.h>
//void Move(char pos1,char pos3)
//{
//	printf("%c->%c ", pos1, pos3);
//}
//void Hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		Move(pos1, pos3);
//	}
//	else
//	{
//		Hanoi(n - 1, pos1, pos3, pos2);
//		Move(pos1, pos3);
//		Hanoi(n-1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	Hanoi(1, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(2, 'A', 'B', 'C');
//	printf("\n");
//	Hanoi(3, 'A', 'B', 'C');
//	return 0;
//}