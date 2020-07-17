// Santa Claus and Candies
// https://codeforces.com/gym/277514/problem/A
// Author: Aman Kumar
// Uses backtracking.

#include <bits/stdc++.h>

using namespace std ;


int distribute( int left, int last )
{
	if( left == 1 )
		return 1 ;
		
	else
	{
		++last ;
		
		if( last <= left )
			return last ;
		else
			return last - 1 ;
	}
		
}

vector<int> santa( int left )
{
	map<int,bool> chosen ;
	vector<int> ret ; 
	 
	int last = 0 ;
	
	while( left > 0 )
	{
		int candy = distribute( left, last ) ;
		
		auto iter = chosen.find( candy ) ;
		
		if( iter == chosen.end() )
		{
			ret.push_back( candy ) ;
			chosen.insert( pair<int,bool>( candy, false ) ) ;
			
			last = candy ;
			left = left - candy ;
		}
		else
		{
			last = ret[ ret.size() -1 ] ;
			ret.pop_back() ;
			left = left + last ;
		}
	}
	
	return ret ;
}

int main()
{
	int n ;
	cin >> n ;
	
	vector<int> seq = santa( n ) ;
	
	int sum = 0 ;
	
	cout << seq.size() << "\n" ;
	for( int i = 0 ; i < seq.size() ; i++ )
		cout << seq[i] << " " ;
		
	return 0 ;
}
