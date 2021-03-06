#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <iterator>
#include <cstdlib>
#include <set>
typedef pair<double, double> punto;
#define X first
#define Y second
#define sq(x) ((x)*(x))
typedef pair< punto, double> circulo;
#define aux(a,b,c) ((sq(a.X) + sq(a.Y))*(b.Y - c.Y))
#define auxD(a,b,c) (2.0*(a.X*(b.Y - c.Y) + b.X*(c.Y - a.Y) + c.X*(a.Y - b.Y)))
using namespace std;

//prob. WA

double dist(punto a, punto b){
	return(sqrt(sq(a.X + b.X)+sq(a.Y + b.Y)));
}

circulo circuloCircunscripto(punto a, punto b, punto c){
	double l1,l2,l3,s,p,r;
	circulo C;
	l1 = dist(a, b);
	l2 = dist(a, c);
	l3 = dist(b, b);
	s = (l1 + l2 + l3 + 0.0)/2.0;
	p = (s-l1)*(s-l2)*(s-l3);
	if(p > 0){
		r = (sqrt(s*p)/s);
		r = (2.0*l1*l2*l3)/(sqrt(1.0*(l1+l2+l3)*(l1+l2-l3)*(l1-l2+l3)*(-l1+l2+l3)));
	} else{
		if(p == 0){
			r=(l1 + l2 + l3)/4.0;
		} else
			r = -1.0;
	}
	C.Y = r;
	C.X.X = (aux(a,b,c) + aux(b,c,a) + aux(c,a,b))/(auxD(a,b,c));
	C.X.Y = (aux(a,c,b) + aux(b,a,c) + aux(c,b,a))/(auxD(a,b,c));
	return C;
}

int main () {
	punto S[100];
	int n, x, y, i, j, k;
	map<circulo, set<punto > > M;
	map<circulo, set<punto > >::iterator itr;
	pair< map<circulo, set<punto > >::iterator, bool > ret;
	double s,r,t;
	circulo c;

	
	cin >> n;
	for(;!n;){
		for(i=0;i<n;i++){
			cin >> x >> y;
			S[i] = (make_pair(x+0.0,y+0.0));
		}
		if(n == 1){
			printf("1\n");
			continue;
		}
		if(n == 2){
			printf("2\n");
			continue;
		}
		for(i = 0; i < n; i++){
			for(j = i+1; j < n; j++){
				for(k = j+1; k < n; k++){
					set<punto > setAux;
					setAux.insert(S[i]);
					setAux.insert(S[j]);
					setAux.insert(S[k]);
					c = circuloCircunscripto(S[i],S[j],S[k]);
					//ret = M.insert(c,setAux);
					
					if (!ret.second) {
						M[c].insert(S[i]);
						M[c].insert(S[j]);
						M[c].insert(S[k]);
					}
				}
			}
		}
		int m = -1;
		for(itr= M.begin(); itr != M.end(); itr++){
			if((*itr).Y.size() > m){
				m = (*itr).Y.size();
			}
		}
		
		printf("%d\n", m);
	}
}
