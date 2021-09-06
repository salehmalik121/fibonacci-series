#include <iostream>
using namespace std;
int shift(int* a, int* b, int* c) {
	*a = *b;
	*b = *c;
	return 0;
}
void fib(int length) {
	int n1 = 0;
	int n2 = 1;
	int n3 = 0;
	for (int i = 0; i <= length-1; i++) {
		cout << n1 << " ";
		n3 = n2 + n1;
		shift(&n1, &n2, &n3);
	}
}

int main() {
	int LengthOfSeq;
	cout << "Enter length of series :" ;
	cin >> LengthOfSeq;
	fib(LengthOfSeq);
	return 0;
}
