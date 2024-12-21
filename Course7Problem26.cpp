#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter your string \n";
	getline(cin, UserString);
	return UserString;
}

string StringToLower(string& UserString)
{

	for (short i = 0; i < UserString.length(); i++)
	{

		UserString[i] = tolower(UserString[i]);
	}

	return UserString;

}

string stringToUpper(string& UserString)
{

	for (short i = 0; i < UserString.length(); i++)
	{

		UserString[i] = toupper(UserString[i]);
	}
	return UserString;
}

int main()
{

	string UserString = ReadString();

	cout << "\nString to lower:\n";
	UserString = StringToLower(UserString);
	cout << UserString << "\n";

	cout << "\nString to upper\n";
	UserString = stringToUpper(UserString);
	cout << UserString << "\n";


}

