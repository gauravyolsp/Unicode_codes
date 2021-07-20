#include <wchar.h>
#define MAX 50

typedef unsigned short (wchar_t);

wchar_t *MywcStrncpy(wchar_t *, const wchar_t *, wint_t);

wint_t main(void)
{
	wint_t wiCount;
	wchar_t wszSrc[MAX];
	wchar_t wszDest[MAX];

	wprintf(L"\n\nEnter Source String:\t");
	wscanf(L"%s", wszSrc);

	wprintf(L"\n\nEnter Value Of n:\t");
	wscanf(L"%d", &wiCount);

	wprintf(L"\n\nSource String Is:\t");
	wprintf(wszSrc);

	MywcStrncpy(wszDest, wszSrc, wiCount);

	wprintf(L"\n\nDestination String Is:\t");
	wprintf(wszDest);	
	return 0;
}
 
wchar_t *MywcStrncpy(wchar_t *pwcDest, const wchar_t *pwcSrc, wint_t wiCount)
{
	wint_t wiCounter;

	for(wiCounter = 0; wiCounter < wiCount; wiCounter++)
	{
		if(pwcSrc[wiCounter] == '\0')
			break;	
		else
			pwcDest[wiCounter] = pwcSrc[wiCounter];
	}
	
	pwcDest[wiCounter] = '\0';

	return pwcDest;
}