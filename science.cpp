#include<iostream>


class past_earth_size
{
private:
    double result;
    float c_angle;
    int c_length;
    void solve_earth_size(float angle,int length)
    {
        result = (360 * length) / angle;
        //result = (result / 2) / 3;
    }
public:
    int start()
    {
        std::cout << "중심각의 크기  : ";
        std::cin >> c_angle;
        std::cout << std::endl;
        std::cout << "length : ";
        std::cin >> c_length;
        std::cout << std::endl;
        solve_earth_size(c_angle,c_length);
        std::cout << "지구의 크기  : " << result << std::endl;

        

        return result;
    }
    

};

class now_earth_size
{
private:
    double result;
    double c_length;
    double c_latitude_one;
    double c_latitude_two;
    
    void solve_earth_size(double length,double latitude_one,double latitude_two)
    {
        result = (360 * length) / (latitude_one - latitude_two);

    }
public:
    int start()
    {
        std::cout << "첫번째 위도 값 : ";
        std::cin >> c_latitude_one;
        std::cout << "두번째 위도 값 : ";
        std::cin >> c_latitude_two;
        std::cout<< std::endl;
        std::cout << "두 지점 사이의 거리 : ";
        std::cin >> c_length;
        std::cout << std::endl;
        solve_earth_size(c_length,c_latitude_one,c_latitude_two);

        std::cout << "지구의 크기 : " << result << std::endl;
        return result;
    }

};

int main(void)
{
    int selection;
    std::cout << "선택 : ";
    std::cin >> selection;
    std::cout << std::endl;
    switch(selection)
    {
    case 0 : past_earth_size().start();break;
    case 1 : now_earth_size().start();break;
    default:
        break;
    }
    return 0;
}
