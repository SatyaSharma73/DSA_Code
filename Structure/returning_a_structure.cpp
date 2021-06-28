#include <iostream>
#include <math.h>

using namespace std;

struct data
{
    float radius;
    double angle;
};

struct result
{
    float area;
    double sine, cosine, tangent;
};

result compute(data input)
{
    result answer;
    answer.area = pow(input.radius, 2);
    answer.sine = sin(input.angle);
    answer.cosine = cos(input.angle);
    answer.tangent = tan(input.angle);

    return answer;
}

int main()
{
    data input;
    result output;

    input.radius = 3;
    input.angle = 0.8;
    output = compute(input);
    cout << "The area is : " << output.area << endl;
    cout << "The sine is : " << output.sine << endl;
    cout << "The cosine is : " << output.cosine << endl;
    cout << "The tangent is : " << output.tangent << endl;

    return 0;
}