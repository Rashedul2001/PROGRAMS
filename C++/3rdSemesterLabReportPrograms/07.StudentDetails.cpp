#include <iostream>
#include <vector>
#include <string_view>
#include <string>

class Student
{
private:
    std::string Name;
    std::string Semester;
    int RollNo;
    char Section;
    std::vector<int> Marks;
    int totalMarks;

public:
    Student() = default;
    Student(std::string_view name, std::string_view semester, int rollNo, char section, std::vector<int> marks)
        : Name{name}, Semester{semester}, RollNo{rollNo}, Section{section}, Marks{marks}, totalMarks{0}
    {
        for (auto it : Marks)
        {
            totalMarks += it;
        }
    }
    friend std::ostream &operator<<(std::ostream &print, const Student &ob)
    {
        print << "Name: " << ob.Name << "\nSemester: " << ob.Semester << "\nRoll No: " << ob.RollNo << "\nSection: " << ob.Section << "\nMarks: ";

        for (auto it : ob.Marks)
        {
            print << it << " ";
        }
        print << "\nTotal Marks: " << ob.totalMarks << std::endl;
        return print;
    }
};

int main()
{
    Student student("Nikita", "3rd", 1, 'A', {89, 90, 97, 80, 85});
    std::cout << student << std::endl;

    return 0;
}
