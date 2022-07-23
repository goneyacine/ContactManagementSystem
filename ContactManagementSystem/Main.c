#include <stdio.h>
#include <string.h>

void CreateContact();
void EditContact();
void Search();
void DeleteContact();
void ShowAll();

int main()
{
	printf("hello world \n");
	printf("    [1] CREATE_CONTACT    [2] EDIT_CONTACT    [3] SEARCH    [4] DELETE_CONTACT    [5] SHOW_ALL \n");
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

void CreateContact()
{

	//getting the contact name from the user

	printf("ENTER CONTACT NAME :\n");
	char* name[128];
	fgets(name, sizeof(name), stdin);
	if (strlen(name) >= sizeof(name) - 1)
	{
		printf("ERROR : INPUT TOO LONG / MAX CHARACTER COUNT IS 128");
		return;
	}


	//getting the contact phone number from the user

	printf("ENTER CONTACT PHONE NUMBER :\n");
	char phoneNumber[128];
	fgets(phoneNumber, sizeof(phoneNumber), stdin);

	if (strlen(phoneNumber) >= sizeof(phoneNumber) - 1)
	{
		printf("ERROR : INPUT TOO LONG / MAX CHARACTER COUNT IS 128");
		return;
	}

	//getting the contact email address from the user

	printf("ENTER CONTACT EMAIL :\n");
	char* email[128];
	fgets(email, sizeof(email), stdin);
	if (strlen(email) >= sizeof(email) - 1)
	{
		printf("ERROR : INPUT TOO LONG / MAX CHARACTER COUNT IS 128");
		return;
	}

	//saving the data into the disk
	FILE* filePtr;

	filePtr = fopen("data.dt", "w");

	fputs("*** \n", filePtr);
	fputs(name, filePtr);
	fputs("\n", filePtr);
	fputs(phoneNumber, filePtr);
	fputs("\n", filePtr);
	fputs(email, filePtr);
	fputs("\n", filePtr);
	fputs("***\n", filePtr);


	fclose(filePtr);


}
void EditContact()
{

}
void Search()
{

}
void DeleteContact()
{

}
void ShowAll()
{

}