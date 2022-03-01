//header file to define FileProcessor class

#include <iostream>
#include <fstream>
#include "Translator.h"
using namespace std;

class FileProcessor{
public:
  FileProcessor();
  ~FileProcessor();
  void processFile(string english, string tutnese, string language);
private:
  Translator t;
};
