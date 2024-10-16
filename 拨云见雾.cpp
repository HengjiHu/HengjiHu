#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//一步一步的展现被遮挡的语句
int main() {
	char arr[] = { "我张学勇实名表白于漫" };
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
