#include <iostream>
#include <stack>
#include <queue>
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

int main() {
	//making datastructures to get better at c++ :3
	//linked lists tomorrow!!!
	
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
