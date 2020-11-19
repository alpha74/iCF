// Erasing Zeroes
// https://codeforces.com/problemset/problem/1303/A
// Aman Kumar


/*
	INSIGHT:
	 - Check for corner cases first. See comments.
	 - If more than 1 onces are present, add the difference in their indices.
	
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
	
	while( t-- ) func() ;
	
	return 0 ;
}

void func()
{
	string s ;
	cin >> s ;  
	
	int ans = 0 ;
	
	// Store all positions of 1s
	vector<int> pos ;
	
	for( int i = 0 ; i < s.length()  ; i++ )
	{
		if( s[i] == '1' )
			pos.push_back( i ) ;
	}
	
	if( pos.size() == 0 || pos.size() == 1 )
		ans = 0 ;
	
	// Get min diff in 1s indices positions
	else
	{
		ans = 0 ;
		
		for( int i = 1 ; i < pos.size() ; i++ )
		{
			ans += ( pos[i] - pos[i-1] - 1 );
		}	
	}
	cout << ans << "\n" ;
}
