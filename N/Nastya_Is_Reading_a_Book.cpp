// Nastya_Is_Reading_a_Book
// https://codeforces.com/problemset/problem/1136/A
// Aman Kumar

/*
	INSIGHT:
		- See code
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
	
	vector<pair<int,int>> ch ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int l, r ;
		cin >> l >> r ;
		
		ch.push_back( make_pair(l,r) ) ;
	}
	
	int k ;
	cin >> k ;
	
	int i = 0 ;
	for( ; i < n ; i++ )
	{
		if( k >= ch[i].ff && k <= ch[i].ss )
		{
			break ; 
		}
	}
	
	cout << n - i << "\n" ;
	
}
