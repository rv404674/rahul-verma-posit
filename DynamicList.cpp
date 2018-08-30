#include <iostream>
using namespace std;


class Node
{
string timestamp;
string data; // contains owner id of node, value,owner name,hash of the set.

int nodeNumber;
string nodeId;
string referenceNodeId; //address of the parent node
string childReferenceNodeId;//address of the children
string genesisReferenceNodeId;//address of the genesis node

string HashValue; //hashvalue of the set {all above fields}

public :
void makeNewNode();
void filldata(string owner)
{
	//method to convert all data value in a hash value
	
}

}


class Owner
{
	string ownerName;
	public :
	Owner(string s)
	{
		ownerName = s;
	}
}

// Each Record is associate with a Owner. So use inheritance
class Record : public Owner
{
	list *Node record;
	float data;
	
	public :
	Record(int d)
	{
	 data = d;	
	}
	
	void insertNewNode(Node node)
	{
		if(record.empty())
		{
			node = New Node;
			record.insert(node);
		}
		else 
		record.insert(node);
	}
	
}


int main() {
	// your code goes here
	cout<<"This program creates a list of ordered record"
	
	while(1)
	{
		cout<<"1- add a new record. 2 - add a new node  3 - Exit\n";
		int c;
		cin>>c;
		
		
		switch(c)
		{
			case 1:
			cout<<"Creating a new record - enter the data of record\n";
			int x;
			cin>>x;
			
			Record record = new Record(x;)
			
			case 2:
			cout<<"creating a new node";
			
			
			
			case 3:
			cout<<"exiting the program - BYE :) \n";
			
			
			
		}
	}
	
	return 0;
}
