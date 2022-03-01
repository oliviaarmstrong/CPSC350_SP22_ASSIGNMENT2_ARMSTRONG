//implemenation file, .cpp

/* translateEnglishWord : single string representing single word as
input as well as a string representing what type of translation the user would like to perform,
returns the string word translated

translateSentence : single string representing
sentence as input as well as a a string representing what type
of translation the user would like to perform, returns the string sentence translated in chosen language */

#include "Translator.h"

Translator::Translator() {}

Translator::~Translator() {}

string Translator::translateWord(string word, string language) {
  string ret = "";
  char c;
  char d;
  if(language[0] == 'E') { //if user would like to perform an English to Tutnese translation
  for (int i = 0; i < word.size(); ++i) {
    c = (word[i]);
    d = (word[i+1]);
    if (tolower(c) == tolower(d)) {
      ret += m.translateDoubleCharacter(c);
      ++i;
    }
    else {
      ret += m.translateSingleCharacter(c);
    }
  }
}
else if(language[0]=='T') { //if user would like to perform a Tutnese to English Translation
  for(int i= 0; i<word.size(); ++i) {
    if (word[i+1] != 'q' && 'Q') { //if "block" of Tutnese starts with consonant, return that consonant
      ret += word[i];
      i = i + m.returnIndex(word[i]); //iterate through string using returnIndex function
    }
    else {
      if (word[i+4] == 't') { //if "block" of Tutnese is "squato" return double vowels
        ret += word[i+5];
        ret += word[i+5];
        i = i+5; //iterate through string to next "block"
      }
    else { //if "block" of Tutnese is "squa" return double letters
      ret += word[i+4];
      ret += word[i+4];
      i = i+4; //iterate through string to next "block"
      }
    }
  }
}
return ret;
}


string Translator::translateSentence(string sentence, string language) {
  string currentWord;
  string finalSentence;
  for (int i = 0; i < sentence.size(); ++i) {
    if (sentence[i] == '.' || '?' || '!') {
      currentWord += sentence[i];
    }
    else if (sentence[i] == ' ') {
      finalSentence += translateWord(currentWord, language);
      currentWord = "";
    }
    else {
      currentWord += sentence[i];
    }
  }
  finalSentence += translateWord(currentWord, language);
  return finalSentence;
}
