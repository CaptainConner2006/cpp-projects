#include <iostream>
#include <stack>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

/*queue datastruct
void printQue(queue<string> q){
	queue<string> temp = q;
	while(!temp.empty()){
		cout << temp.front() << endl;
		temp.pop();
	}
}
*/


/*linked list classes and functions
class node{//node structure
	public:
		string val;
		node* nex;
};

void printList(node* el){
	while(el != NULL){
		cout << el->val << endl;
		el=el->nex;
	}	
}
void insertAtHead(node** head, string newVal){
	//prepare newnode
	node* newNode = new node();
	newNode->val = newVal;
	//put in front of list
	newNode->nex = *head;
	//make head point to newnode
	*head = newNode;
}
void insertAtEnd(node** head, string newVal){
	//make newNode
	node* newNode = new node();
	newNode->val = newVal;
	newNode->nex = NULL;
	//if list = empty, newNode will be headnode
	if(*head == NULL){
		*head = newNode;
		return;
	}
	//find last node
	node* last = *head;
	while(last->nex != NULL){
		last = last->nex;
	}
	//make previous last node point at newNode;
	last->nex = newNode;
	
}
void insertAfter(node* previous, string newVal){
	//check if prev node = NULL
	if(previous == NULL){
		cout << "prev cant be NULL";
		return;
	}
	//make a newNode
	node* newNode = new node();
	newNode->val = newVal;
	//insert newNode after prev element
	newNode->nex = previous->nex;
	previous->nex = newNode;
}
*/
/*another linked list
struct node {
	int data;
	struct node *next;
};
*/

int main() {
	//making datastructures to get better at c++ :3 (and also for copy-paste templates)
	
	//dynamic array
	int cap;
	cout << "how many tickets: ";
	cin >> cap;
	
	//int tickets[cap] = {55, 32};//cap = 3, size = 2
	int* tickets = new int[cap];
	
	for(int i = 0; i < cap; i++){
		cout << "enter ticket number: ";
		cin >> tickets[i];
	}
	
	for(int i = 0; i < cap; i++){
		cout << tickets[i] << endl;
	}
	
	delete[] tickets;
	tickets = nullptr;
	*/
	
	/*another linked list
	struct node *one = NULL;
	struct node *two = NULL;
	struct node *three = NULL;
	
	one = new node();
	two = new node();
	three = new node();
	
	one->data = 11;
	two->data = 22;
	three->data = 33;
	
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	while(one != NULL){
		cout << one->data << endl;
		one = one->next;
	}
	*/

	/*linked lists
	node* head = new node();
	node* second = new node();
	node* third = new node(); //allocate mem
	
	head->val = "first";
	second->val = "second";
	third->val = "third"; //insert values into list
	
	head->nex = second;
	second->nex = third;
	third->nex = NULL; //make nodes point to next node
	
	string newVal;
	cout << "enter new node: ";
	cin >> newVal;
	
	insertAfter(second, newVal);
	printList(head);
	*/
	
	/*priority queue (fifo datastruct that serves element with highest priority first
	priority_queue<string> queue;
	queue.push("B");
	queue.push("F");
	queue.push("D");
	queue.push("C");
	queue.push("A");
	
	while(!queue.empty()){
		cout<<queue.top();
		queue.pop();
	}
	*/
	
	/*queue (fifo datascruct)
	queue<string> list;
	
	list.push("chad");//list front
	list.push("sigma");//list inbetween
	list.push("alpha");//list back
	list.pop();
	
	printQue(list);
	*/
	
	/*stacks (lifo datastruct)
	stack<string> games;
	games.push("darksouls"); //stack bottom
	games.push("darksouls 3");//stack inbetween
	games.push("eldenring");//stack top
	
	int size = games.size();
	int i = 0;
	
	//cout << size;
	
	string favgame;
	cout << "enter fav game: ";
	cin >> favgame;
	
	while(i != size){
		if(games.top() != favgame){
		games.pop();
		i++;
		}
		else if(games.top() == favgame){
			cout << games.top() << " found at stack index " << i;
			break;
		}
	}
	*/

	return 0;
}
