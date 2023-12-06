#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void Voice() 
    {
        cout << "Some animal voice" << endl;
    }
    virtual ~Animal() {}
};

class Cat : public Animal
{
public:
    void Voice() override
    {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal
{
public:
    void Voice() override
    {
        cout << "Woof!" << endl;
    }
};

class Fox : public Animal
{
public:
    void Voice() override
    {
        cout << "Ring-ding-ding-ding-dingeringeding!" << endl;
    }
};

int main()
{
    const int size = 3;
    Animal* Animals[size] = { new Cat, new Dog, new Fox };
    for (int i = 0; i < size; i++)
    {
        Animals[i]->Voice();
        delete Animals[i];
    }

    return 0;
}

