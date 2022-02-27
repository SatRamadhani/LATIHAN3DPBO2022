#include "header.hh"

/* Constructor. */

// Empty constructor.
PC::PC()
{

}

// Constructor with PC's data.
PC::PC(Processor processor, Disk disk, RAM ram)
{
    this->processor = processor;
    this->disk = disk;
    this->ram = ram;
}

/* Setter and Getter. */

// Set processor attribute.
void PC::setProcessor(Processor processor)
{
    this->processor = processor;
}

// Set disk attribute.
void PC::setDisk(Disk disk)
{
    this->disk = disk;
}

// Set RAM attribute.
void PC::setRAM(RAM ram)
{
    this->ram = ram;
}

// Get processor attribute.
Processor PC::getProcessor()
{
    return processor;
}

// Get disk attribute.
Disk PC::getDisk()
{
    return disk;
}

// Get RAM attribute.
RAM PC::getRAM()
{
    return ram;
}

/* Destructor. */

PC::~PC()
{

}