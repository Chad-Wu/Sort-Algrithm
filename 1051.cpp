#include<iostream>
using namespace std;
const int N = 1005;

void swap(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void printArray(int a[], int size) {
	for (int i = 0; i < size; ++i) {
		if(i != size - 1)cout << a[i] << ' ';
		else cout << a[i] << endl;
	}
}

void InsertSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int j = i;
		while (j > 0 && a[j] < a[j - 1]) {
			swap(a, j, j - 1);
			j--; 
		}
		printArray(a, n);
	}
	//printArray(a, n);
}

int main() {
	int n, a[N];
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	InsertSort(a, n);
	return 0;
}