/*
������������ά����
��������n*n����������1��2��3��������������n*n,Ҫ��������Σ����統n=4ʱ
10 11 12 1
9 16  13 2 
8 15  14 3 
7 6   5  4 


author:IanTang
date:2019.10.01 
*/
#include<cstdio>
#include<iostream>
#include<cstring>
//#include<iomanip>
//#define N 10
using namespace std;
//int num[N][N];
int main()
{
	int N;
	int i,j,k;
	i=0;
	k=1;
	int a=1;
	printf("����n��ֵ\n"); 
	scanf("%d",&N); 
	int num[N][N];
	memset(num,0,sizeof(num));//�������� 
	
		j=N-1;
	while(k<=N*N){
		
		
		//���� 
		while(i<N-1 && !num[i+1][j]){
		
			num[i][j]=a;
			i++;
			a++;
		}
		//���� 
		while(j>=0 && !num[i][j-1]){
			num[i][j]=a;
			a++;
			j--;
			 
		}
		//����
		while(i>=0 && !num[i-1][j]){
			num[i][j]=a;
			a++;
			i--;
		}
		//����
		while(j<N-1 && !num[i][j+1]) {
			num[i][j]=a;
			a++;
			j++;
		}
		
		
		
		
		k++;
		
		
		
	}
	
	//��� 
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
				if(j==N-1)
				printf("%d\n",num[i][j]);
			else
			printf("%d   ",num[i][j]);
		}
	}
	

	
	

	return 0;
}
