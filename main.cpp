#include <iostream>
#include <vector>

void printGrades(const std::vector<double>& grades);
double calculateAverage(const std::vector<double>& grades);
double findMax(const std::vector<double>& grades);

int main() {
    int grade = 0;
    std::vector<double> grades;
    do{
        std::cout << "Enter grade(0-100), -1 to stop: ";
        std::cin >> grade;
        if(grade >= 0 && grade <= 100)
            grades.push_back(grade);
    }while(grade != -1);

    std::cout << "\n--- Summary ---\n";
    printGrades(grades);
    std::cout << "\nAverage: " << calculateAverage(grades) << std::endl;
    std::cout << "Highest Grade: " << findMax(grades) << std::endl;

    return 0;
}

void printGrades(const std::vector<double>& grades) {
    std::cout << "Grades entered: ";
    for(double grade : grades)
        std::cout << grade << " ";
}

double calculateAverage(const std::vector<double>& grades) {
    double sum = 0;
    for(double grade : grades)
        sum += grade;
    return (sum / grades.size());
}

double findMax(const std::vector<double>& grades) {
    double highest = 0;
    for(double grade : grades)
        if(grade > highest)
            highest = grade;
    return highest;
}
