#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n; 
    while (n--) {
        std::string name, studyyear, birthyear;
        int courses;
        std::cin >> name >> studyyear >> birthyear >> courses;

        int studyStartYear = std::stoi(studyyear.substr(0, 4)); 
        int birthYear = std::stoi(birthyear.substr(0, 4)); 

        if (studyStartYear >= 2010 || birthYear >= 1991) {
            std::cout << name << " eligible" << std::endl;
        } else if (courses >= 41) {
            std::cout << name << " ineligible" << std::endl;
        } else {
            std::cout << name << " coach petitions" << std::endl;
        }
    }
    return 0;
}
