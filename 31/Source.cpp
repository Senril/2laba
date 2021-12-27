#include <iostream>
#include <vector>
using namespace std;
int main() {
	int check = 24,n;
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] + a[j] == check) {
				cout << a[i] << " " << a[j];
				cout << endl;
			}
		}
	}
}
// сложность алгоритма - O(n) 
