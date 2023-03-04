#include <iostream>

using namespace std;


class Pchelovek
{
    public:
        Pchelovek()
        {
            nogi = 2;
            ruki = 2;
        }
        int skoknog()
        {
            return nogi;
        }
        void walk();
    protected:
        int nogi;
        int ruki;
    private:
};

class Invalid: public Pchelovek
{
    public:
        Invalid()
        {
            nogi = 1;
            ruki = 2;
        }
    private:
        int kostili = 2;
};

class Elf
{
    public:
        Elf()
        {
            inflife = true;
        }
        void speakElfian()
        {
            cout << "I can speak Elfian (in Elfian)" << endl;
        }
        bool isinflife()
        {
            return inflife;
        }
        bool islongears()
        {
            return longears;
        }
    protected:
        bool longears = true;
        bool inflife;
    private:
};

class Human
{
    public:
        Human()
        {
            diseases = true;
        }
        void love();
        void speakHuman()
        {
            cout << "I can speak Human (in Human)" << endl;
        }
        bool isemotional()
        {
            return emotional;
        }
        bool isnothealthy()
        {
            return diseases;
        }
    protected:
        bool emotional = true;
        bool diseases;
    private:
};

class HalfElf: public Elf, public Human
{
    public:
        HalfElf()
        {
            inflife = false;
            diseases = false;
        }
    protected:

    private:

};

int main()
{
    /* Pchelovek pchelovek = Pchelovek();
    Invalid invalid = Invalid();
    cout << pchelovek.skoknog() << endl;
    cout << invalid.skoknog() << endl; */

    HalfElf Oleg = HalfElf();
    Oleg.speakHuman();
    Oleg.speakElfian();
    cout << Oleg.isinflife() << endl;
    cout << Oleg.isnothealthy() << endl;
    cout << Oleg.islongears() << endl;
    return 0;
}
