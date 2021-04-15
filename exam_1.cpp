#include <iostream>

using namespace std;

int main() {
	int n, count;
	count = 0;
	cin >> n;
	while (n > 4) {
		n = n / 5;
		count += n;
	}
	cout << count << endl;
}