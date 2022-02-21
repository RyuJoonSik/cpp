#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//void InputName(char** Name)
//{
//	*Name = (char*)malloc(32);
//	strcpy(*Name, "kim");
//}
//
//int main()
//{
//	char* Name = NULL;
//
//	InputName(&Name);
//	printf("%s", Name);
//	free(Name);
//}

void InputName(char*& Name)
{
	Name = (char*)malloc(32);
	strcpy(Name, "kim");
}

int main()
{
	char* Name = NULL;

	InputName(Name);
	printf("%s", Name);
	free(Name);
}