// Linked List 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int x)
{
	struct Node* temp = (Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;
}

void Print()
{
	struct Node* temp = head;
	cout << "List is: ";
	while (temp != NULL)
	{
		cout << " "<< temp->data;
		temp = temp->next;
	}
	cout << endl;
}
int main()
{
	head = NULL;
	cout << "How many number?\n";

	int i, n, x;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Enter the number \n";
		cin >> x;
		Insert(x);
		Print();
	}

    return 0;
}

