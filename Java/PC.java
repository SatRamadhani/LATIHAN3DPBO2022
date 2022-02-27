public class PC
{
    // PC attributes.
    private Processor processor;
    private Disk disk;
    private RAM ram;

    /* Constructor. */

    // Empty constructor.
    public PC()
    {

    }

    // Constructor with PC's data.
    public PC(Processor processor, Disk disk, RAM ram)
    {
        this.processor = processor;
        this.disk = disk;
        this.ram = ram;
    }

    /* Setter and Getter. */

    // Set processor attribute.
    public void setProcessor(Processor processor)
    {
        this.processor = processor;
    }

    // Set disk attribute.
    public void setDisk(Disk disk)
    {
        this.disk = disk;
    }

    // Set RAM attribute.
    public void setRAM(RAM ram)
    {
        this.ram = ram;
    }

    // Get processor attribute.
    public Processor getProcessor()
    {
        return this.processor;
    }

    // Get disk attribute.
    public Disk getDisk()
    {
        return this.disk;
    }

    // Get RAM attribute.
    public RAM getRAM()
    {
        return this.ram;
    }
}
