#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//先输入原密码，再进行密码检验（三次机会）
int main() {
	int a = 0;
	char password[20] = {};
	printf("请输入原密码->");
	scanf("%s", password);
	char p1[20] = {};

	for (a = 2; a >= 0; a--)
	{
		printf("请确认密码->");
		scanf("%s", p1);
		if (strcmp(password, p1) == 0){
			printf("恭喜你，密码正确");
		break;
	}
		if (strcmp(password, p1) != 0)
			printf("密码错误，你还剩 % d次机会哦\n",a);
	}
	if (a == -1)
		printf("嘿嘿，已将你拉入黑名单");

	return 0;
}