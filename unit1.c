#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("please input 2 num:");
//	scanf("%d%d", &a, &b);
//	sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int test()
//{
//	static int i = 0;
//	i++;
//	printf("%d\n", i);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}	
//int main()
//{
//	//extern int a2023;
//	printf("%d", a2023);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", add(2, 3));
//	return 0;
//}
//#define pai 3.14;
//int main()
//{
//	float a = pai;
//	printf("%f", a);
//	return 0;
//}
//#define add(x,y) ((x)+(y))
//int main()
//{
//	int sum = add(2, 3);
//	printf("%d\n", sum);
//	sum = 10 * add(2, 3);
//	printf("%d\n", sum);
////	return 0;
////}
//int main()
//{
//	int num = 10;
//	&num;
//	printf("%p", &num);
//	return 0;
////}
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}
struct stu
{
	int sno;
	char sname[10];
	char sex[10];
	int grade;
	char profession[30];
};
int main()
{
struct stu s = { 02,"zhangsan","man",20515001,"conmmunication" };
//printf(" sno = %d\n sname = %s\n sex = %s\n grade = %d\n profession = %s\n", s.sno, s.sname,s.sex,s.grade,s.profession );
struct stu* ss = &s;
printf(" sno = %d\n sname = %s\n sex = %s\n grade = %d\n profession = %s\n", ss->sno, ss->sname,ss->sex,ss->grade,ss->profession );
}