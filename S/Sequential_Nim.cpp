// Sequential Nim
// https://codeforces.com/problemset/problem/1382/B
// Aman Kumar

/*
	INSIGHT: See Code
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

void func() ;


int main() 
{
	#ifndef DBG
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
	    func() ;
	}
	return 0 ;
}


void func()
{
	int n ;
	cin >> n ;
	
	vector<int> a(n) ;
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
	}
	
	// false : player1   true : player2
	bool player = false ;
	int k = 0 ;
	
	bool stop = false ;
	
	// Count number of prefix 1s
	while( k < n && a[k] == 1 )
	{
		k++ ;
	}
	
	if( k == n )
	{
		if( k % 2 == 0 )
			player = true ;
		else
			player = false ;
	}
	else
	{
		if( k % 2 == 0 )
			player = false ;
		else
			player = true ;
	}
	
	// Print result
	if( player == false )
		cout << "First\n" ;
	else
		cout << "Second\n" ;
	
}

