#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

ifstream input_file;
input_file.open("words.txt");
string each_word, word_input;
int occurrences = 0, i, flag;
char each_char;

cin >> word_input;

while(input_file >> each_word){
     flag = 1;

for(i < 0; i < word_input.length(); i++){



    if(!(tolower(each_word[i]) == tolower(word_input[i]))){
      flag = 0;
      break;
  }
}
    if(flag == 1)
       occurrences++;
}

cout << occurrences << endl;
return 0;

}

