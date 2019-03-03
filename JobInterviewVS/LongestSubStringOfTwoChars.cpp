#include <string.h>
#include <stdlib.h>

char * LongestSubStringOfTwoChars(const char * str)
{
	char prevChar = '\0';
	char first = '\0';
	char second = '\0';
	unsigned int curSubStrLength = 1;
	unsigned int maxSubStrLength = 1;

	const char * nextSubStrBegin = str;
	const char * curSubStrBegin = nextSubStrBegin;
	const char * curSubStrEnd = curSubStrBegin;

	const char * maxSubStr = curSubStrBegin;

	while (*curSubStrEnd)
	{
		if (!first)
		{
			first = *curSubStrEnd;
		}
		prevChar = *curSubStrEnd;
		curSubStrLength++;
		curSubStrEnd++;
		if (!second && *curSubStrEnd != first)
		{
			second = *curSubStrEnd;
		}

		if (*curSubStrEnd != prevChar && (*curSubStrEnd == first || *curSubStrEnd == second))
		{
			nextSubStrBegin = curSubStrEnd;
		}
		if ((*curSubStrEnd != first && *curSubStrEnd != second) || !*curSubStrEnd)
		{
			if (curSubStrLength > maxSubStrLength)
			{
				maxSubStr = curSubStrBegin;
				maxSubStrLength = curSubStrLength;
			}
			curSubStrBegin = nextSubStrBegin;
			curSubStrEnd = curSubStrBegin;
			curSubStrLength = 1;
			first = '\0';
			second = '\0';
		}
	}
	char * resStr = (char*)malloc((maxSubStrLength) * sizeof(char));

	strncpy(resStr, maxSubStr, maxSubStrLength);
	*(resStr + maxSubStrLength - 1) = '\0';

	return resStr;
}

int main(void)
{
	return 0;
}