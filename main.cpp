#include "EasyCpp.h"
class question {
public:
  void logo(){
    std::system("bash logo.bash");
  }
  bool zero() {
    std::string return_string = input("Please enter (y/n) > ");
    std::string lowc_string = strlower(return_string);

    if (lowc_string == "y" || lowc_string == "yes") {
      return 1;
    }
    if (lowc_string == "n" || lowc_string == "no") {
      return 0;
    }
    std::cout << "Error: (" << return_string << ") is not a (y/n) question"
              << std::endl;
  }
  std::string one() {
    std::string saved_txt = read_file("save.txt");
    std::cout << saved_txt << std::endl;
    std::string return_text = input("Enter any text > ");
    write_file("save.txt", saved_txt + " " + return_text);
    saved_txt = read_file("save.txt");
    return saved_txt;
  }
  void main() {
    while (1) {
      int agument =
          stoi(input("Please enter (1-4) > ")) - 1;
      switch (agument) {
      case 0:
        system("clear");
        std::cout << zero() << std::endl;
        break;
      case 1:
        system("clear");
        std::cout << one() << std::endl;
        break;
      case 2:
        system("clear");
        std::cout <<  read_file("save.txt") << std::endl;
        break;
      case 3:
        system("clear");
        std::cout << "Commands:" << std::endl;
        std::cout << "input(\"String here\")\n" << std::endl;
        std::cout << "read(\"String here but with a file name(.etc is included)\")\n" << std::endl;
        std::cout << "write(\"String here\", \"Add text or a variable with any text type\")\n" << std::endl;
        std::cout << "strlower(\"uppercase string here\")\n" << std::endl;
        std::cout << "strupper(\"lower case string here\")\n" << std::endl;
        std::cout << "Github Project > https://github.com/Bainon234/EasyCpp.git" << std::endl;
        break;
      }
    }
  }
};
int main() {
  question question;
  question.logo();
  std::cout << "This program shows you how easily to use C++/C with this module" << std::endl;
  question.main();
}