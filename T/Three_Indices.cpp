// Three Indices
// https://codeforces.com/problemset/problem/1380/A
// Aman Kumar

/*
	INSIGHT:
		- Traverse from both sides inwards.
		- See code for iterating conditions and stopping.
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
	int n ;
	cin >> n ;
	
	vector<int> p(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> p[i] ;
	}
	
	bool found = false ;
	int x,y,z ;

	if( n >= 3 )
	{
		int l = 0, m = 0, r = n-1 ;
		
		while( l < r && found == false )
		{
			if( p[l+1] > p[l] && p[l+1] > p[r] )
			{
				found = true ;
				x = l ;
				y = l+1 ;
				z = r ;
			}
			else if( p[r-1] > p[r] && p[r-1] > p[l] )
			{
				found = true ;
				x = l ;
				y = r-1 ;
				z = r ;
			}
			else
			{
				if( p[l+1] > p[l] )
					r-- ;
					
				else if( p[r-1] > p[r] )
					l++ ;
				
				else
				{
					if( p[l] < p[r] )
						r-- ;
					else
						l++ ;
				}
				
				
			}
		}
	}

	
	if( found == true )
	{
		cout << "YES\n" ;
		cout << x+1 << " " << y+1 << " " << z+1 << "\n" ;
	}
	else
		cout << "NO\n" ;
	
}
