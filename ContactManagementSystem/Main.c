#include <stdio.h>


void CreateContact();
void EditContact();
void Search();
void DeleteContact();
void ShowAll();

int main()
{
	printf("hello world \n");
	printf("    [1] CREATE_CONTACT    [2] EDIT_CONTACT    [3] SEARCH    [4] DELETE_CONTACT    [5] SHOW_ALL");
	int taskInput;
	scanf("%d", &taskInput);
	switch (taskInput)
	{
	case 1:
		CreateContact();
		break;
	case 2:
		EditContact();
		break;

	case 3:
		Search();
		break;

	case 4:
		DeleteContact();
		break;
	case 5:
		ShowAll();
		break;
	}
	return 0;
}