#include "stdafx.h"
#include<cstdio>
#include<iostream>
using namespace std;
//�жϴ�С����

int a, b, c;
int jud;
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
	printf("������������С�������������������1Ϊ���������2Ϊ��󹫱���\n");
	scanf_s("%d", &jud);
	printf("����������Ҫ�����\n");
	scanf_s("%d%d", &a, &b);
	c = a*b;
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
	if (jud==1)
	cout << result;
	else {
		cout << c / result;
	}
	return 0;
}
