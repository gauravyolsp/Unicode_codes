#include <wchar.h>

typedef unsigned short wchar_t;

wchar_t *MywcStrnset(wchar_t *, wchar_t, wint_t);

wint_t main()
{
	wint_t wiCount;
	wchar_t wchChar;
	wchar_t wszStr[20];

	wprintf(L"\n\nEnter The String:\t");
	wscanf(L"%s", wszStr);

	wprintf(L"\n\nEnter The Character To Set:\t");
	wscanf(L"%s", &wchChar);
	
	wprintf(L"\n\nEnter The Value Of n:\t");
	wscanf(L"%d", &wiCount);

	MywcStrnset(wszStr, wchChar, wiCount);

	wprintf(L"\n\nNow String Is:\t");
	wprintf(wszStr);
	return 0;
}

wchar_t *MywcStrnset(wchar_t *pwcStr, wchar_t wchChar, wint_t wiCount)
{
	wint_t wiCounter;

	for(wiCounter = 0; wiCounter < wiCount && pwcStr[wiCounter] != '\0'; wiCounter++)
		pwcStr[wiCounter] = wchChar;

	return pwcStr;
}