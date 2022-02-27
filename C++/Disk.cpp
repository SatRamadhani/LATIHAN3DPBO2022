#include "header.hh"

/* Constructor. */

// Empty constructor.
Disk::Disk()
{

}

// Constructor with disk's data.
Disk::Disk(string type, int capacity, int price)
{
    this->type = type;
    this->capacity = capacity;
    this->price = price;
}

/* Setter and Getter. */

// Set type attribute.
void Disk::setType(string type)
{
    this->type = type;
}

// Set capacity attribute.
void Disk::setCapacity(int capacity)
{
    this->capacity = capacity;
}

// Set price attribute.
void Disk::setPrice(int price)
{
    this->price = price;
}

// Get type attribute.
string Disk::getType()
{
    return type;
}

// Get capacity attribute.
int Disk::getCapacity()
{
    return capacity;
}

// Get price attribute.
int Disk::getPrice()
{
    return price;
}

/* Destructor. */

Disk::~Disk()
{
    
}