#define _CRT_SECURE_NO_WARNINGS 1
//利用continue打印出奇数
//int main() {
	//int i = 0;
	//while (i < 100) {
		//i++;
		//if (i % 2 == 0)
		//continue;
		//printf("%d ", i);
		//}
	//return 0;
//}


//getchar的运行逻辑
#include<stdio.h>
#include<string.h>

int main() {
    char password[20] = { 0 }; // 创建数组
    printf("请输入密码:>");
    scanf("%19s", password); // 输入密码
    printf("请确认密码:>");
    char secret[20] = { 0 }; // 创建第二个数组
    scanf("%19s", secret); // 输入第二次密码
    if (strcmp (secret,"y")==0 || strcmp(password, secret) == 0) //第二次输入时输入yes或者与password字符相同都打印yes
    {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}
