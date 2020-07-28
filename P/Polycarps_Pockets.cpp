// Polycarp's Pockets
// https://codeforces.com/problemset/problem/1003/A
// Aman Kumar

/*
	INSIGHT:
		- Return max freq of repeated numbers
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
	
	vector<int> coins(n) ;
	
	map<int,int> freq ;
	int maxfreq = 1 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> coins[i] ;
		
		auto iter = freq.find( coins[i] ) ;
		
		if( iter == freq.end() )
			freq[ coins[i] ] = 1 ;
		else
		{
			iter -> second +=1 ;
			
			maxfreq = max( maxfreq, iter -> second ) ;
		}
	}
	
	cout << maxfreq << "\n" ;
}
