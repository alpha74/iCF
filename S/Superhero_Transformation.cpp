// Superhero Transformation
// https://codeforces.com/problemset/problem/1111/A
// Aman Kumar


/*
	INSIGHT: 
		- Check corresponding chars for vowels and consonents.
	
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ss second
#define ff first

void mandalore() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t = 1 ;
	//cin >> t ;
	
	while( t-- ) mandalore() ;
	
	return 0 ;
}

void mandalore()
{
	string s, t ;
	cin >> s >> t ;
	
	bool flag = true ;
	int i = 0, j = 0 ; 
	
	while( i < s.length() && j < t.length() && flag )
	{
		bool isvowels = false, isvowelt = false ;
		
		if( s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' )
			isvowels = true ;
		
		if( t[i] == 'a' || t[i] == 'e' || t[i] == 'o' || t[i] == 'i' || t[i] == 'u' )
			isvowelt = true ;
		
		if( isvowels != isvowelt )
			flag = false ;
		
		i++ ;
		j++ ;
	}
	
	if( s.length() != t.length() )
		flag = false ;
	
	if( flag )
		cout << "Yes\n" ;
	else
		cout << "No\n" ;
}
