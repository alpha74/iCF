// Park Lightening
// https://codeforces.com/problemset/problem/1358/A
// Author: Aman Kumar

/*
	INSIGHT:
		
		- Take ceil of (n*m)/2		
    - Take special care of data types.
*/


#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	ll t ;
	cin >> t ;
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int n, m ;
	cin >> n >> m ;
	
	double prod = n * m * 1.0 ;
	ll lights = ceil( prod/2 ) ;
	
	cout << lights << "\n" ;
}
