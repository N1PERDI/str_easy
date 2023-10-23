#include <string.h>
#include <iostream>
using namespace std;
string itc_hello_str(string name) {
	return "Hello! " + name;
}
long long itc_len(string str) {
	int s = 0;
	for (int i=0;str[i]!='\0'; i++)
	{
		s++;
	}
	return s;
}
void itc_print_copy_str(string str, int number) {
	int s = 0;
	while (s < number)
	{
		cout << str;
		s++;
	}
}
void itc_first_end_three(string str) {
	if (itc_len(str) > 5)
	{
		cout << str[0] << str[1] << str[2] << str[itc_len(str) - 3] << str[itc_len(str) - 2] << str[itc_len(str) - 1];
	}
	else {
		int s = itc_len(str);
		while (s > 0)
		{
			cout << str[0];
			s--;
		}

	}
}
int itc_count_char_in_str(char ch, string str) {
	int k = 0;
	int size = itc_len(str);
	for (int n = 0; n < size; n++)
	{
		if (ch == str[n])
			k++;
	}
	return k++;
}
string itc_cmp_str(string str1, string str2, int num) {
	string str3;
	int k = itc_len(str1);

	for (int i = 0; i < itc_len(str1); i++)  {
		if (i == num)
		{
			for (int n = 0; n < itc_len(str2); n++)
			{
				str3 += str2[n];
			}
		}
		else {
			str3 += str1[i];
		}
	}
	string itog;
	int start = 0;
	int end = k - 1;
	if (end < start) {
		itog = str3;
	}
	else
	{
		int len = itc_len(str3);
		if (end > len)
		{
			end = len;
		}

		for (int i = start; i <= end; i++)
		{
			itog += str3[i];
		}
	}

	return itog;
}

int itc_find_str(string str1, string str2) 
{
	return str1.find(str2);
}


int itc_max_char_on_end(string str) {
	int itog = 0;
	int itog2 = 0;
	int k = 0;
	for (int i = 0; i <= itc_len(str); i++)
	{
		if (str[i] >= '1' && str[i] <= '9') 
		{
			itog2++;
			k++;
		}
		else
		{
			if (itog2 > itog && k>itog) 
			{
				itog = itog2;
			}

			itog2 = 0;
			k = 0;
		}
	}
	if (itog2 > itog && k>itog) 
	{
		itog = itog2;
	}

	return itog;
}