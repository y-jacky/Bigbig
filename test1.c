#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//int main() 
//{
//	//int arr[10] = {0};
//	//int i = 0;
//	//for (i = 0; i < 10; i++) 
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//	//int sum = 0;
//	//for (i = 0; i < 10; i++) 
//	//{
//	//	sum = sum + arr[i];
//	//}
//	//printf("%d",sum/10);
//	for (int i = 0; i < 6; i++) 
//	{
//		printf("%d",i * '*');
//	}
//	return 0;
//}
//#define a 100
//enum sex
//{
//	aa,
//	b,
//	c=5
//
//};
//int main()
//{
//	printf("%d\n", a);
//	enum sex w = a;
//	printf("%d\n",aa);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//int main() 
//{
//	char arr[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	int a = strlen(arr);
//	printf("%d\n",a);
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
//int main() 
//{
//	/*printf("%d",strlen("abcdef"));*/
//	printf("%d",strlen("c:\test\328\test.c"));
//	return 0;
//}
//int main() 
//{
//	int intupt = 0;
//	printf("你是男的女的？\n");
//	scanf("%d", &intupt);
//	if (intupt == 1)
//		printf("男的\n");
//	else
//		printf("女的\n");
//	return 0;
//}
//int main() 
//{
//	int a = 0;
//	while (a<=10000)
//	{
//		printf("还得接着写代码啊:%d\n", a);
//		a++;
//
//	}
//	if (a == 10000)
//		printf("大功告成");
//	return 0;
//}
//
//int add(int a,int b) 
//{
//	int c = a + b;
//	printf("%d",c);
//	return 0;
//}
//int main() 
//{	
//	int q = 0;
//	int qq = 0;
//	scanf("%d%d", &q,&qq);
//	add(q, qq);
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 3;
//	printf("%d",(2,4+5,6));
//	return 0;
//}

//int aa() 
//{
//	static int a = 1;
//	a++;
//	printf("%d ",a);
//}
//int main()
//{
//	int b = 0;
//	while (b<10)
//	{
//		aa();
//		b++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a>b) 
//	{
//		printf("%d",a);
//	}
//	else
//	{
//		printf("%d",b);
//	}
//	return 0;
//}
//int main() //飞机小作业
//{
//	int a = 0;
//	for(a = 0; a<2;a++)
//	{
//		printf("     **\n");
//	}
//	for (int b = 0; b<2; b++)
//	{
//		printf("************\n");
//	}
//	for (int c = 0; c<2; c++)
//	{
//		printf("    * *\n");
//	}
//int main()
//{
//	int a = 0;
//	scanf("%d", & a);
//	if (a % 5==0) 
//		printf("该数可以被整除");
//	else
//		printf("该数不可以被整除");
//	return 0;
//}
//
//int main()
//{
//	int age = 1;
//	for (age = 1; age < 101; age++) 
//	{
//		if (age % 2 == 1)
//			printf("%d\n",age);
//
//	}
//	
//	return 0;
//}
//int main() 
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		if (a == 5)
//			continue;
//		printf("%d",a);
//			a++;
//	}
//
//int main()
//{
//	int a = 0;
//	int sum = 1;
//	for (int n = 1; n <4; n++)
//	{
//		int sum = 1;
//		for (int  i = 1; i <= n; i++) 
//		{
//			sum *= i;
//		}
//		a += sum;
//	}
//	printf("%d",a);
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	while(left<=right) 
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("找到了，下标为:%d\n",mid);
//			break;
//		}
//		else
//		{
//			right = mid-1;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;//数组的元素个数-1
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到下标了:%d", mid);
//			break;
//		}
//	}
//	
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right =strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(400);//睡眠400毫秒
		//system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)//两个字符串比较应该用strcmp函数，相同的话返回0
//		{
//			printf("登录成功!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	if (i==3)
//	{
//		printf("程序终止!\n");
//	}
//	return 0;
//}


//
//
////写一个猜数字游戏
////	1.自动生成一个1-100之间的随机数
////	2.猜数字
////	a.猜对了，就恭喜你，游戏结束
////	b.猜错了，告诉你猜大了，还是猜小了，继续猜，直到猜对
////	3.游戏一直玩，除非自己退出游戏
////
//void menu()
//{
//	printf("*************************\n");
//	printf("*******  1. play   ******\n");
//	printf("*******  0. exit   ******\n");
//	printf("*************************\n");
//}
//void game()
//{
//		//猜数字游戏的实现
//		//1.生成随机数
//		//rand函数随机返回一个0-32767之间的一个数
//		//时间-时间戳
//	int ret = rand() % 100 + 1;//%100的余数是0-99之间，然后+1，就是1-100之间
//	int guess = 0;
//		//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d",&guess);
//		if (guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int intupt = 0;
//	do 
//	{
//		menu();		//打印菜单
//		printf("请选择:");
//		scanf("%d", &intupt);
//	switch (intupt)
//	{
//	case 1:
//		game();
//		break;
//	case 0:
//		printf("退出游戏！\n");
//			break;
//	default:
//		printf("选择错误，请重新输入！\n");
//			break;
//	}
//	} while (intupt);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 1;
//	int o = 0;
//	for(i =1,o=0;o<1000,i<a;i++)
//	{
//		if (a%i==0) 
//		{
//			arr1[o] = a % i;
//			o++;
//		}
//	}
//	int y = 1;
//	int u = 0;
//	for (y = 1, u = 0; u < 1000, y < b; y++)
//	{
//		if (b % y == 0)
//		{
//			arr1[u] = b % i;
//			u++;
//		}
//	}
//	printf("%d,%d",arr1,arr2);
//	return 0;
//}
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	for (i=100;i<=200;i++)
//	{
//		int j = 2;
//		for (j = 2; j<i; j++)
//		{
//			if (i % j == 0 && i==j)
//			{
//				printf("%d ", i);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 101; i++)
//	{
//		if (i%3==0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 2;
//	double sum = 0.5;
//	for (i = 1; i < 100; i += 2)
//	{
//		for (j = 2; j < 101; j += 2)
//		{
//			sum += (i * j) / 1;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int sum;
//		sum = a;
//		a = b;
//		b = sum;
//	}
//	if (a<c)
//	{
//		int qwe;
//		qwe = a;
//		a = c;
//		c = qwe;
//	}
//	if (b < c)
//	{
//		int wasd;
//		wasd = b;
//		b = c;
//		c = wasd;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
////}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 1;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int min = (left + right) / 2;
//		if (arr[min] < k)
//		{
//			left = min+1;
//		}
//		else if (arr[min] > k)
//		{
//			right = min-1;
//		}
//		else 
//		{
//			printf("恭喜你找到了,下标为:%d",min);
//			break;
//		}
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0) 
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			a++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\na=%d ", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flage = 1;
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flage = 0;
//				break;
//			}
//		}
//		if (flage==1)
//		{
//			a++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\na=%d ", a);
//	return 0;
//}
//
//int main()
//{
//	system("shutdown -s -t 60");
//	again:
//	printf("你的电脑将在60秒后关机！如果输入：我是猪，将取消关机\n");
//	char arr[] = { 0 };
//	scanf("%s",arr);
//	if (strcmp(arr,"我是猪")==0)
//	{
//		system("shutdown -a");
//		printf("关机已取消!");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//} 

//void wasp(int* pa , int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("换位置前a=%d b=%d\n", a, b);
//	wasp(&a,&b);
//	printf("换位置后a=%d b=%d", a, b);
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	for(a=100;a<+200;a++)
//	{
//		if (is_prime(a) == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int i)
//{
//	if (i % 4 == 0 && i % 100 != 0)
//		return 1;
//
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//int binary_search(int a[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] <k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 7;
//	int ret = binary_search(arr,key,sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标为： %d", ret);
//	}
//	return 0;
//}

//void add(int*p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n",num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ",n%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}