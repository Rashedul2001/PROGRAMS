#include <iostream>

const int size = 3;

template <class T>
class vector3
{
private:
    T *arr = new T[size];

public:
    vector3()
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }
    vector3(T *arr)
    {
        for (int i = 0; i < size; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    T operator*(vector3 const &other)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += (this->arr[i] * other.arr[i]);
        }
        return sum;
    }
};

int main()
{

    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};

    vector3<int> v1;
    vector3<int> v2;

    v1 = x;
    v2 = y;

    int sum = v1 * v2;
    std::cout << "Sum= " << sum << std::endl;

    return 0;
}