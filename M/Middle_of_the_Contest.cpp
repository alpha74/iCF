// Middle of the Contest
// https://codeforces.com/problemset/problem/1133/A
// Aman Kumar


/*
	INSIGHT: 
	- See code
	
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
	string s1, s2 ;
	cin >> s1 >> s2 ;
	
	char ch1[6], ch2[6] ;
	strcpy( ch1, s1.c_str() ) ;
	strcpy( ch2, s2.c_str() ) ;
	
	int h1, m1, h2, m2 ;
	
	// Parse string oto int
	sscanf( ch1,"%d:%d", &h1, &m1 ) ;
	sscanf( ch2, "%d:%d", &h2, &m2 ) ;
	
	int diff = abs(m2 + m1) + abs(h2 + h1) * 60 ;
	diff = diff /2 ;
		
	// Convert back to hh:mm format
	int h_mid = diff / 60 ;
	int m_mid = diff % 60 ;
	
	
	if( m_mid == 60 )
	{
		h_mid = h_mid + 1 ;
		m_mid = 0 ;
	}
	
	if( h_mid >= 10 )
		cout << h_mid ;
	else
		cout << "0" << h_mid ;
	
	cout << ":" ;
	
	if( m_mid >= 10 )
		cout << m_mid ;
	else
		cout << "0" << m_mid ;
	
	
}
