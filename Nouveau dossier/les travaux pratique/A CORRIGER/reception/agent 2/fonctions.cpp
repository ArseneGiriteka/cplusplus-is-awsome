#include "Header.h"
#include <string>

using namespace std;

bool caseInsensitiveStringCompare(const string& str1, const string& str2)
{
	if (str1.size() != str2.size())
	{
		return false;
	}

	for (string::const_iterator c1 = str1.begin(), c2 = str2.begin(); c1 != str1.end(); ++c1, ++c2)
	{
		if (tolower(*c1) != tolower(*c2))
		{
			return false;
		}
	}
	return true;
}