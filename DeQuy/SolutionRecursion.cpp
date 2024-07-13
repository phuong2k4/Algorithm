#include<iostream>
#include<math.h>

using namespace std;

int sum(int n) {
	if (n == 1) return 1;
	return n + sum(n - 1);
}

int sumC(int n) {
	if (n == 0)return 0;
	return (n%10) + sumC(n/10);
}

int ackerman(int m, int n) {
	if (m == 0) {
		return n + 1;
	}
	else if (n == 0) {
		return ackerman(m - 1, 1);
	}
	else {
		return ackerman(m - 1, ackerman(m, n - 1));
	}
}

int log(int n,int cnt) {
	if (n < 2)return cnt;
	return log(n / 2,cnt+1);
}

int sumP2(int n) {
	if (n == 1)return 1;
	return pow(n, 2) + sumP2(n - 1);
}

int reverse(int n, int r) {
	if (n == 0) return r;
	else {
		r = (n % 10) + (r * 10);
		return reverse(n / 10, r);
	}
}

int main(int argc, char** argv[]) {
	int n;
	cin >> n;
    // function();
	return 0;
}