#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	int d = 0;
//	int sum = 0;
//	scanf("%d", &d);
//	for (n = 1; n <= d; n++) {
//		a = a * n;
//		sum = a + sum;
//	}
//	printf("%d", sum);
//	return 0;
//}
//10.14
//����һ����������������Ľ׳�֮�ͣ��򻯰棩
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int sum = 0;
//	scanf("%d", &b);
//	for (a = 1; a <= b; a++) {
//		c *= a;
//		sum += c;(���ø�ֵ����)
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
// 
// 
//������
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 0;
//	int i = 0;
//	scanf("%d", &b);
//	for (a = 1; a <= b; a++) 
//	{
//		c = 1;//���⸳ֵ����
//		for (i = 1; i <= a; i++) {
//			
//			c *= i;
//		}
//		d = d + c;
//	}
//	printf("%d", d);
//	return 0;
//}

//while�����ֽ׳�
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d", &b);
//	a = 1;
//	while (a <= b) {
//		c = c * a;
//			a++;
//	}
//	printf("%d", c);
//	return 0;
//}

//while������׳�֮��
//int main() {
//	int a = 1;
//	int b = 0;
//	int c = 1;
//	int d = 0;
//	int i = 1;
//	scanf("%d", &b);
//	while (i <= b) {
//		c = 1;
//		a = 1;//for�еĸ�ֵ��Ҫ�����ó�����
//		while (a <= i) {
//			c = c * a;
//			a++;
//		}
//		d += c;
//		i++;
//	}
//	printf("%d", d);
//	return 0;
//}

//while�򻯰�׳�֮��
int main() {
	int a = 1;
	int b = 0;
	int c = 1;
	int i = 0;
	scanf("%d", &b);
	while (a <= b) {
		c *= a;
		i += c;
		a++;
	}
	printf("%d", i);
	return 0;
}