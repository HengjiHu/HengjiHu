#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//һ��һ����չ�ֱ��ڵ������
int main() {
	char arr[] = { "����ѧ��ʵ���������" };
	char arr1[] = { "********************" };
	int left = 0;
	int right = strlen(arr) - 1;
	while (left <= right) {
		arr1[left] = arr[left];
		arr1[right] = arr[right];
		Sleep(500);
		system("cls");
		printf("%s\n", arr1);
		left++;
		right--;
		
	}
	return 0;
}
