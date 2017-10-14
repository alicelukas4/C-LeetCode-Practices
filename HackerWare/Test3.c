// Livanova Interview Q3 HackerRank 
// Remove a key from linkedlist
//
//C:\Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>cl Test3.c 
//C:\Users\Alice\Desktop\ProgrammingFiles\HackerWare\HackerWare>Test3
//6 //val[0] in
//1 //val[1] in
//2 //val[2] in
//3 //val[3] in
//4 //val[4] in
//6 //val[5] in
//0
//2 //remove key 2
//6 //val[0] out
//1 //val[1] out
//3 //val[2] out
//4 //val[3] out
//6 //val[4] out

//
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct item
{
	int key;
	struct item *next;
};

static struct item *head;


/*
* Complete the function below.
*/
struct item *remove_from_list(int key) {
	struct item *tmp;
	struct item *prev;
	//traverse the linked list
	for (tmp = head; tmp != NULL; tmp = tmp->next)
	{

		//compare key
		if (tmp->key == key)
		{
			//first node
			if (tmp == head)
			{
				head = tmp->next;
			}
			//middle node 
			else {
				prev->next = tmp->next;
			}
			free(tmp);
			return 1;
		}
		prev = tmp;
	}
	return 0;
}

static void insert(int key)
{
	struct item *n;
	struct item *p;
	struct item *q;

	n = malloc(sizeof(struct item));
	if (!n)
	{
		printf("Internal test failure!!\n");
		exit(1);
	}

	n->key = key;
	n->next = 0;
	for (q = 0, p = head; p; q = p, p = p->next);
	if (!q)
	{
		/*
		insert at head of list
		*/
		head = n;
		return;
	}
	q->next = n;
}

static void dumpit()
{
	struct item *p;

	if (!head)
	{
		printf("empty list\n");
		return;
	}

	for (p = head; p; p = p->next)
	{
		printf("%d\n", p->key);
	}
}


int main(int argc, char *argv[])
{

	char in[100];
	int val;

	while (fgets(in, sizeof(in), stdin))
	{
		val = strtol(in, 0, 0);
		if (val == 0)
		{
			break;
		}
		insert(val);
	}

	if (!fgets(in, sizeof(in), stdin))
	{
		printf("Input failure!!\n");
		exit(1);
	}
	val = strtol(in, 0, 0);

	remove_from_list(val);


	dumpit();

	return 0;
}