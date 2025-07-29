/*
小球从 100 米高处自由落下，着地后又弹回高度的一半再落下。
经过多少次落地后，小球弹起的高度才会低于 0.5 米？
*/
#include <iostream>
using namespace std;

int main() {
	double h = 100;

	int count = 0;
	while (h > 0.5) {
		h = h / 2;
		count++;
	}

	cout << count << "\n";
}
