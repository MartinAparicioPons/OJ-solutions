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
#define prd2(x,y) printf("%d %d\n", x,y)
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
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

int main(){
	ll n, m, a, i, j, r;
	multiset<ll> s;
	while(scanf("%lld", &n), n!=0){
		r = 0;
		s.clear();
		for0(i, n){
			scanf("%lld", &m);
			for0(j, m){
				scanf("%lld", &a);
				s.insert(a);
			}
			a = *s.begin();
			s.erase(s.find(a));
			r -= a;
			a = *s.rbegin();
			s.erase(s.find(a));
			r += a;
		}
		printf("%lld\n", r);
	}
}








