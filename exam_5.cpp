#include <iostream>

using namespace std;

int n, m;
char picture[50][50];

void drawY(int i, int j) {
	for (; i < n; i++) {
		if (picture[i][j] == 'Y') picture[i][j++] = 'X';
		else if (picture[i][j] == 'G') picture[i][j++] = 'B';
		else break;
	}
}

void drawB(int i, int j) {
	for (; i < n; i++) {
		if (picture[i][j] == 'B') picture[i][j--] = 'X';
		else if (picture[i][j] == 'G') picture[i][j--] = 'Y';
		else break;
	}
}

int main5() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string line;
		cin >> line;
		for (int j = 0; j < m; j++) picture[i][j] = line[j];
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (picture[i][j] == 'Y') {
				count++;
				drawY(i, j);
			}
			else if (picture[i][j] == 'B') {
				count++;
				drawB(i, j);
			}
			else if(picture[i][j] == 'G') {
				count += 2;
				drawY(i, j);
				drawB(i, j);
			}
		}
	}
	cout << count << endl;
	return 0;
}