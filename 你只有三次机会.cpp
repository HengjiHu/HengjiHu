#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//������ԭ���룬�ٽ���������飨���λ��ᣩ
int main() {
	int a = 0;
	char password[20] = {};
	printf("������ԭ����->");
	scanf("%s", password);
	char p1[20] = {};

	for (a = 2; a >= 0; a--)
	{
		printf("��ȷ������->");
		scanf("%s", p1);
		if (strcmp(password, p1) == 0){
			printf("��ϲ�㣬������ȷ");
		break;
	}
		if (strcmp(password, p1) != 0)
			printf("��������㻹ʣ % d�λ���Ŷ\n",a);
	}
	if (a == -1)
		printf("�ٺ٣��ѽ������������");

	return 0;
}