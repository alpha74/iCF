// New Year and Naming
// https://codeforces.com/problemset/problem/1284/A
// Aman Kumar

/*
	INSIGHT:
		- Find index1 by (year-1) % n
		- Find index2 by (year-1) % m
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	//int t ;
	//cin >> t ;
	
	//while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int n, m ;
	cin >> n >> m ;
	
	vector<string> s(n) ;
	vector<string> t(m) ;
	
	for( int i = 0 ; i < n ; i++ )
		cin >> s[i] ;
		
	for( int i = 0 ; i < m ; i++ )
		cin >> t[i] ;
		
	// Number of queries	
	int numq ;
	cin >> numq ;	
	
	while( numq-- )
	{
		int year ;
		cin >> year ;
		
		cout << s[(year-1) % n] << t[(year-1)%m] << "\n" ;
	}	
	
}
