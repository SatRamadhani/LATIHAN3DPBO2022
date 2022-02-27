public class Processor
{
    // Processor attributes.
    private String name;
    private int price;

    /* Constructor. */
    
    // Empty constructor.
    public Processor()
    {

    }

    // Constructor with processor's data.
    public Processor(String name, int price)
    {
        this.name = name;
        this.price = price;
    }

    /* Setter and Getter. */

    // Set name attribute.
    public void setName(String name)
    {
        this.name = name;
    }

    // Set price attribute.
    public void setPrice(int price)
    {
        this.price = price;
    }

    // Get name attribute.
    public String getName()
    {
        return this.name;
    }

    // Set price attribute.
    public int getPrice()
    {
        return this.price;
    }
}