//implemenation file, .cpp

/* translateSingleCharacter : single character as input, returns string translated
in Tutnese

translateDoubleCharacter : single character as input that appears twice in
a row, returns string translated in Tutnese

returnIndex : First character of Tutnese "block" of characters as input, returns integer that represents how much is needed
to index in order to get to next "block" of Tutnese */


#include "Model.h"
#include <cctype>

Model::Model() {}

Model::~Model() {}

int Model::returnIndex(char tutCharacter) {
  switch(tutCharacter) {
    case 'B':
    case 'b':
    case 'D':
    case 'd':
    case 'F':
    case 'f':
    case 'G':
    case 'g':
    case 'J':
    case 'j':
    case 'L':
    case 'l':
    case 'M':
    case 'm':
    case 'N':
    case 'n':
    case 'P':
    case 'p':
    case 'R':
    case 'r':
    case 'S':
    case 's':
    case 'T':
    case 't':
    case 'V':
    case 'v':
    case 'Y':
    case 'y':
    case 'Z':
    case 'z':
    return 2;
    break;
    case 'C':
    case 'c':
    case 'H':
    case 'h':
    case 'K':
    case 'k':
    case 'W':
    case 'w':
    return 3;
    break;
    case 'Q':
    case 'q':
    return 4;
    break;
    case 'X':
    case 'x':
    return 1;
    break;
    default:
      return 0;
      break;

  }
}

string Model::translateSingleCharacter(char singleInput) {
  switch (singleInput) {
    case 'B':
    return "Bub";
    break;

    case 'b':
    return "bub";
    break;

    case 'C':
    return "Cash";
    break;

    case 'c':
    return "cash";
    break;

    case 'D':
    return "Dud";
    break;

    case 'd':
    return "dud";
    break;

    case 'F':
    return "Fuf";
    break;

    case 'f':
    return "fuf";
    break;

    case 'G':
    return "Gug";
    break;

    case 'g':
    return "gug";
    break;

    case 'H':
    return "Hash";
    break;

    case 'h':
    return "hash";
    break;

    case 'J':
    return "Jay";
    break;

    case 'j':
    return "jay";
    break;

    case 'K':
    return "Kuck";
    break;

    case 'k':
    return "kuck";
    break;

    case 'L':
    return "Lul";
    break;

    case 'l':
    return "lul";
    break;

    case 'M':
    return "Mum";
    break;

    case 'm':
    return "mum";
    break;

    case 'N':
    return "Nun";
    break;

    case 'n':
    return "nun";
    break;

    case 'P':
    return "Pub";
    break;

    case 'p':
    return "pub";
    break;

    case 'Q':
    return "Quack";
    break;

    case 'q':
    return "quack";
    break;

    case 'R':
    return "Rug";
    break;

    case 'r':
    return "rug";
    break;

    case 'S':
    return "Sus";
    break;

    case 's':
    return "sus";
    break;

    case 'T':
    return "Tut";
    break;

    case 't':
    return "tut";
    break;

    case 'V':
    return "Vuv";
    break;

    case 'v':
    return "vuv";
    break;

    case 'W':
    return "Wack";
    break;

    case 'w':
    return "wack";
    break;

    case 'X':
    return "Ex";
    break;

    case 'x':
    return "ex";
    break;

    case 'Y':
    return "Yub";
    break;

    case 'y':
    return "yub";
    break;

    case 'Z':
    return "Zub";
    break;

    case 'z':
    return "zub";
    break;

    default:
    string ret = "";
    ret += singleInput;
    return ret;
    break;
  }
}

string Model::translateDoubleCharacter(char doubleInput) {
  string ret = "";
  if (doubleInput == 'A' || doubleInput == 'E' || doubleInput == 'I' || doubleInput == 'O'|| doubleInput == 'U') {
    ret += "Squat";/* code */
  }
  else if (doubleInput == 'a' || doubleInput == 'e' || doubleInput == 'i' || doubleInput == 'o'|| doubleInput == 'u') {
    ret += "squat";/* code */
  }
  else if(isupper(doubleInput)){
    ret += "Squa";
  }
  else {
    ret += "squa";
  }
  ret += translateSingleCharacter(doubleInput);
  return ret;

}
