// I totally understand how it works

#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include <functional>

class Doctor;
class Patient
{

private:
    std::string mName{};
    friend std::ostream &operator<<(std::ostream &print, const Patient &patient);

public:
    Patient(std::string_view name) : mName{name} {}
    std::vector<std::reference_wrapper<const Doctor>> mDoctorList{};
    void addDoctor(const Doctor &doctor);
    const std::string &getName() const { return mName; }
};
class Doctor
{
private:
    std::string mName{};
    std::vector<std::reference_wrapper<const Patient>> mPatientList{};
    friend std::ostream &operator<<(std::ostream &print, const Doctor &doctor);

public:
    Doctor(std::string_view name) : mName{name} {}
    void addPatient(Patient &patient)
    {
        mPatientList.push_back(patient);
        patient.addDoctor(*this);
    }
    const std::string &getName() const { return mName; }
};
void Patient::addDoctor(const Doctor &doctor)
{
    mDoctorList.push_back(doctor);
}
std::ostream &operator<<(std::ostream &print, const Patient &patient)
{
    if (patient.mDoctorList.empty())
    {
        print << patient.getName() << " has no Doctors right now.";
        return print;
    }
    print << patient.getName() << " is seeing Doctors:";
    for (auto name : patient.mDoctorList)
    {
        std::cout << name.get().getName() << ' ';
    }
    return print;
}

std::ostream &operator<<(std::ostream &print, const Doctor &doctor)
{
    if (doctor.mPatientList.empty())
    {
        std::cout << doctor.getName() << " is no Patients right now.";
        return print;
    }
    std::cout << doctor.getName() << " is seeing Patients:";
    for (auto &doc : doctor.mPatientList)
    {
        std::cout << " " << doc.get().getName();
    }
    return print;
}

int main()
{

    Patient dave{"Dave"}, frank{"Frank"}, betsy{"Betsy"};
    Doctor james{"James"}, scott{"Scott"};

    james.addPatient(dave);
    scott.addPatient(dave);
    scott.addPatient(betsy);

    std::cout << james << std::endl;
    std::cout << scott << std::endl;
    std::cout << dave << std::endl;
    std::cout << frank << std::endl;
    std::cout << betsy << std::endl;

    return 0;
}
