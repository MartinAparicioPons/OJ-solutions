#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 500400;

int A[MAXN];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string S;
	int q, i, j, n, k;
	cin >> S; n = S.size();
	A[0] = 0;
	for(i = 0; i < n-1; i++){
		A[i+1] = A[i] + (S[i] == S[i+1]);
	}
	cin >> q;
	while(q--){
		cin >> j >> k; j--;k--;
		cout << A[k] - A[j] << endl;
	}
}
