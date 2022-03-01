//header file to define Translator class

#include <iostream>
#include "Model.h"
using namespace std;

class Translator {
public:
  Translator();
  ~Translator();
  string translateWord(string word, string language);
  string translateSentence(string sentence, string language);

private:
  Model m;
};
