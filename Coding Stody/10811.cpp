#include <iostream>
#include <algorithm>
using namespace std;

int arr[100];

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	int a, b,h;
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		reverse(arr+a, arr+b+1);
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << ' ';
	}

}
// reverse 함수 사용 std::reverse(시작, 끝)