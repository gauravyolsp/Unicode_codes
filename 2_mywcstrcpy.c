#include <wchar.h>

typedef unsigned short (wchar_t);

wchar_t *Mywcstrcpy(wchar_t *, wchar_t *);

int main(void)
{
	wchar_t wszSrc[20];
	wchar_t wszDest[20];

	wprintf(L"\n\nEnter Source String:\t");
	wscanf(L"%s", wszSrc);

	wprintf(L"\n\nSource String Is:\t");
	wprintf(wszSrc);

	Mywcstrcpy(wszDest, wszSrc);

	wprintf(L"\n\nDestination String Is:\t");
	wprintf(wszDest);

	return 0;
}

wchar_t *Mywcstrcpy(wchar_t *pwcDest, wchar_t *pwcSource)
{
	wint_t wiCounter;
	
	for(wiCounter = 0; pwcSource[wiCounter] != '\0'; wiCounter++) 
		pwcDest[wiCounter] = pwcSource[wiCounter];

	pwcDest[wiCounter] = '\0';

	return pwcDest;
}