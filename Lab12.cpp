#include <iostream>
#include <array>
#include <fstream>

using namespace std;

void readGrades(array<int, 30>& classGrades, const string& filename);


// program will be about an array of class grades.
int main()
{  
    array <int, 30> classGrades;


    readGrades(classGrades, "Lab12.txt");

    // quickly output the grades
    cout << "Grades" << endl;
    for (int i = 0; i < classGrades.size() < i++)
    {
        cout << "Student " << i + 1 << " | " << classGrades.at(i);
    }

    // DIFFERENT ARRAY METHODS


    // will give first and last element respectively 
    cout << "First: " << classGrades.front() << endl;
    cout << "Last: " << classGrades.back() << endl;

    cout << "Number of Grades: " << classGrades.size() << endl; 


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
    for (size_t t; t < classGrades.size(); t++)
    {
        if (file >> val)
        {
            classGrades.at(t) = val;
        }
    }

    file.close();
}

