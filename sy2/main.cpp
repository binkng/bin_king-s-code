#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int i,j;
  int a[10]= {3,6,9,13,34,56,78};
  int m;
  cout<<"����һ���ź�������飺";
  for(i=0;i<9;i++)
   cout<<a[i]<<"  ";
  cout<<"������Ҫ���������";
  cin>>m;//��Ҫ����25
  for(i=0;i<9;i++){
    if(a[i]>m){
      for(j=8;j>=i;j--)
      a[j+1]=a[j];
      a[i] = m;
      break;//���������������ѭ��
    }
  }
  cout<<"����֮��:";
  for(i=0;i<10;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;
}

