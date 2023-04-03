#include <iostream>

using namespace std;

int main() {

	string st;
	cin >> st;
	for (int i = 0; i < st.length(); i++) {
		if (st[i] >= '1' && st[i] <= '9') {
			int b = st[i]-49;
			while (b) {
				cout << st[i-1];
				b--;
			}
		}
		else {
			cout << st[i];
		}
	}

	return 0;
}