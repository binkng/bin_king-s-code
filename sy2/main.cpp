#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int i,j;
  int a[10]= {3,6,9,13,34,56,78};
  int m;
  cout<<"输入一个排好序的数组：";
  for(i=0;i<9;i++)
   cout<<a[i]<<"  ";
  cout<<"输入想要插入的数：";
  cin>>m;//我要插入25
  for(i=0;i<9;i++){
    if(a[i]>m){
      for(j=8;j>=i;j--)
      a[j+1]=a[j];
      a[i] = m;
      break;//插入完成跳出整个循环
    }
  }
  cout<<"插入之后:";
  for(i=0;i<10;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;
}

