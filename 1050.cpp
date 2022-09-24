#include<iostream>
using namespace std;
const int N = 5005;

void swap(int a[], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int cmp = 0;
int swp = 0;
int bcmp = 0;

void newBubbleSort(int a[], int n) {
	int last = n - 1;
	while (last > 0) {
		int temp = last;
		bcmp++; last = 0;
		for (int j = 0; j < temp; ++j) {
			cmp++;
			if (a[j] > a[j + 1]) {
				swp++;
				swap(a, j, j + 1);
				last = j;
			}
		}
	}
	//printArray(a, n);
}

int main() {
	int n, a[N];
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	newBubbleSort(a, n);
	cout << cmp << ' ' << swp << ' ' << bcmp;
	return 0;
}