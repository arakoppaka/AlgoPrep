#include <iostream>
#include <vector>
#include <string>

using namespace std;

string runLengthEncoding(string str);
string runLengthEncoding(string str) {
	// Write your code here.

	vector<char> encodedStringChars;
	int currLength = 1;

	for (int i = 1; i < str.size(); i++) {
		char currChar = str[i];
		char prevChar = str[i - 1];
		if (currChar != prevChar || currLength == 9)
		{
			encodedStringChars.push_back(to_string(currLength)[0]);
			encodedStringChars.push_back(prevChar);
			currLength = 0;
		}
		currLength++;
	}

	//Last run
	encodedStringChars.push_back(to_string(currLength)[0]);
	encodedStringChars.push_back(str[str.size() - 1]);

	string finalEncodedString(encodedStringChars.begin(), encodedStringChars.end());

	return finalEncodedString;
}

int main()
{
	string myStr = "AAAAAAAAAAAAABBCCCCDDD";
	cout << "Result:"<<runLengthEncoding(myStr);
	getchar();
	return 0;

}
