#include "stdafx.h"
#include<cstdio>
#include<iostream>
using namespace std;
//�жϴ�С����

int a, b;
int result;

void judge(void) {
	//����ֵ��aΪ���ֵ
	if (a < b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}


}

int main() {
	printf("����������Ҫ�����\n");
	scanf_s("%d%d", &a, &b);
	judge();
	while (1 > 0) {
		a = a%b;
		if (a==0)
		{
			result = b;
			break;
		}
		b = b%a;
		if (b==0)
		{
			result = a;
			break;
		}
	}

	cout << result;
	return 0;
}
