//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	map<string, int> words;
//	string text;
//
//	do {
//		cout << "Input text: ";
//		cin >> text;
//
//		if (words.find(text) == words.end()) {
//			//words.insert(pair<string, int>(text, 1));
//			words[text] = 1;
//		}
//		else {
//			words[text]++;
//		}
//	} while (text != "stop");
//	cout << "----------------------------------------------\n";
//
//	words.erase("stop");
//	for (auto item = words.begin(); item != words.end(); item++) {
//		cout << item->first << " " << item->second << endl;
//	}
//}

#include "Diary.h"

int main()
{
	Diary Artem;
	Artem.AddEvent(Date(2008, 6, 26), "My bithday");
	Artem.ShowList();
}