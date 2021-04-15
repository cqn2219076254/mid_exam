#include <iostream>
#include <algorithm>

using namespace std;

int score[50000];

int main() {
	int num, x, y, m = 0;
	cin >> num >> x >> y;
	for (int i = 0; i < num; i++) cin >> score[i];
	sort(score, score + num);
	for (int i = y; i >= x; i--) {
		int n = num - i;
		if (n >= x && n <= y && score[n - 1] < score[n]) {
			m = score[n - 1];
			break;
		}
	}
	cout << m << endl;
	return 0;
}