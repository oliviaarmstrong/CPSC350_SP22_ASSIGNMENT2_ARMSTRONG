//header file to define Model class

#include <iostream>
using namespace std;

class Model {
public:
  Model();
  ~Model();
  string translateSingleCharacter(char singleInput);
  string translateDoubleCharacter(char doubleInput);

  int returnIndex(char tutCharacter);
};
