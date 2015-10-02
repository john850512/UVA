#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#pragma warning(disable:4996)
using namespace std;
const int maxn = 300;

int num[maxn];
char str[maxn];

int main() {
	int ans = 0;
	for (int i = 1; i <= 100; i++) {
		int tmp = 1;
		for (int j = 1; j <= i; j++)
			tmp = tmp * i % 10;
		ans = (ans + tmp) % 10;
		num[i] = ans;
	}
	while (scanf("%s", str) != EOF && str[0] != '0') {
		int len = strlen(str);
		int cnt = 0;
		for (int i = 0; i < len; i++)
			cnt = (cnt * 10 + str[i] - '0') % 100;
		if (!cnt)
			cnt = 100;
		printf("%d\n", num[cnt]);
	}
	return 0;
}