#include <iostream>
#include <string>
using namespace std;


int main(){
	int n;
	cout << "Nhap n: ";
	cin >> n;

	for(int i = n - 1; i >= 2; i--){
	    int sum = i;


	    for(int j = n - sum; j >= 1; j--){
	        cout << sum;
	        if(j <= i){
	            cout << " + " << j;
    	        sum += j;
	            int so = n - sum;
	            while(sum < n && so > 0){
	                sum += so;
	                cout << " + " << so;
	                so = n - sum;

	            }
	            cout << endl;
	            sum = i;
	        }
	    }
	}
	for(int i = 1; i <= n; i++)
	    if(i == n) cout << 1 << endl;
	    else cout << 1 << " + ";
}
