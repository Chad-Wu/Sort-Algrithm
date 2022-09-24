#include<iostream>
using namespace std;
const int N = 1005;

int ArrayMin(int a[], int size, int start) {
	int min_index = start;
	for (int i = start; i < size; ++i) {
		if (a[i] < a[min_index]) min_index = i;
	}
	return min_index;
}

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

void SelectionSort(int a[], int size) {
	for (int i = 0; i < size -1; ++i) {
		int min = ArrayMin(a, size, i);
		swap(a, min, i);
		printArray(a, size);
	}
}

int main() {
	int n, a[N];
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	SelectionSort(a, n);
	return 0;
}