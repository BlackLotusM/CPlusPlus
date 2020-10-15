#include "ReverseText.h"
void ReverseText::reverse_String(std::string& greet, int n, int i)
{
	if (n <= i) { return; }

	std::swap(greet[i], greet[n]);
	reverse_String(greet, n - 1, i + 1);
}
