#include <iostream>
#include <array>
#include <fstream>

using namespace std;

void readGrades(array<int, 30>& classGrades, const string& filename);


// program will be about an array of class grades.
int main()
{

}

//
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

