#include <iostream>
int main() {
  int categories;
  double assignments;
  double percentage;
  double percentPerAssignment;
  double percentGotten;
  double loss;
  double grade;

  do {
    std::cout << "Please enter the number of categories you have " << std::endl;
    std::cin >> categories;
  }while(categories < 0);

  for (int i = 0; i < categories; i++) {
    std::cout << "Please enter the total number of assignments of category "
              << i + 1 << " and the percentage of the category" << std::endl;
    std::cin >> assignments >> percentage;

    percentPerAssignment = percentage / assignments;
    for (int i = 0; i < assignments; i++) {
      do{
        std::cout << "Grade for assignment " << i + 1 << " " << std::endl;
        std::cin >> grade;
      }while (grade < 0);
      grade = grade / 100;
      percentGotten = grade * percentPerAssignment;
      loss += percentPerAssignment - percentGotten;
    }

  }
  std::cout << "Current grade = " << 100 - loss;

  return 0;
}


