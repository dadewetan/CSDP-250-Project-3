//Written By: Daniel Adewetan
//Date: 10/30/2022

#include<iostream>
#include<queue>
#include<string>
#include"QueueData.h"
using namespace std;

int main()
{
	Queue<char>input;

	char* att = new char[110];
	
	char* btt = new char[110];

	int i = 0;

	cout << "Please enter a sentence: " << endl;

	cin.getline(att, sizeof(att));

	for (int i = 0; i < sizeof(att); i++)
	{
		input.enqueue(att[i]);

		if (isupper(att[i]))
		{
			att[i] = tolower(att[i]);
		}

		else
		{
			att[i] = toupper(att[i]);
		}

		btt[i] = att[i];

		att++;
	}

	for (int i = 0; i < sizeof(att); i++)
	{
		input.enqueue(btt[i]);
		btt++;
	}
    
	delete[] att;
	delete[] btt;
	
	input.displayQueue();

	while (!input.isEmpty())
	{
		input.dequeue();
	}

}


