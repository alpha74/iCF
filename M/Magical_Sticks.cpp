// Magical Sticks
// https://codeforces.com/contest/1371/problem/A
// Author: Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

ll getSameSticks( ll n )
{
	
	return (n+1)/2 ;
}

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		ll n ;
		cin >> n ;
		
		cout << getSameSticks( n ) << "\n" ;
	}
	
	return 0 ;
}
