#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//flhͬѧ���������Ա�ѽ������ѽ��������ӡ������
struct flh {
	char name[20];
	char sex[20];
	int age;
};
void print(struct flh*x) {
	printf("%s,%s,%d\n", (*x).name, (*x).sex, (*x).age);
	printf("%s,%s,%d\n", x->name, x->sex, x->age);
}
int main() {
	struct flh flh= { "flh", "nan", 19 };
	printf("%s,%s,%d\n", flh.name, flh.sex, flh.age);
	print(&flh);
	return 0;
}