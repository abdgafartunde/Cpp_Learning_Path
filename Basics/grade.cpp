#include <iostream>
#include <vector>
#include <string>

int main(){
    std::cout << "This project uses C++17 standard." << std::endl;

    std::cout << "Enter your grade (0-100): ";
    int grade;
    std::cin >> grade;

    const std::vector<std::string> grades = {"F", "D", "C", "B", "A"};
    
    std::string letterGrade;
    if (grade < 60 && grade >= 0){
        letterGrade = grades[0];
    } 
    else {
        if (grade < 100){
            letterGrade = grades[(grade - 50) / 10];

            if (grade  % 10 >= 3){
                if (grade % 10 >= 7){
                    letterGrade += "+";
                }
            } 
            else {
                letterGrade += "-";
            }
        }
        else if (grade == 100){
            letterGrade = grades[4];
            letterGrade += "++";
        }
        else {
            letterGrade = "Invalid grade";
        }
        
    }
    std::cout << "Your letter grade is: " << letterGrade << std::endl;

    return 0;
}