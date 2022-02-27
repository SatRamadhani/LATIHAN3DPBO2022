public class Disk
{
    // Disk attributes.
    private String type;
    private int capacity;
    private int price;

    /* Constructor. */

    // Empty constructor.
    public Disk()
    {

    }

    // Constructor with disk's data.
    public Disk(String type, int capacity, int price)
    {
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }

    /* Setter and Getter. */

    // Set type attribute.
    public void setType(String type)
    {
        this.type = type;
    }

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

    // Get type attribute.
    public String getType()
    {
        return this.type;
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
