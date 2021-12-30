#if 0
class complex
{
private:
    /* data */
    int real;
    int imag;
public:
    complex(/* args */){}
    ~complex(){}
};

int sum(int A, int B)
{
    return A+B + 1;
}

float sum(float A, float B)
{
    return A+B;
}

char sum(char A, char B)
{
    return A+B;
}

complex sum(complex A, complex B)
{
    return A+B;
}
#endif

template<typename T>
T sum(T t1, T t2)
{
    return t1 + t2;
}

int main()
{
    int A = 10, B = 10;
    sum(A, B);

    float P = 10, Q = 10;
    sum(P, Q);

    sum(10, 20);

    sum(10, 20.0);  // ambigous
    sum<double>(10, 20.0);
}