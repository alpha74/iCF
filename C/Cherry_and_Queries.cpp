// https://codeforces.com/gym/277765/problem/E

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int cindices[26][100001] = { 0 } ;
int clen[27] = { 0 } ;

int main()
{
	ll n = 0, queries = 0  ;
	
	cin >> n >> queries ;
	
	string s = "" ;
	
	cin >> s ;
	
	// Create map on char and their indices
	for( ll i = 0 ; i < n ; i++ )
	{
		int temp = s[i] - 97 ;
		
		int currlen = clen[ temp ] ;
		
		cindices[ temp ][ currlen++ ] = i ;
		
		clen[ temp ] = currlen ;
	}
	
	for( ll q = 1 ; q <= queries ; q++ )
	{
		char check ;
		ll x ;
		cin >> check >> x ;
		
		ll minindex = 0, maxindex = 0 ;
		
		if( x == 0 ) ; 
		
		else
		{
			int temp = check - 97 ;
			
			if( x > clen[ temp ] ) 
			{
				minindex = n ;
				maxindex = n ;
			}
			else
			{
				minindex = cindices[ temp ][ x-1 ] ;
				
				if( x < clen[ temp ] )
					maxindex = cindices[ temp ][ x ] ;
				else
					maxindex = n ;
					
				minindex += 1 ;	
			}
			
		}
		
		cout << minindex << " " << maxindex << "\n" ;
	}
	
	return 0 ;
}
