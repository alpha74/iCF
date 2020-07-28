// Nastya and Rice
// https://codeforces.com/problemset/problem/1341/A
// Aman Kumar

/*
	INSIGHT:
		- See code
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
	int n, a, b, c, d ;
	cin >> n >> a >> b >> c >> d ;
	
	int grainmin = n * (a-b), grainmax = n * (a+b) ;
	int packmin = c-d, packmax = c+d ;
	
	if( grainmin >= packmin && grainmin <= packmax )
		cout << "Yes\n" ;
	
	else if( grainmax >= packmin && grainmax <= packmax )
		cout << "Yes\n" ;
	
	else if( packmin >= grainmin && packmin <= grainmax )
		cout << "Yes\n" ;
		
	else if( packmax >= grainmin && packmax <= grainmax )
		cout << "Yes\n" ;
	
	else
		cout << "No\n" ;
	
}
