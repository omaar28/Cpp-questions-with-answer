#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, c;
	string g, arr[100];
	char b, e;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		getline(cin, g);
		if (g.length() > 10) {
			b = g.at(0);
			e = g.at(g.length() - 1);
			c = g.length() - 2;
			g = b + to_string(c) + e;
			arr[i] = g;
		}
		else arr[i] = g;
	}
	for (int i = 0; i <= n; i++) cout << arr[i] << endl;
	
	return 0;
}