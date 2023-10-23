#include <iostream>
#include <string.h>
using namespace std;
long long itc_len(string str) {
	int s = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		s++;
	}
	return s;
}
string itc_even_place(string str) {
	string s;
	int k = 0;
	int len = itc_len(str);
	for (int n = 0; n < len; n++)
	{
		if (str[n] % 2 == 0)
		{
			s = s + str[n];
		}
	}
	if (s == "") { return "-1"; }
	else
		return s;
}
double itc_percent_lower_uppercase(string str) {
	double soot = 0.0;
	double mal = 0;
	double bol = 0;
	for (int n = 0; n < itc_len(str); n++)
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			mal++;
		}
		else if (str[n] >= 'A' && str[n] <= 'Z')
		{
			bol++;
		}
	soot = mal / bol;
	return soot;
}
string itc_reverse_str(string str) {
	string revstr;
	for (int n = 0; n <= itc_len(str); n++)
	{
		revstr = revstr + str[itc_len(str) - n];

	}
	return revstr;
}
string itc_slice_str(string str, int start, int end) {
	string itog;

	if (end < start) {
		itog = str;
	}
	else
	{
		int len = itc_len(str);
		if (end > len)
		{
			end = len;
		}

		for (int i = start; i <= end; i++)
		{
			itog += str[i];
		}
	}

	return itog;

}
bool itc_equal_reverse(string str) {
	int len = str.length();
	for (int n = 0; n < len / 2; n++) {
		if (str[n] != str[len - n - 1])
		{
			return 0;
		}
	}
	return 1;
}