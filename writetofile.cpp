#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
  char filename[FILENAME_MAX + 1];
  char basepath[FILENAME_MAX + 1] = "savedfiles/";
  char path[FILENAME_MAX + 1];

  cout << "File Name: ";
  cin.getline(filename, FILENAME_MAX);
  cout << "Path: " << basepath;
  cin.getline(path, FILENAME_MAX);
  if (strlen(path) > 0) {
    strcat(path, "/");
  }
  strcat(basepath, path);

  strcat(basepath, filename);
  ofstream file_out(basepath);
  if (!file_out) {
    cout << basepath << " not found.\n";
    return -1;
  }  
  cout << basepath << " was opened." << endl;
  file_out << "adding line";
  file_out.close();
  return 0;

}