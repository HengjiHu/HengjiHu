#define _CRT_SECURE_NO_WARNINGS 1
//����continue��ӡ������
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


//getchar�������߼�
#include<stdio.h>
#include<string.h>

int main() {
    char password[20] = { 0 }; // ��������
    printf("����������:>");
    scanf("%19s", password); // ��������
    printf("��ȷ������:>");
    char secret[20] = { 0 }; // �����ڶ�������
    scanf("%19s", secret); // ����ڶ�������
    if (strcmp (secret,"y")==0 || strcmp(password, secret) == 0) //�ڶ�������ʱ����yes������password�ַ���ͬ����ӡyes
    {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}