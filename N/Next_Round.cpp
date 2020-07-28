// Next Round
// https://codeforces.com/problemset/problem/158/A
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
	int n, k ;
	cin >> n >> k ;
	
	vector<int> p(n) ;
	
	for( int i = 0 ; i < n ; i++ )
		cin >> p[i] ;
	
	int advance = 0 ;
	
	if( p[k-1] > 0 )
	{
		advance = k ;
	
		while( p[advance] >= p[k-1] && advance < n )
			advance++ ;
	}
	else
	{
		k-- ;
		while( k >= 0 )
		{
			if( p[k] > 0 )
				advance++ ;
			
			k-- ;	
		}
	}
	
	cout << advance << "\n" ;
}
