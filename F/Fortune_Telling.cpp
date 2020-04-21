// https://codeforces.com/gym/276996/problem/G

#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	
	vector<int> p ;
	int sum = 0, ret = 0 ;

	for( int i = 1 ; i <= n ; i++ )
	{
		int temp ;
		cin >> temp ;
		
		p.push_back( temp ) ;	
		
		sum = sum + temp ;
	}	
	
	// If only one flower and with even number of petals
	if( n == 1 && p[0] % 2 == 0 )
		ret = 0 ;
	
	// If only one flower and with odd number of petals
	else if( n == 1 && p[0] % 2 != 0 )
		ret = p[0] ;
	
	// If sum of all petals are odd, return
	else if( sum % 2 != 0 )
		ret = sum ;
	
	// If sum of all petals is even.
	else
	{
		sort( p.begin(), p.end() ) ;
		
		// Remove first odd element.
		int i = 0 ;
		
		for( ; i < p.size() ; i++ )
		{
			if( p[i] % 2 != 0 )
				break ;
		}
		
		if( i == p.size() )
			ret = 0 ;
		else
		{
			sum = sum - p[i] ;
			ret = sum ;
		}
		
	}
	
	cout << ret << "\n" ;
}
