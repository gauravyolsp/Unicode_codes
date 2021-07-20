#include <wchar.h>

typedef unsigned short wchar_t;

wint_t MywcStrcmp(const wchar_t *, const wchar_t *);

wint_t main(void)
{
	wint_t wiCh;
	wchar_t wszStr1[20];
	wchar_t wszStr2[20];

	wprintf(L"\n\nEnter String1:\t");
	wscanf(L"%s", wszStr1);

	wprintf(L"\n\nEnter String2:\t");
	wscanf(L"%s", wszStr2);

	wiCh = MywcStrcmp(wszStr1, wszStr2);

	if(wiCh == 0)
		wprintf(L"\n\nBoth Strings Are Same\n");

	else
		wprintf(L"\n\nBoth Strings Are Diffrent\n");

	return 0;
}

wint_t MywcStrcmp(const wchar_t *pwcStr1, const wchar_t *pwcStr2)
{
	wint_t wiCounter;	

	for(wiCounter = 0; pwcStr1[wiCounter] != '\0' ||  pwcStr2[wiCounter] != '\0'; wiCounter++)
	{
		if(pwcStr1[wiCounter] != pwcStr2[wiCounter])
			return 1;
	}
}