#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }
double max(double a, double b) { return (a > b) ? a : b; }; // this is valid

int main(void)
{
    string first{"MD: Rashedul "}, Last{"Hasan"}, output;
    int a{30}, b{399};
    double da{205.39}, db{3522.97};

    auto lamda_func = []()
    {
        cout << "Hello world!" << endl;
    };

    /* auto lamda_func2 = [](double num1, double num2)
    {
        cout << "Hello world!" << endl;
        cout<<num1+num2<<endl;

    }(343.55, 23.5);//ONE TIEM CALL */
    auto lamda_func2 = [](double num1, double num2)
    {
        cout << "Hello world!" << endl;
        cout << num1 + num2 << endl;
    };
    lamda_func();
    lamda_func2(343.55, 52.0);

    // lamda function with a return type

    auto func = [](/* parameter */) -> int // return type
    { return 0; /* body */ };

    cout << "Done..." << endl;
    /*  capture by value not changes made if we do   */
    auto lamda_func3 = [da, db]()
    {
        cout << "\n da+db= " << da + db << endl;
    };
    /*capture by reference changes will made in the actual variable*/
    auto lamda_func4 = [&da, &db]()
    {
        cout << "\n da+db= " << da + db << endl;
    };
    for (size_t i{}; i < 5; i++)
    {
        lamda_func4();
        da += 1;
    }

    cout << "--------------------------------\n"
         << da << "and " << db << endl;
    cout << "--------------------------------\n";

    int number{10};
    auto test_CbyValue = [number]()
    {
        cout << "inner value: " << number << endl;
    };
    for (size_t i{}; i < 5; i++)
    {
        cout << "Externer Value: " << number << endl;
        test_CbyValue();
        ++number;
    }

    return 0;
}