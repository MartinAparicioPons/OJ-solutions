#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

/* Not sent. 
 * WA.
 */


int main () {
	int a1, a2, b1, b2, r;
	cin >> b1 >> b2 >> a1 >> a2;
	for(;(a1!=0) ||(a2!=0) ||(b1!=0) ||(b2!=0);){
		if(a1 > b1){
			r = ((a1 - b1)*60) + (a2-b2);
		} else {
			if((a2 >= b2) && (a1 == b1)){
				r = ((a1 - b1)*60) + (a2-b2);
			} else {
				r = 1440 - ((a1 - b1)*60) + (a2-b2);
			}
		}
		printf("%d\n", r);
		cin >> b1 >> b2 >> a1 >> a2;
	}
	
}
