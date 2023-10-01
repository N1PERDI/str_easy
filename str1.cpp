#include <string>
#include <iostream>
using namespace std;
string itc_hello_str(string name) {
	return "Hello! " + name;
}
long long itc_len(string str) {
	return size(str);
}
void itc_print_copy_str(string str, int number) {
	int s = 0;
	while (s<number)
	{
		cout << str;
		s++;
	}	
}
void itc_first_end_three(string str) {
	if (size(str) > 5)
	{
		cout << str[0] << str[1] << str[2]<< str[size(str)-3] << str[size(str) - 2] << str[size(str) - 1];
	}
	else {
		int s = size(str);
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
	if (s == "" ) { return "-1"; }
	else 
	return s;
}
double itc_percent_lower_uppercase(string str) {
	double soot = 0.0;
	double mal = 0;
	double bol = 0;
	for (int n = 0; n < itc_len(str); n++)
		char ch = str[n];
		if (ch >= 'a' &&  ch <= 'z')
		{
			mal++;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			bol++;
		}
	soot = mal / bol;
	return soot;
}
