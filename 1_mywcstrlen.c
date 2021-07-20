#include <wchar.h>
typedef unsigned short (wchar_t);

wchar_t Mywcslen(const wchar_t *);
 
int main(void)
{

	wchar_t wcStr[20];
	
	wprintf(L"Enter the string : ");
	wscanf(L"%s", wcStr);

	wprintf(L"String is %s\n", wcStr);

	wprintf(L"len of string is %d\n", Mywcslen(wcStr));
	return 0;
}

wchar_t Mywcslen(const wchar_t *pwcStr)
{
	wint_t wiCounter;

	for(wiCounter = 0; pwcStr[wiCounter] != '\0'; wiCounter++);

	return wiCounter;
}