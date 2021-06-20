#include <iostream>
using namespace std;
struct node{
	int num;
	node *next;
	node *prev;

};
node * current = NULL;
//node * head =NULL;

void addBegin (int x)
{
	node *p;
	p = new node;
	p->num =x;
	p->prev=NULL;
	if(current == NULL)
		current=p;
	else{
		p->next=current;
		current -> prev = p;
	}
	while(current -> prev != NULL)
	{
		current = current -> prev;
	}
}
	

void display()
	{
	while (current -> prev != NULL) //backward travellinng
	{
		current = current -> prev;
	}
	while (current != NULL)// forward travelling
	{
		cout<<current->num<<" ";
		current = current -> prev;
	}
	

	
}
int main(){
		addBegin(6);
		addBegin(8);
		addBegin(10);
		addBegin(12);
		addBegin(14);
		display();
					
					return 0;
				}

	
