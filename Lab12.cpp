#include <iostream>
#include <array>
#include <fstream>
#include <algorithm>

using namespace std;

void readGrades(array<int, 30>& classGrades, const string& filename);


// program will be about an array of class grades.
int main()
{  
    array <int, 30> classGrades;


    readGrades(classGrades, "Lab12.txt");

    // quickly output the grades
    cout << "Grades" << endl;
    for (int i = 0; i < classGrades.size(); i++)
    {
        cout << "Student " << i + 1 << " | " << classGrades.at(i);
    }

    // DIFFERENT ARRAY METHODS
    
    cout << endl;

    // will give first and last element respectively 
    cout << "First: " << classGrades.front() << endl;
    cout << "Last: " << classGrades.back() << endl;

    cout << "Number of Grades: " << classGrades.size() << endl; 


    // will check if array is empty or not
    if (classGrades.empty())
        cout << "Class is Empty" << endl;
    else
        cout << "Class is not Empty" << endl;


    // will sort the array
    sort(classGrades.begin(), classGrades.end());
    for (int i = 0; i < classGrades.size(); i++)
        cout << "| " << classGrades.at(i) << " "; 
    

    cout << endl;

    
    // create empty array and fill it with 100s
    array<int, 30> freshGradeBook;
    freshGradeBook.fill(100);
    for (int i = 0; i < freshGradeBook.size(); i++)
        cout << "| " << freshGradeBook.at(i) << " "; 

    
}

// will read the file and store it into an array: classGrades
// will manipulate array in main fdunction
void readGrades(array<int, 30>& classGrades, const string& filename)
{
    ifstream file(filename);
    if (!file)
    {
        cout << "Error opening file" << endl;
        return;
    }

    int val;
    for (size_t t = 0; t < classGrades.size(); t++)
    {
        if (file >> val)
        {
            classGrades.at(t) = val;
        }
        else
        {
            classGrades.at(t) = 0;
        }
    }

    file.close();
}

