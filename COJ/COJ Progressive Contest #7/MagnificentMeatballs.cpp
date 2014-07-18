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
	int a[31], n, i, j, p, aa, bb;
	bool ok;
	while(scd(n), n!=0){
		ok = false;
		for0(i, n){
			scd(a[i]);
		}
		for(i=0; i < n; i++){
			aa=0; bb=0;
			for(j=0; j<n; j++){
				if(j < i)
					aa+=a[j];
				else
					bb+=a[j];
				//dprd2(aa, bb);
			}
			if(aa == bb) {
				ok = true;
				break;
			}
		}
		if(ok)
			printf("Sam stops at position %d and Ella stops at position %d.\n", i, i+1);
		else {
			printf("No equal partitioning.\n");
		}
	}
}






