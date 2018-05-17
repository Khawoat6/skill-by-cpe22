#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

struct rec
{
	struct rec*othernode;
	int value;
	struct rec*child;
};
struct rec*node;
struct rec*temp;
struct rec*tempcheck;
struct rec*top;
int main()
{
	queue<int> check;
	int intop,ans,root,leaf;
	cin >> intop;
	node = new rec;
	node->value = intop;
	node->child = NULL;
	node->othernode = NULL;
	top = node;
	temp = node;
	tempcheck = node;
	cin >> root >> leaf;
	while(root != -1 && leaf != -1)
	{
		temp = top;
		
		while(temp)
		{
			if(temp->value == root)
			{
				tempcheck = temp; 
				break;
			}
			else
			{
				temp = temp->othernode;
			}
		}
		
		
		if(tempcheck->value != root)
		{
			
			while(tempcheck->othernode!=NULL)
			{
				tempcheck = tempcheck->othernode;	
			}
			
			node = new rec;
			tempcheck->othernode = node;
			node->value = root;
			node->child = NULL;
			node->othernode = NULL;
			tempcheck = node;
		}
		
		if(tempcheck->value == root)
		{
			
			while (tempcheck->child!=NULL)
			{
				tempcheck = tempcheck->child;
			}
			
			node = new rec;
			tempcheck -> child = node;
			node->value = leaf;
			node->child = NULL;
			node->othernode = NULL;
			tempcheck = top;
		}
		
		cin >> root >> leaf;
	}
	
	temp = top;

	int result;
	check.push(top->value);
	while(!check.empty())
	{
		temp = top;
		
		while (temp) {
			if (temp -> value == check.front()) 
			{
				tempcheck = temp -> child;
				
				while (tempcheck) 
				{
					check.push(tempcheck->value);
					result = tempcheck -> value;
					tempcheck = tempcheck -> child;
				}
			}
			
			temp = temp -> othernode;
		}
		check.pop();
	}
	
	cout << result;
}
