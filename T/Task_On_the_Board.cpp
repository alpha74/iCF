// https://codeforces.com/contest/1367/problem/C
// Task On the Board
// Author: Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

int goodTables( string &table, int k )
{
	int tsize = table.length() ;
	
	// If only tables and filled, return 0
	if( tsize == 1 && table[0] == '1' )
		return 0 ;
	
	// If one tables and not filled, return 1 
	else if( tsize == 1 && table[0] == '0' )
		return 1 ;
	
	// Number of good tables	
	int ret = 0 ;
	
	vector<int> filled ;
	bool all0 = true ;
	// Get indices at which tables are filled
	for( int i = 0 ; i < tsize ; i++ )
	{
		if( table[i] == '1' )
		{
			filled.push_back( i ) ;
			all0 = false ;
		}
	
	}
	
	// If all are empty
	if( all0 == true )
	{
		double tempsize = tsize ;
		double tempk = k+1 ;
		
		double g = tempsize/tempk ;
		
		return ceil( g ) ;
	}
	
	// Determine if current arrangement is good
	bool order = true ;
	for( int i = 1 ; i < filled.size() && order == true ; i++ )
	{
		if( filled[i] - filled[i-1] <= k )
			order = false ;
	}
	
	if( order == false )
		return 0 ;
		
	// Find number of chairs
	for( int i = 0 ; i < tsize ; )
	{
		bool cansit = true ;
		
		if( table[i] == '0' )
		{
			// Get lower bound from filled
			auto right = upper_bound( filled.begin(), filled.end(), i ) ;
			auto left = right ;
			
			if( right != filled.begin() && right != filled.end() )
			{
				left = right ;
				left-- ;
			}
			
				
			if( right != filled.begin() && right != filled.end() && filled[ ( left - filled.begin() ) ] >= (i-k) )
				cansit = false ;
			
			if( right != filled.end() && filled[( right - filled.begin() )] <= (i+k) ) 
				cansit = false ;
				
			if( cansit == true )
			{
				ret++ ;
				filled.push_back( i ) ;
				sort( filled.begin(), filled.end() ) ;
				
				i += ( k+1) ;
			}
			else
				i++ ;
		}
		else
		 i += (k+1) ;
	}	
	
	return ret ;	
}

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int n, k ;
		cin >> n >> k ;
		
		string tables ;
		cin >> tables ;
		
		cout << goodTables( tables, k ) << "\n" ;
	}
	return 0 ;
}
