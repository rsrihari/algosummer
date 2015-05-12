#include <iostream>

using namespace std;

class node{
	public:
		int* val;	
		node* next;
	};

class Link{
	int* head;
	public:
		Link(){
			head=NULL;
			}
		int* headret(){
			return head;
			}
		void addnew(int a){
			if (head==NULL){
				head=new int;
				head->val=a;
				head->next=NULL;
				}
			int* temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=new int;
			temp->next->val=a;
			temp->next->next=NULL;
			}
		
		void del(int a){
			int* temp=head;
			while(temp->val!=a)
				temp=temp->next;
			
			
	
	
	
class KillBill{
	int** charge;
	int* remaining

