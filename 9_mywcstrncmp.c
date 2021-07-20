#include <wchar.h>

typedef unsigned short wchar_t;

wint_t MywcStrncmp(const wchar_t *, const wchar_t *, wint_t);

wint_t main(void)
{
	wint_t wiCh;
	wint_t wiCount;
	wchar_t wszStr1[20];
	wchar_t wszStr2[20];

	wprintf(L"\n\nEnter String1:\t");
	wscanf(L"%s", wszStr1);

	wprintf(L"\n\nEnter String2:\t");
	wscanf(L"%s", wszStr2);

	wprintf(L"\n\nEnter Count:\t");
	wscanf(L"%d",&wiCount);

	wiCh = MywcStrncmp(wszStr1, wszStr2, wiCount);
	
	if(wiCh == 0)
		wprintf(L"\n\nBoth Strings Are Same\n");

	else
		wprintf(L"\n\nBoth Strings Are Diffrent\n");

	return 0;
}

wint_t MywcStrncmp(const wchar_t *pwcStr1, const wchar_t *pwcStr2, wint_t wiCount)
{
	wint_t wiCounter;

	for(wiCounter = 0; (pwcStr1[wiCounter] != '\0' || pwcStr2[wiCounter] != '\0') && wiCounter < wiCount; wiCounter++)
	{
		if(pwcStr1[wiCounter] != pwcStr2[wiCounter])
			return 1;
	}
	return 0;
}