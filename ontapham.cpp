#include<iostream.h>

int main()
{
	/*
float n,a[100];
	cout << " nhap n : "; cin >> n;
	for(int i=0;i<n;i++){
		cout << "a["<<i<<"] = ";
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] < a[j]){
				int giamdan = a[i];
				a[i] = a[j];
				a[j] = giamdan;
			}
		}
	}
	cout << "mang giam dan la : " << endl;
     for(int i=0;i<n;i++){
    	cout << a[i] << endl;
     }
     int dem = 0;
     for(int i=0;i<n;i++){
     	if(a[i] < 0){
	     	dem++;
	     }
     }
     cout << "so cac phan tu am la : " << dem << endl;*/
     int m,n;
     cout << "nhap m hang n cot : ";
     cin >> m >> n;
     int a[100][100];
     for(int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
	     	cout << "a["<<i<<"]["<<j<<"] = ";
	     	cin >>  a[i][j];
	     }
     }
     cout << "in mang 2 chieu : " << endl;
     for(int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
	     	cout << a[i][j] << " ";
	     }
	     cout << endl;
     }
     int sum = 0;
     for(int i=0;i<m;i++){
     	for(int j=0;j<n;j++){
	     	if(i == j){
     	  sum += a[i][j];
     }
     	}
     }
     cout << "tong cac phan tu tren duong cheo chinh la : " << sum << endl;
}