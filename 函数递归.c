#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�����ݹ��������Ҫ����
// ����1 �� �ݹ��ֹͣ����
// ����2 : ÿһ�κ������ã�Խ��Խ�ӽ�ֹͣ����
// 1    ��ǰ���һλһλ�Ĵ�ӡ����
//void print(unsigned int n)
//{
//	if (n > 9)//  ��λ������
//	{
//		print(n / 10);
//	}
//	printf("%u\n", n%10);//%d ��ӡ���� int 
//	//  %u ��ӡ �޷�������   unsigned int
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

//   2   ���ַ����ĳ���
//int my_strlen(char* str)
//{
//	// str ���׸��ַ��ĵ�ַ
//	//��ô ��*str ���׸��ַ�
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
//	int ret=my_strlen(arr);//��ʵ�ַ����Ĵ��η�ʽ������һ��������ȥ���ǵ�һ���ַ��ĵ�ַ��
//	printf("%d\n", ret);
//	return 0;
//}
