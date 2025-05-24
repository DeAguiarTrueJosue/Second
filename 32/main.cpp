#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node* next;
};

Node* CreateNode(int data) {
	Node* nextptr = (Node*)malloc(sizeof(Node));
	if (nextptr != nullptr)
	{
		nextptr->data = data;
		nextptr->next = nullptr;
	}
	return nextptr;
}

Node* InsertAtBeggining(Node* head, int data) {
	Node* newHead = CreateNode(data);
	if (newHead == nullptr)
	{
		return head;
	}
	newHead->next = head;
	return newHead;
}

void InsertAtEnd(Node* head, int data) {
	Node* newEnd = CreateNode(data);
	Node* current = head;
	if (newEnd == nullptr)
	{
		return;
	}
	while (current->next != nullptr)
	{
		current = current->next;
	}
	current->next = newEnd;
}

Node* Insert(Node* head, int data, int position)
{
	Node* newValue = CreateNode(data);
	Node* current = head;
	if (newValue == nullptr)
	{
		return head;
	}
	if (position == 0)
	{
		return InsertAtBeggining(head, data);
	}
	for (int i = 1; i < position; i++)
	{
		if (current->next == nullptr && i != position)
		{
			return head;
		}
		else
		{
			current = current->next;
		}
	}
	Node* temp = current->next;
	current->next = newValue;
	newValue->next = temp;
	return head;

}

Node* DeleteBeggining(Node* head) {
	Node* newHead = head->next;
	free(head);
	return newHead;
}

void DeleteEnd(Node* head) {
	Node* current = head->next;
	Node* current2 = head;
	
	while (current->next != nullptr)
	{
		current2 = current;
		current = current->next;
	}
	free(current);
	current2->next = nullptr;
}

Node* Delete(Node* head, int position) {
	Node* current = head;

	if (position == 0)
	{
		return DeleteBeggining(head);
	}
	while (position-1 > 0)
	{
		if (current->next == nullptr)
		{
			return head;
		}
		current = current->next;
		position--;
	}
	Node* deleting = current->next;
	current->next = current->next->next;
	free(deleting);
	return head;
}

void PrintList(Node* head)
{
	Node* current = head;
	Node* next;

	while (current != nullptr)
	{
		next = current->next;
		printf_s("%i ", current->data);
		current = next;
	}
}

void FreeSpace(Node* head)
{
	Node* current = head;
	Node* next;

	while (current != nullptr)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

int main()
{
	Node* head = CreateNode(0);
	Node* current = head;
	for (int i = 1; i < 10; i++)
	{
		current->next = CreateNode(i);
		current = current->next;
	}
	PrintList(head);
	printf("\n");

	head = InsertAtBeggining(head, -1);

	PrintList(head);
	printf("\n");

	InsertAtEnd(head, 10);

	PrintList(head);
	printf("\n");

	Insert(head, 11, 5);

	PrintList(head);
	printf("\n");

	head = DeleteBeggining(head);

	PrintList(head);
	printf("\n");

	DeleteEnd(head);

	PrintList(head);
	printf("\n");

	Delete(head, 4);

	PrintList(head);
	printf("\n");

	FreeSpace(head);

	return 0;
}