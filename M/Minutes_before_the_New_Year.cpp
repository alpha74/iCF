// Minutes before the New Year
// https://codeforces.com/problemset/problem/1283/A
// Aman Kumar

/*
	INSIGHT:
		- Simple math
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
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
	int h, m ;
	cin >> h >> m ;
	
	int hh = 23, mm = 60 ;
	
	// Simple math
	int left = (hh-h)*60 + (mm-m) ;
	
	cout << left << "\n" ;
	
}
