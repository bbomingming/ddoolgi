
/*#include <stdio.h>

int arr[100005];

int main() {
	int n, m;
	int a, b;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		arr[i] += arr[i - 1];
	}

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);

		printf("%d\n", arr[b] - arr[a - 1]);
	}

	return 0;
}*/
//누적합 알고리즘.









/*#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, count, i, j;

	cin >> n >> count;
	int* arr = (int*)malloc(sizeof(int) * n);
	int* mix = (int*)malloc(sizeof(int) * n);
	
	for (int p = 0; p < n; p++) {
		cin >> arr[p];
	}

	for (int p = 0; p < n; p++) {
		mix[p] = 0;
	}

	for (int p = 0; p < count; p++) {
		cin >> i >> j;
		for (int q= i-1; q <= j-1; q++) {
			mix[p] += arr[q];
		}
	}

	for (int p = 0; p < count; p++) {
		cout << mix[p]<<'\n';
	}

}*/






/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)

		return 1;

	else if (*(int*)a < *(int*)b)

		return -1;

	else

		return 0;
}


  int main() {
	int scores1[10] = { 35, 28, 98, 34, 20, 50, 85, 74, 71, 7 };
	int scores1_len = 10;
	int arr = 0;
	qsort(scores1, scores1_len, sizeof(int), compare);

	for (int i = 0; i < 10; i++)
		printf("%d ", scores1[i]);

	
	for (int i = 1; i < scores1_len-1; i++) {
		arr = arr + scores1[i];
	}
	arr = arr / (scores1_len - 2);
	printf("%d ", arr);
}
*/













/*
#include <stdio.h>
#include<stdlib.h>

int main() {

	int size1,size2;

	scanf("%d", &size1);
	int *arr1 = (int*)malloc(sizeof(int) * size1); //메모리 할당

	for (int i = 0; i < size1; i++) 
	{
		scanf("%d", &arr1[i]);
	}

	scanf("%d", &size2);
	int* arr2 = (int*)malloc(sizeof(int) * size2); //메모리 할당

	for (int j = 0; j < size2; j++) 
	{
		scanf("%d", &arr2[j]);
	}

	int* arr3 = (int*)malloc(sizeof(int) * size2); //메모리 할당

	for (int p = 0; p < size2; p++)  
	{
		for (int q = 0; q < size1; q++) 
		{
			if (arr2[p] == arr1[q])
			{
				arr3[p] = 1;
				break;
			}
			else arr3[p] = 0;
		}
	}

	for (int h = 0; h < size2; h++) {
		printf("%d ", arr3[h]);
	}

	free(arr1);
	free(arr2);
	free(arr3);

	return 0;
}
*/




/*
#include<stdio.h>
int main() {

	int a, b, c, ch,x,sum;
	scanf("%d", &c);
	int arr[1000];
	for (int j = 0; j < c; j++) 
	{

		scanf("%d %d", &a, &b);
		if (a == b) arr[j] = b;
		else if (b > a) {
			ch = b;
			b = a;
			a = ch;
		}
		sum = a * b;
		while (b>0) {
			x = a;
			a = b;
			b = x % b;
			}
		arr[j] = sum / a;
		}
	for (int j = 0; j < c; j++)
	{
		printf("%d\n", arr[j]);
	}

	}
	*/
//ㄴ백준 1934 최소공배수 구하는 문제
// 최소공배수는 a*b를 최대공약수로 나눈값과 같다를 이용함. 유클리드 호제법을 이용함.
//ㄴ2시간

/*
#include <stdio.h>

int main() {

	int a, b, c, h=2;
	scanf("%d", &c);

	for (int j = 0; j < c; j++) {
		scanf("%d %d", &a, &b);
		if (a == b) printf("%d", a);
		else if (a > b) {
			for (int i = 2;; i++) {
				b = b * i;
				if (a == b) { printf("%d", b); break; }
				else if(a > b) continue;
				else a = a * h; h++;
			}
		}
		else {
			for (int i = 2;; i++) {
				a = a * i;
				if (a == b) { printf("%d", b); break; }
				else if (b > a) continue;
				else b = b * h; h++;
			}
		}
	}
}
*/
//ㄴ백준 그냥 최소공배수 구하는거 시간초과 존나 뜸.

/*#include <stdio.h>

int main() {
	int x, y, w, h, a, b;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x <= (double)w / 2) a = x;
	else a = w - x;

	if (y <= (double)h / 2) b = y; //이거 x로 써놓고선 반례 뒤지게 찾고있었네 ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ병신아!
	else b = h - y;

	if (a <= b) printf("%d", a);
	else printf("%d", b);

	return 0;
}*/
//ㄴ백준 1085 일반 수학 문제 직사각형 경계선까지의 최단거리

/*#include <stdio.h>

int main() {
	int a, b, c, sum = 0;   //a 색종이의 개수, b=x c=y 값
	int box[100][100] = { 0, };
	
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {

		scanf("%d %d", &b, &c);

		for (int q = c; q < c+10; q++) {
			for (int j = b; j < b + 10; j++)
				box[q][j] = 1;
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (box[i][j] == 1) sum++;
		}
	}

	printf("%d", sum);


	return 0;
}*/ // 
//ㄴ백준 2563 2차원 배열

/*int main(void)
{
	char array[5][15];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			array[i][j] = 0;
		}
	}
	for (int i = 0; i < 5; i++) {
		scanf("%s", array[i]);
	}
	for (int j = 0; j < 15; j++) {
		for (int k = 0; k < 5; k++) {
			if (array[k][j] != '\0') {
				printf("%c", array[k][j]);
			}
		}
	}
	return 0;
}
*/
//ㄴ백준 10798 2차원 배열 
