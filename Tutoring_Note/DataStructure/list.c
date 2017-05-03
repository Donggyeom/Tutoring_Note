#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
	int data;
	struct linked_list* next;
} linked_list;

int main()
{
	int i;
	linked_list* head = NULL;
	linked_list* point = NULL;


	head = (linked_list*)malloc(sizeof(linked_list));
	point = head;

	//������ 1�������� 10�� ����Ʈ�� �����ϰ� ��� for�� ���
	for (i = 1; i < 11; i++)
	{
		point->data = i;
		if (i < 10) {
			point->next = (linked_list*)malloc(sizeof(linked_list));
			point = point->next;
		}
		else {
			point->next = NULL;
		}

	}
	point = head;
	while (point != NULL)
	{
		printf("%d ", point->data);
		point = point->next;
	}

}