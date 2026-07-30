#include <iostream>

class  player {
    public:

    std::string name;
    void roar(){
        std::cout<<name<<"shouts!"<<std::endl;
    }
};
int main()
{
    player p1;
    p1.name="thor";
    p1.roar;
}