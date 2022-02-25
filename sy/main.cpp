#include<iostream>
using namespace std;

int main() {
	int n, array[100], flag = 1;
	cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> array[i];
		for (int k = 0; k<i; k++) {
			if (array[i] == array[k]) {
				flag = 0;
			}
		}
		if (flag) {
			cout << array[i] << " ";
		}
		flag = 1;
	}
}

