#include<iostream>

using namespace std;

void change10to2(int n) {
	if (n > 0) {
		int res = n % 2;
		n /= 2;
		change10to2(n);
		cout << res << " ";
	}
}

int main() {
	int n;
	cin >> n;
	change10to2(n);
}