#include "header.hh"

/* Constructor. */

// Empty constructor.
Processor::Processor()
{

}

// Constructor with processor's data.
Processor::Processor(string name, int price)
{
    this->name = name;
    this->price = price;
}

/* Setter and Getter. */

// Set name attribute.
void Processor::setName(string name)
{
    this->name = name;
}

// Set price attribute.
void Processor::setPrice(int price)
{
    this->price = price;
}

// Get name attribute.
string Processor::getName()
{
    return name;
}

// Set price attribute.
int Processor::getPrice()
{
    return price;
}

/* Destructor. */

Processor::~Processor()
{
    
}