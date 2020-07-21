// Angry Students
// https://codeforces.com/problemset/problem/1287/A
// Aman Kumar

/*
	INSIGHT:
		- Skip 'P' students from first
		- Return the max number of 'P' students between each 'A' students
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
	int n ;
	cin >> n ;
	
	string gp ;
	cin >> gp ;
	
	int maxp = 0 ;
	
	if( n > 1 )
	{
		int currmax = 0 ;
		
		int i = 0 ;
		
		while( gp[i] == 'P' )
		{
			i++ ;
		}
		
		for( ; i < n ; i++ )
		{
			if( gp[i] == 'A' )
			{
				maxp = max( maxp, currmax ) ;
				currmax = 0 ;
			}
			else
			{
				currmax++ ;
			}
		}
		
		maxp = max( maxp, currmax ) ;
	}
	
	cout << maxp << "\n" ;
}
