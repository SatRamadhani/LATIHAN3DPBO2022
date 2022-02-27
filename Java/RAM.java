public class RAM
{
    // RAM attributes.
    private int capacity;
    private int price;
    
    /* Constructor. */

    // Empty constructor.
    public RAM()
    {

    }

    // Constructor with RAM's data.
    public RAM(int capacity, int price)
    {
        this.capacity = capacity;
        this.price = price;
    }

    /* Setter and Getter. */

    // Set capacity attribute.
    public void setCapacity(int capacity)
    {
        this.capacity = capacity;
    }

    // Set price attribute.
    public void setPrice(int price)
    {
        this.price = price;
    }

    // Get capacity attribute.
    public int getCapacity()
    {
        return this.capacity;
    }

    // Get price attribute.
    public int getPrice()
    {
        return this.price;
    }
}
