#include<bits/stdc++.h>
using namespace std;

// Do not edit the class below except
// for the breadthFirstSearch method.
// Feel free to add new properties
// and methods to the class.
class Node {
public:
  string name;
  vector<Node *> children;

  Node(string str) { name = str; }

  vector<string> breadthFirstSearch(vector<string> *array) {
    // Write your code here.
		queue<Node*> Q;
		Q.push(this);
		while(!Q.empty()){
			Node* current=Q.front();
			Q.pop();
			array->push_back(current->name);
			for(int i=0;i<current->children.size();i++){
				Q.push(current->children[i]);
			}
			
		}

    return *array;
  }

  Node *addChild(string name) {
    Node *child = new Node(name);
    children.push_back(child);
    return this;
  }
};
int main(){
	// Use BFS Here
	 Node graph("A");
	 vector<string> result;
      graph.addChild("B")->addChild("C")->addChild("D");
      graph.children[0]->addChild("E")->addChild("F");
      graph.children[2]->addChild("G")->addChild("H");
      graph.children[0]->children[1]->addChild("I")->addChild("J");
      graph.children[2]->children[0]->addChild("K");
       result=graph.breadthFirstSearch(&result);
       for(auto x:result){
       	cout<<x<<" , ";
	   }
	return 0;
}

