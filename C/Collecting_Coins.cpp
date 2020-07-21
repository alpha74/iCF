// Collecting Coins
// https://codeforces.com/contest/1294/problem/A
// Aman Kumar

#include <iostream>

using namespace std ;

int main()
{
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		unsigned int a, b, c, n, i ;
		cin >> a >> b >> c >> n ;
		
		bool possible = true ;
		
		unsigned int largest = 0 ;
		
		// Find the largest of the coins
		if( a > largest )
			largest = a ;
		
		if( b > largest )
			largest = b ;
		
		if( c > largest ) 
			largest = c ;
		
		
		

		unsigned int diff_a, diff_b, diff_c ;
		
		// Calculate difference from largest
		diff_a = largest - a ;
		diff_b = largest - b ;
		diff_c = largest - c ;
		
		if( ( diff_a + diff_b + diff_c ) <= n )
		{
			// Reduce the number of coins
			n = n - diff_a ;
			n = n - diff_b ;
			n = n - diff_c ;
			
			// Add the difference to all three coins sets
			a = a + diff_a ;
			b = b + diff_b ;
			c = c + diff_c ;
			
			// Check for current value of n
			if( n != 0 )
			{
				if( n % 3 == 0 )
					possible = true ;
				else
					possible = false ;
			}
			else
				possible = true ;
			
		}
		else
		{
			possible = false ;
		}
		
		
		if( possible == true )
			cout << "YES\n" ;
		else
			cout << "NO\n" ;
		
	}
	return 0 ;
	
}
