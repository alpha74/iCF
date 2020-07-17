// Photo to Remember
// https://codeforces.com/gym/277157/problem/D
// Author: Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int main()
{
	ll n ;
	cin >> n ;
	
	vector<int> width ;
	vector<int> height ;
	
	int maxh = INT_MIN, smaxh = INT_MIN ;
	int sumw = 0 ;
	
	while( n-- )
	{
		int w, h ;
		cin >> w >> h ;
		
		sumw = sumw + w ;
		
		if( h > maxh )
			maxh = h ;
		
		width.push_back( w ) ;
		height.push_back( h ) ;
	}
	
	n = width.size() ;
	
	int maxcount = 0 ;
	// Find frequency of maxh
	for( int i = 0 ; i < n ; i++ )
	{
		if( height[i] == maxh )
			maxcount++ ;
	}
	
	if( maxcount == 1 )
	{
		// Find second max height
		for( int i = 0 ; i < n ; i++ )
		{
			if( height[i] > smaxh && height[i] != maxh )
				smaxh = height[i] ;				
		}
	}
	else
		smaxh = maxh ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int currsumw = sumw - width[i] ;
		int currmaxh = -1 ;
		
		if( height[i] == maxh )
			currmaxh = smaxh ;
		else
			currmaxh = maxh ;
		
		cout << currsumw * currmaxh << " " ;
	}
	
	
	return 0 ;
}
