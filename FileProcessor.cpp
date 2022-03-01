//implemenation file, .cpp

/* processFile : Takes a string representing the input file
as well as a string representing the output file which will contain the text
translated in Tutnese or English */

#include "FileProcessor.h"

FileProcessor::FileProcessor() {}

FileProcessor::~FileProcessor() {}

void FileProcessor::processFile(string english, string tutnese, string language) {
  ifstream inFS;
  ofstream ofFS;
  string line;

  inFS.open(english);
  ofFS.open(tutnese);
  while(getline(inFS,line)) {
    ofFS << t.translateSentence(line, language) << endl;
  }
  inFS.close();
  ofFS.close();
}
