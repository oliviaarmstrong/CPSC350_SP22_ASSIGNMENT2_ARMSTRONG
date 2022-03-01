//Main method which instantiates the FileProcessor function

#include "FileProcessor.h"

int main(int argc, char **argv) {
  FileProcessor f;
  f.processFile(argv[1],argv[2],argv[3]);
  return 0;

}
