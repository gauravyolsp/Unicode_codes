#include <wchar.h>

typedef unsigned short wchar_t;

wchar_t *MywcStrset(wchar_t *, wchar_t);

wint_t main(void)
{
	wchar_t wchChar;
	wchar_t wszStr[20];

	wprintf(L"\n\nEnter The String:\t");
	wscanf(L"%s", wszStr);

	wprintf(L"\n\nEnter The Character To Set:\t");
	wscanf(L"%s", &wchChar);

	MywcStrset(wszStr, wchChar);

	wprintf(L"\n\nNow String Is:\t");
	wprintf(wszStr);

	return 0;
}

wchar_t *MywcStrset(wchar_t *pwcStr, wchar_t wchChar)
{
	wint_t wiCounter;

	for(wiCounter = 0; pwcStr[wiCounter] != '\0'; wiCounter++)
		pwcStr[wiCounter] = wchChar;

	pwcStr[wiCounter] = '\0';

	return pwcStr;
}