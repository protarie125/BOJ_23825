#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	cout << (n < m ? n / 2 : m / 2);

	return 0;
}