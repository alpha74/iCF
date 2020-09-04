// Yet Another Two Integers Problem
// https://codeforces.com/contest/1409/problem/A
// Aman Kumar

/*
	INSIGHT: 
		See code
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO

void vader() ;

int main()
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t =1  ;
	cin >> t; 
	
	while(t--) vader() ;
	
	return 0 ;
}

void vader()
{
	ll a, b ;
	cin >> a >> b ;
	
	ll diff = abs( b -a ) ;
	
	ll count = diff / 10 ;
	
	if( diff % 10 > 0 )
		count++ ;
	
	cout << count << "\n" ;
}
