/*
date:2019.10.01
author:IanTang
����Խ��ߣ�һ������б�ܼ�ֵ�����ֵΪʮ 
*/

#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b;//aΪ�У�bΪ��
	printf("������\n");
	cin>>a;
	printf("������\n");
	cin>>b;
	int num[a][b];
	int i,j;
	for(i = 0;i<a;i++){
		for(j = 0;j<b;j++){
			scanf("%d",&num[i][j]);
		}
	}
	num[0][b-1] = num[0][b]+10;
	num[a-1][0] = num[a][0]+10;
	i = 0;
	for(i = 0;i<a;i++){
		for(j = 0;j<b;j++){
			
			if(j==b-1)
				printf("%d\n",num[i][j]);
			else
			printf("%d ",num[i][j]);
		}
	}
	return 0;
}
