/*


����
��1,2,\cdots,91,2,?,9��99�����ֳ����飬�ֱ����������λ������ʹ��������λ������1:2:31:2:3�ı�����

�������������������������λ����
���磺������λ��192,384,576192,384,576��������������

��ʽ
�����ʽ
�����롣

�����ʽ
��Ҫ���ȫ�������ÿ�����3���� �ÿո�����������ֵ����˳�������

��Դ
NOIP 1998 �ռ��� ��һ��


*/



#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int num[9];
	int b;
	int c;
	for(int i=100;i<=333;i++){
		b=2*i;c=3*i;
		int judge=1;
		num[1]=i%10;
		num[2]=i/10%10;
		num[3]=i/100;
		num[4]=b%10;
		num[6]=b/10%10;
		num[7]=c%10;
		num[8]=c/10%10;
		num[0]=c/100;
		num[5]=b/100;
		int sum=0;
		for(int j=0;j<9;j++){
			
			sum+=num[j];
		}
		if(sum!=45){
			sum=0;
			continue;
			
		}
		
			
			for(int k=0;k<8;k++){
			for(int j=k+1;j<9;j++){
				if(num[j]==num[k]){
					judge=0;
				}
			}
		}
		
		
		if(judge!=0)
		{
		cout<<i<<" "<<b<<" "<<c<<endl;
	}
	judge = 1;
	}
	return 0;
}
