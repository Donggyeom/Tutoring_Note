#include <stdio.h>

typedef struct linked_list {
	int data;
	struct linked_list* next;
} linked_list;

int main()
{
	linked_list* head = NULL;
	linked_list* point = NULL;
	
	linked_list list1;
	linked_list list2;
	linked_list list3;
	linked_list list4;

	list1.data = 2;
	list2.data = 3;
	list3.data = 4;
	list4.data = 5;

	head = &list1;
	list1.next = &list2;
	list2.next = &list3;
	list3.next = &list4;
	list4.next = NULL;
	
	point = head;
	while (point != NULL) {
		printf("%d ", point->data);
		point = point->next;
	}
}