#include <wchar.h>

typedef unsigned short wchar_t;

wchar_t *MywcStrncat(wchar_t *, const wchar_t *, wint_t);

wint_t main(void)
{
	wint_t wiCount;
	wchar_t wszSource[20];
	wchar_t wszDestination[40];

	wprintf(L"\n\nEnter Destination String:\t");
	wscanf(L"%s", wszDestination);

	wprintf(L"\n\nEnter Source String:\t");
	wscanf(L"%s", wszSource);
	
	wprintf(L"\n\nEnter the count:\t");
	wscanf(L"%d", &wiCount);

	MywcStrncat(wszDestination, wszSource, wiCount);

	wprintf(L"\n\nConcatenated String Is:\t");
	wprintf(wszDestination);

	return 0;
}

wchar_t *MywcStrncat(wchar_t *pwcDest, const wchar_t *pwcSrc, wint_t wiCount)
{
	wint_t wiCounter1;
	wint_t wiCounter2;

	for(wiCounter1 = 0; pwcDest[wiCounter1] != '\0'; wiCounter1++);

	if(pwcDest[wiCounter1] == '\0')
	{
		for(wiCounter2 = 0; pwcSrc[wiCounter2] != '\0' && wiCounter2 < wiCount; wiCounter2++, wiCounter1++)	
			pwcDest[wiCounter1] = pwcSrc[wiCounter2];
	}
	pwcDest[wiCounter1] = '\0';

	return pwcDest;
}