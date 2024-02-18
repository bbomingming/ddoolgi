#include <iostream>
using namespace std;


int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, max=0;
	int num[11] = { 0, };
	cin >> n;
	
	int* arr = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		num[arr[i]-1]++;
	}


	for (int i = 0; i < n; i++) {
		if (num[i] >= max) max = num[i];
	}
	
	if (max == 1) { cout << "YES"; }
	else
	{
		if ((max * 2 - 1) == n) cout << "YES";
		else cout << "NO";
	}
} //런타임 에러 뜸.
//31408번