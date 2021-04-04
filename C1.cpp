#include <iostream>
#include <string>
using namespace std;

void xuat(int a[], int k){
         for(int i = 0; i <= k; i++){
               char ch = (char) (a[i] + 97);
               cout << ch;
         }
        cout << endl;;
}

void next(int i, int a[], int n, int k){
        for(int j = a[i - 1] + 1; j <= n - k + i; j++){
            a[i] = j;
            if(i == k) {
                xuat(a, k);
            }else{
                next(i + 1, a, n, k);
            }
        }
}

int main(){
	int n, k;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap k: ";
	cin >> k;

	int arr[k] = {0};

	next(1, arr, n, k);
	return 1;
}
