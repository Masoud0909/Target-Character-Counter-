/*Write a program that asks the user to enter a sentence, then uses a for loop to count the number of occurrences of “x” in the sentence, and output that number.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	string sentence;
	int size;
	int count = 0;
	string target;
	string substring;

	cout << "Please enter your preferred sentence: " << endl;
	getline (cin, sentence);
	size = sentence.length();

	cout << "What Character are you looking for: " << endl;
	cin >> target;

	for (int i = 0; i < size; i++) {
		substring = sentence.substr(i, 1);
		if (substring == target)
			count++;
	}
	cout << "\n" << "the character " << target << "  has appeared in your sentence " << count << " times.";

	return 0;
}