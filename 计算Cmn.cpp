// Win32Project1.cpp : �������̨Ӧ�ó������ڵ㡣
//��m��������ȡ��n���������������
//date:2019.10.03
//#include "stdafx.h"
#include<iostream>
#include<cstdio>
using namespace std;


//�׳˺���
int js(int a)
{
	int i;
	int sum = 1;
	for (i = 1; i <= a; i++) {
		sum = sum*i;
	}
	return sum;

}

int main()
{

	int m, n;
	int fuck;
	printf("����m��n\n");
	scanf_s("%d%d", &m,&n);
	fuck = js(m) / ((js(m - n))*(js(n)));
	cout << fuck;
	//printf("%ld", fuck);
    return 0;
}



