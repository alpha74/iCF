// Three Pairwise Maxims
// https://codeforces.com/contest/1385/problem/A
// See condition comments.

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		vector<ll> num(3) ;
		
		cin >> num[0] ;
		cin >> num[1] ;
		cin >> num[2] ;
		
		sort( num.begin(), num.end() ) ;
		
		vector<ll> result(3) ;
		bool valid = false ;
		
		
		// If all match
		if( num[0] == num[1] && num[1] == num[2] )
		{
			valid = true ;
			result[0] = num[0] ;
			result[1] = num[0] ;
			result[2] = num[0] ;
		}
		
		// If none match
		else if( num[0] != num[1] && num[1] != num[2] && num[0] != num[2] ) 
			valid = false ;
			
		// If last two are same( and are largest )
		else if( num[1] == num[2] )
		{
			valid = true ;
			result[0] = num[2] ;
			result[1] = num[0] ;
			result[2] = num[2] - num[1] ;
			
			if( result[2] < num[0] ) 
				result[2] = num[0] ;
		}
			
		
		// Print output
		if( valid == true )
		{
			cout << "YES\n" ;
			cout << result[0] << " " << result[1] << " " << result[2] << "\n" ;
		}
		else
			cout << "NO\n" ;
			
		
	}
	
	return 0 ;
}
