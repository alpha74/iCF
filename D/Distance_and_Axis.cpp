// Distance and Axis
// https://codeforces.com/contest/1401/problem/A
// amanalphakumar

/*
	INSIGHT: See code
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO
#define DBG

void generalkenobi() ;

int main() 
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
	    generalkenobi() ;
	}
	return 0 ;
}

void generalkenobi()
{
	int n, k ;
	cin >> n >> k ;
	
	// If n < k
	if( n < k )
		cout << k-n << "\n" ;
	
	// If having same parity
	else if( n % 2 == k % 2 )
		cout << "0\n" ;
	
	else
		cout << "1\n" ;
	
}
