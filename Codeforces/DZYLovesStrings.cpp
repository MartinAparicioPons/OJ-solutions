#include <cstdio>
#include <cctype>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <locale>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define dprd2(x,y) printf("||%d | %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;
#define MAX 100005


int main(){
	string s;
	int i, n, k, p, r=0, max=-1;
	map<char, int> m;
	map<char, int>::iterator it;
	cin >> s;
	scd(k);
	for0(i, 26){
		scd(p);
		m.insert(_MP('a'+i,p));
		if(p > max) max = p;
		//printf("|| %c | %d\n", 'a'+i, p[i]);
	}
	for(i=0, n=s.size(); i<n; i++){
		r += m[s[i]]*(i+1);
		//dprd(m[s[i]]);
	}
	for(i=1; i<=k; i++){
		r+=(i+n)*(max);
		//dprd2(i+n, max);
	}
	printf("%d", r);
}





