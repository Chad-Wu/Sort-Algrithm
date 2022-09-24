#include<iostream>
using namespace std;
const int N = 1000005;
const int CutOff = 2000;

void swap(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void printArray(int a[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << a[i] << ' ';
	}
	cout << endl;
}

void InsertSort(int a[], int l, int r) {
	for (int i = l+1; i <= r; i++) {
		int j = i;
		while (j > 0 && a[j] < a[j - 1]) {
			swap(a, j, j - 1);
			j--; 
		}
	}
}

void QuickSort(int a[], int l, int r) {
	if (r <= l) return;
	int range = r - l + 1;
	if (range > CutOff){
	    int q = (l + r)/2;
    	int i = l;
    	swap(a, q, r);
    	for (int j = l; j < r; ++j) {
    		if (a[j] < a[r]) {
    			swap(a, i++, j);
    		}
    	}
    	swap(a, i, r); 
    	QuickSort(a, l, i - 1);
    	QuickSort(a, i + 1, r);
	}
	else InsertSort(a, l, r);
}

int main() {
	int n, a[N];
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	QuickSort(a, 0, n - 1);
	printArray(a, n);
	return 0;
}
