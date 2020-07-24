// Number of Triplets
// https://codeforces.com/problemset/problem/181/B
// Aman Kumar

/*
	INSIGHT:
		- Create hasmap of points : 2*x, 2*y
		- Make mid points from two loop and check it exists in hashmap
		- If yes, count++
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

#define ff first
#define ss second

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
	int n ;
	cin >> n ;
	
	vector<pair<int,int>> point ;
	map<pair<int,int>, bool> all ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int a, b ;
		cin >> a >> b ;
		
		pair<int,int> newpair ;
		newpair.ff = a ;
		newpair.ss = b ;
		
		point.push_back( newpair ) ;
		
		newpair.ff *= 2 ;
		newpair.ss *= 2 ;
		all.insert( pair<pair<int,int>,bool>( newpair, false )) ;
	}
	
	ll count = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		for( int j = i+1 ; j < n ; j++ )
		{
			// Create a mid point from ith and jth points
			pair<int,int> mid = make_pair( (point[i].ff+point[j].ff), (point[i].ss + point[j].ss) ) ;
			
			auto iter = all.find( mid ) ;
			
			if( iter != all.end()  )
				count++ ;
		}
	}
	
	cout << count << "\n" ;
}
