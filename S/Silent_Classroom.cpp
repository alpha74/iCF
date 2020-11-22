// Silent Classroom
// https://codeforces.com/problemset/problem/1166/A
// Aman Kumar


/*
	INSIGHT:
		- Follow comments.
	
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ss second
#define ff first

void mandalore() ;

int fact( int a )
{		
	ll prod = 1 ;
	
	while( a > 1 )
	{
		prod = prod + a ;
		a-- ;
	}
	
	return prod ;
}

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t = 1;
	//cin >> t ;
	
	while( t-- ) mandalore() ;
	
	return 0 ;
}

void mandalore()
{	
	int n ;
	cin >> n ;
	
	vector<char> name(n) ;
	vector<int> cl (n) ;
	map<char,bool> occur ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		string s ;
		cin >> s ;
		name[i] = s[0] ;
	}
	
	sort( name.begin(), name.end() ) ;
	
	for( int i = 0 ; i < n ; i++ )
	{				
		auto iter = occur.find( name[i] ) ;
		
		// If not in 0th class
		if( iter == occur.end() || iter -> ss == false )
		{
			cl[i] = 0 ;
			occur[ name[i] ] = true ;
		}
		else
		{
			occur[ name[i] ] = false ;
			cl[i] = 1 ;			
		}
	}
	
	// Count number of pairs in class1, and class2
	int num = 0 ;
	
	map<char,int> cl1, cl2 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( cl[i] == 0 )
		{
			cl1[ name[i] ]++ ;
		}
		else
		{
			cl2[ name[i] ]++ ;
		}
	}
	
	auto it = cl1.begin() ;
	
	for( ; it != cl1.end() ; it++ )
	{
		if( it -> ss > 1 )
		{
			num += fact( ( it->ss -1 )) ;
		}
	}
	
	it = cl2.begin() ;
	for( ; it != cl2.end() ; it++ )
	{
		if( it -> ss > 1 )
			num += fact( ( it->ss -1 ) ) ;
	}
	
	cout << num << "\n" ;
}
