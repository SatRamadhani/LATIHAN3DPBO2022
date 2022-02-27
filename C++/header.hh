// Declare library.
#include <iostream>
#include <string>

using namespace std;

// Class Processor.
class Processor
{
    public:
        // Constructor.
        Processor();
        Processor(string name, int price);

        // Set attributes.
        void setName(string name);
        void setPrice(int price);

        // Get attributes.
        string getName();
        int getPrice();

        // Destructor.
        ~Processor();

    private:
        // Processor attributes.
        string name;
        int price;
};

// Class Disk.
class Disk
{
    public:
        // Constructor.
        Disk();
        Disk(string type, int capacity, int price);

        // Set attributes.
        void setType(string type);
        void setCapacity(int capacity);
        void setPrice(int price);

        // Get attributes.
        string getType();
        int getCapacity();
        int getPrice();

        // Destructor.
        ~Disk();

    private:
        // Disk attributes.
        string type;
        int capacity, price;
};

// Class RAM.
class RAM
{
    public:
        // Constructor.
        RAM();
        RAM(int capacity, int price);

        // Set attributes.
        void setCapacity(int capacity);
        void setPrice(int price);

        // Get attributes.
        int getCapacity();
        int getPrice();

        // Destructor.
        ~RAM();

    private:
        // RAM attributes.
        int capacity, price;
};

// Class PC.
class PC
{
    public:
        // Constructor.
        PC();
        PC(Processor processor, Disk disk, RAM ram);

        // Set attributes.
        void setProcessor(Processor processor);
        void setDisk(Disk disk);
        void setRAM(RAM ram);

        // Get attributes.
        Processor getProcessor();
        Disk getDisk();
        RAM getRAM();

        // Destructor.
        ~PC();

    private:
        // PC attributes (use other class as composite).
        Processor processor;
        Disk disk;
        RAM ram;
};