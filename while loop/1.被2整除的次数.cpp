#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;
	while (n % 2 == 0) {
		count++;
		n /= 2;
	}

	cout << count << endl;
	return 0;
}
