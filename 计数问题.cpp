/*

����
�Լ��������� 1 �� n ������������,���� x(0 �� x �� 9)�������˶��ٴ�?����,�� 1 �� 11 ��,���� 1��2��3��4��5��6��7��8��9��10��11 ��,���� 1 ������ 4 �Ρ�

��ʽ
�����ʽ
���빲 1 ��,���� 2 ������ n��x,֮����һ���ո������

�����ʽ
����� 1 ��,����һ������,��ʾ x ���ֵĴ�����

����1
��������1
11 1

Copy
�������1
4

Copy
����
ÿ�����Ե�1s��

��ʾ
���� 100%������,1�� n �� 1,000,000,0 �� x �� 9��

��Դ
NOIP 2013 �ռ���


*/





#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>

using namespace std;
int main(){
	int n;
	int x;
	cin>>n>>x;
	int a[n];
	int num[10];
	memset(num,0,sizeof(num));
	//���� 
	for(int i=0;i<=n;i++){
		a[i]=i;
	}
	int i=1;
	while(i<=n){
	
	while(a[i]){
		int judge = a[i]%10;
		switch (judge){
		case 0:num[0]++;break;
		case 1:num[1]++;break;
		case 2:num[2]++;break;
		case 3:num[3]++;break;
		case 4:num[4]++;break;
		case 5:num[5]++;break;
		case 6:num[6]++;break;
		case 7:num[7]++;break;
		case 8:num[8]++;break;
		case 9:num[9]++;break;
		
		}
		a[i]/=10;
	}
	i++;
}
	cout<<num[x];
	
	
	return 0;
} 
