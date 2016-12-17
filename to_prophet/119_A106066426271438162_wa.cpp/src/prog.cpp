/*
 * 90A.cxx
 *
 *  Created on: 1:32:04 PM Sep 18, 2012
 *      Author: Pallab
 * "I have not failed, I have just found 10000 ways that won't work.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <functional>
#include <bitset>
#include <iomanip>

#include <ctime>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <climits>
#include <cstring>
#include <cstdlib>

using namespace std;

#define foR(i1,st,ed) for(int i1 = st , j1 = ed ; i1 < j1 ; ++i1 )
#define fo(i1,ed) foR( i1 , 0 , ed )
#define foE(i1,st,ed) foR( i1, st, ed+1 )
#define foit(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define bip system("pause")
#define Int long long
#define pb push_back
#define SZ(X) (int)(X).size()
#define LN(X) (int)(X).length()
#define mk make_pair
#define SET( ARRAY , VALUE ) memset( ARRAY , VALUE , sizeof(ARRAY) )
#define line puts("")

inline void wait(double seconds){
	double endtime = clock() + (seconds * CLOCKS_PER_SEC);
	while ( clock() < endtime ){
		;
	}
}
#define T int
inline T fastIn(){
	register char c = 0;
	register T a = 0;
	while ( c < 33 )
		c = getchar();
	while ( c > 33 ){
		a = (a * 10) + (c - '0');
		c = getchar();
	}
	return a;
}

int fixed_me;
int fixed_him;
int stone_count;
#define me 0
inline void read(){
	fixed_me=fastIn();
	fixed_him=fastIn();
	stone_count=fastIn();

}
#define lose 0
#define win 1

bool go(int stone_left,int player){
	int need = __gcd(stone_left, player==me ? fixed_me : fixed_him);
	bool res=lose;
	if( stone_left>=need ){
		bool tmp=go(stone_left-need, player==me ? 1:0);
		res=tmp;
	}
	if( player==me ){
		return res==win ? win : lose;
	}
	else{
		return res==win ? lose : win ;
	}
}
inline void proc(){
	bool res = go(stone_count,me);
	puts( res ? "0": "1" );
}
//#define ME
int main(){
	int kase = 1;
#if defined ( ME )
	freopen("in", "r", stdin);
	kase = 2;
#endif
	fo(i,kase){
		read();
		proc();
	}
	return 0;
}







