#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[48];
	int ID;
	float GPA;
	Student* next;
	Student* previous;
};

Student* CreateStudent(char name[], int ID, float GPA)
{
	Student* newStudent = (Student*)malloc(sizeof(Student));

	if (newStudent != nullptr)
	{
		strcpy_s(newStudent->name, name);
		newStudent->ID = ID;
		newStudent->GPA = GPA;
		newStudent->next = nullptr;
		newStudent->previous = nullptr;


		return newStudent;
	}
	else
	{
		return nullptr;
	}
}

Student* InsertAtTheBeggining(char name[], int ID, float GPA, Student* head)
{
	head->previous = CreateStudent(name, ID, GPA);

	if (head->previous == nullptr)
	{
		return head;
	}

	head->previous->next = head;
	head->previous->previous = nullptr;

	head = head->previous;

	return head;
}

Student* InsertAtTheEnd(char name[], int ID, float GPA, Student* tail)
{
	tail->next = CreateStudent(name, ID, GPA);

	if (tail->next == nullptr)
	{
		return tail;
	}

	tail->next->previous = tail;
	tail->next->next = nullptr;

	tail = tail->next;

	return tail;
}

void InsertByIndex(char name[], int ID, float GPA, Student** head, Student** tail, int position) 
{
	if (position == 0)
	{
		*head = InsertAtTheBeggining(name, ID, GPA, *head);
		return;
	}
	Student* current = *head;

	for (int i = 1; i < position; i++)
	{
		if (current->next != nullptr)
		{
			current = current->next;
		}
		else
		{
			return;
		}
	}
	if (current == *tail)
	{
		*tail = InsertAtTheEnd(name, ID, GPA, *tail);
		return;
	}

	Student* temp = current->next;

	current->next = CreateStudent(name, ID, GPA);

	current->next->previous = current;

	current->next->next = temp;

	temp->previous = current->next;

	return;
}

Student* SearchStudent(Student* head, int ID)
{
	Student* current = head;
	while (current != nullptr)
	{
		if (current->ID = ID)
		{
			break;
		}
	}
	return current;
}

void DeleteStudent(Student** head, Student** tail, Student* target) 
{
	if (target == nullptr)
	{
		return;
	}
	else if (target == *head)
	{
		*head = target->next;
		if (head != nullptr) {
			(*head)->previous = nullptr;
		}
		else
		{
			tail = nullptr;
		}
	}
	else if(target == *tail)
	{
		*tail = target->previous;
		(*tail)->next = nullptr;
	}
	else
	{
		target->previous->next = target->next;
		target->next->previous = target->previous;
	}

	free(target);
}

void PrintListFromStart(Student* head) 
{
	while (head != nullptr)
	{
		printf("Student number %i (%s", head->ID, head->name);
		printf(") has a GPA of %.1f\n", head->GPA);
		head = head->next;
	}
}

void PrintListFromEnd(Student* tail) 
{
	while (tail != nullptr)
	{
		printf("Student number %i (%s", tail->ID, tail->name);
		printf(") has a GPA of %.1f\n", tail->GPA);
		tail = tail->previous;
	}
}

void FreeList(Student* head) 
{
	Student* current = head;
	Student* next = current->next;

	while (current != nullptr)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

int main() {

	Student* head = CreateStudent((char*)"Josue", 1, 4.0f);

	head->next = nullptr;
	head->previous = nullptr;

	Student* tail = head;

	//adding second value on the start

	head = InsertAtTheBeggining((char*)"Juan", 2, 3.5f, head);

	// adding third value on the end

	tail = InsertAtTheEnd((char*)"Zinadine", 3, 3.8f, tail);

	// adding forth and fifth values by index

	InsertByIndex((char*)"Daniel", 4, 2.0f, &head, &tail, 0);
	InsertByIndex((char*)"Karen", 5, 1.3f, &head, &tail, 4);

	// printing the values

	PrintListFromStart(head);
	printf("\n");
	PrintListFromEnd(tail);

	// search for specific node

	Student* forthStudent = SearchStudent(head, 4);

	printf("\n");
	printf("Forth student (%s", forthStudent->name);
	printf(") has a GPA of %.1f\n", forthStudent->GPA);
	printf("\n");

	// deleting specific student

	DeleteStudent(&head, &tail, forthStudent);

	// printing the values

	PrintListFromStart(head);
	printf("\n");
	PrintListFromEnd(tail);

	// free list

	FreeList(head);

	return 0;
}