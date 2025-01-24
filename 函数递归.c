#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数递归的两个必要条件
// 条件1 ： 递归的停止条件
// 条件2 : 每一次函数调用，越来越接近停止条件
// 1    从前向后一位一位的打印数字
//void print(unsigned int n)
//{
//	if (n > 9)//  两位及以上
//	{
//		print(n / 10);
//	}
//	printf("%u\n", n%10);//%d 打印整形 int 
//	//  %u 打印 无符号整形   unsigned int
//}
//int main()
//{
//	
//	int n = 0;
//	scanf("%u", &n);
//	print(n);
//
//	return 0;
//}

//   2   求字符串的长度
//int my_strlen(char* str)
//{
//	// str 是首个字符的地址
//	//那么 ，*str 是首个字符
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abc";//[a,b,c,\0]
//	int ret=my_strlen(arr);//其实字符串的传参方式和数组一样，传过去的是第一个字符的地址；
//	printf("%d\n", ret);
//	return 0;
//}
