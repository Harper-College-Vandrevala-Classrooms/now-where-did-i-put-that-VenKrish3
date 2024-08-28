#include <iostream>
#include <string>

using namespace std;

int search(string,char);
int search(string,string);

int main()
{
	cout << "the letter t is at " << search("the quick brown fox",'t') << endl;
	cout << "the word brown is at " << search("the quick brown fox","brown") << endl;
}

int search(string sentence, char x)
{
	for(int i = 0; i < sentence.length(); i++)
	{
		if(sentence[i] == x)
		{
			return i;
		}
	}
	return -1;
};

int search(string sentence, string y)
{
	int total = y.length()-1;
	for(int i = sentence.length()-1; i >= 0; i--)
	{
		if(sentence[i] == y[total])
		{
			if(total == 0 && sentence[i] == y[0])
				return i;
			total--;
		}
	}
	return -1;	
};
