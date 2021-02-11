//
//Name: Chloe Tu
//Collaborators: Eden, Cara
//I pledge that I have neither given nor received unauthorized assistance on this assignment.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::stringstream;
using std::vector;
using std::string;

void print(string word){
    cout << word << " ";
}

void show(vector<string>& words, const int & word_len)
{
    //sorts vector of strings from long to short words
    sort(words.begin(),words.end(),
         [](const string &left, const string& right)-> bool {return left.length() > right.length();}
         );
    //iterator points to a word with a smaller length than than word_len
    vector<string>::iterator iterator = find_if(words.begin(), words.end(),
        [word_len](const string &left)-> bool{return left.length() < word_len;}
        );
    //erases all word entries taken by iterator
    words.erase(iterator, words.end());
    //counts how many words are longer than word_len
    long count = count_if(words.begin(), words.end(), [word_len](const string&left)-> bool {return left.length() >= word_len;});
    
    //print out the words longer than word_len
    cout << count << " words found with size greater than/equal to " << word_len << " and they are:" << endl;
    for_each(words.begin(), words.end(), print);
}

int main (){
    vector <string> words;
    string word;
    int word_length ;
    cout << endl << " words = ";
    getline (cin , word);
    stringstream sentence (word);

    while (sentence >> word) {words.push_back(word);}
    cout << endl << " word length = ";
    cin >> word_length ;

    show(words, word_length);

    return 0;
}
