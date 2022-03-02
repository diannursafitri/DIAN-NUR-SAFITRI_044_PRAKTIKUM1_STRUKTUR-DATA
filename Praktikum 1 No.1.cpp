#include<iostream>
using namespace std;

int main (){
	int n[5];
	int j, t, r;
	
	j= sizeof (n)/sizeof(*n);
	cout<<"Masukkan banyaknya data = "<<j<<endl;
	
	for (int i=1 ; i<=5; i++){
	  cout<<"Data ["<<i<<"] = ";
	  cin>>n[i];
	  t = t + n[i];
	}
	r = t / j;
	
	cout<<"banyaknya data = "<<j<<endl;
	cout<<"rata-rata = "<<r<<endl;
	cout<<"jumlah = "<<t<<endl;
}
