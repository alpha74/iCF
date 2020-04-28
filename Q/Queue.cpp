// https://codeforces.com/gym/277804/problem/B

#include <bits/stdc++.h>

using namespace std ;

class ListNode
{
	public:
		int val ;
		ListNode *next ;
		ListNode *prev ;
		
		ListNode()
		{
			val = 0 ;
			next = NULL ;
			prev = NULL ;
		}
		
		ListNode( int v )
		{
			val = v ;
			next = NULL ;
			prev = NULL ;
		}
		
} ;


int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int n ;
	cin >> n ;
	
	// To store all val and their pointers
	map<int,ListNode*> allheads ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int x1, x2 ;
		cin >> x1 >> x2 ;
		
		// Create three nodes if not exist
		ListNode* p1 = NULL ;
		ListNode* p2 = new ListNode( 0 ) ;
		ListNode* p3 = NULL ;
		
		// For x1
		if( x1 == 0 )
		{
			p1 = new ListNode( -1 ) ;
			allheads.insert( pair<int,ListNode*>( -1, p1 ) ) ;
		}
		else
		{
			auto iter = allheads.find( x1 ) ;
			
			if( iter == allheads.end() )
			{
				p1 = new ListNode( x1 ) ;
				allheads.insert( pair<int,ListNode*>( x1, p1 ) ) ;
			}
			else
				p1 = iter -> second ;
		}
		
		/// For x2
		if( x2 == 0 )
		{
			p3 = new ListNode( -2 ) ;
			allheads.insert( pair<int, ListNode*>( -2, p3 ) ) ;
		}
		else
		{
			auto iter = allheads.find( x2 ) ;
			
			if( iter == allheads.end() )
			{
				p3 = new ListNode( x2 ) ;
				allheads.insert( pair<int, ListNode*>( x2, p3 ) ) ;
			}
			else
				p3 = iter -> second ;
		}
		
		// Connect the three nodes : next
		p1 -> next = p2 ;
		p2 -> next = p3 ;
		
		// Connect prev pointers
		p3 -> prev = p2 ;
		p2 -> prev = p1 ;
		
	}
	
	// Get the pointer with val == -1
	auto iter_ah = allheads.find( -1 ) ;
	
	ListNode *head = iter_ah -> second ;
	ListNode *head1 = head ;
	ListNode *temp = head ;
	
	// Store all nodes connected with head in a map
	map<int,bool> list1 ;
	
	while( temp != NULL )
	{
		list1.insert( pair<int,bool>( temp -> val, false ) ) ;
		temp = temp -> next ;
	}
	
	// Find first node of list2
	// Iterate on allheads and find first element which not occurs in list1
	ListNode *head2 = NULL ;
	
	for( iter_ah = allheads.begin() ; iter_ah != allheads.end() ; iter_ah++ )
	{
		auto iter_l1 = list1.find( iter_ah -> first ) ;
		
		// Found the element
		if( iter_l1 == list1.end() )
		{
			temp = iter_ah -> second ;
			break ;
		}
	}
	
	// Iterate reverse on temp to get first element
	while( temp != NULL )
	{
		head2 = temp ;
		temp = temp -> prev ;
	}
	
	int count_list1 = 0 ;
	int count_list2 = 0;
	bool turn = 1 ;
	
	head = head1 ;
	temp = head2 ;
	
	head1 = head1 -> next ;
	head1 = head1 -> next ;
	count_list1 +=2 ;
	
	while( count_list1 < n+2 && count_list2 < n+2 )
	{
		if( turn == 1 )
		{
			if( head2 -> val != -2 )
				cout << head2 -> val << " " ;
			
			head2 = head2 -> next ;
			
			if( head2 != NULL )
				head2 = head2 -> next ;
				
			count_list2 +=2 ;	
		}
		else
		{
			if( head1 -> val != -2 )
				cout << head1 -> val << " " ;
			head1 = head1 -> next ;
			
			if( head1 != NULL )
				head1 = head1 -> next ;
			
			count_list1 +=2 ;
		}
		
		turn = !turn ;
	}
	
	
	return 0 ;
}
