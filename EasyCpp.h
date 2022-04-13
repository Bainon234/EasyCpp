#include <algorithm>
#include <fstream>
#include <iostream>

std::string input(std::string return_agument) {
  std::cout << return_agument;
  std::cin >> return_agument;
  return return_agument;
}
std::string strlower(std::string return_str) {
  transform(return_str.begin(), return_str.end(), return_str.begin(),
            ::tolower);
  return return_str;
}
std::string strupper(std::string return_str) {
  transform(return_str.begin(), return_str.end(), return_str.begin(),
            ::toupper);
  return return_str;
}
std::string read_file(std::string input_from) {
  std::fstream file;
  std::string saved_txt;
  file.open(input_from, std::ios::in);
  if (file.is_open()) {
    std::string txt;
    while (getline(file, txt)) {
      saved_txt = txt;
    }
    file.close();
  }
  return saved_txt;
}
void write_file(std::string input_from, std::string importedtxt) {
  std::fstream file;
  std::string saved_txt;
  file.open(input_from, std::ios::out);
  if (file.is_open()) {
    file << importedtxt;
    file.close ();
  }
}