#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 15;

int main(){
	ios_base::sync_with_stdio(0);
	tint DP[MAXN][MAXN] = {
		{75,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{95, 64,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{17, 47, 82,0,0,0,0,0,0,0,0,0,0,0,0},
		{18, 35, 87, 10,0,0,0,0,0,0,0,0,0,0,0},
		{20, 4, 82, 47, 65,0,0,0,0,0,0,0,0,0,0},
		{19, 1, 23, 75, 3, 34,0,0,0,0,0,0,0,0,0},
		{88, 2, 77, 73, 7, 63, 67,0,0,0,0,0,0,0,0},
		{99, 65, 4, 28, 6, 16, 70, 92,0,0,0,0,0,0,0},
		{41, 41, 26, 56, 83, 40, 80, 70, 33,0,0,0,0,0,0},
		{41, 48, 72, 33, 47, 32, 37, 16, 94, 29,0,0,0,0,0},
		{53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,0,0,0,0},
		{70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,0,0,0},
		{91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,0,0},
		{63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,0},
		{4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23}
	};
	tint r = 0;
	int i, j, n = 15, k = 1;
	for(i = 1; i < n; i++){
		DP[i][0] += DP[i-1][0];
		for(j = 1; j <= i; j++){
			DP[i][j] += max(DP[i-1][j], DP[i-1][j-1]);
		}
	}
	for(i = 0; i < n; i++){
		r = max(r, DP[n-1][i]);
	}
	DEB(r);
}