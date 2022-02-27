/* Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan
Praktikum 03] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek]
untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang
telah dispesifikasikan. Aamiin. */

public class Main
{
    public static void main(String[] args)
    {
        int i;
        PC[] pcList = new PC[2];

        // Hardcode input for first PC (composite class constructed in one line for
        // "readability" code.)
        Processor procieA = new Processor("Intel i5-9300H", 2300000);
        Disk diskA = new Disk("WD Blue", 1024, 680000);
        RAM ramA = new RAM(8388608, 825000);
        pcList[0] = new PC(procieA, diskA, ramA);

        // Hardcode input for second PC (composite class constructed in one line for
        // "readability" code.)
        Processor procieB = new Processor("AMD A8", 1725000);
        Disk diskB = new Disk("Seagate Barracuda", 512, 320000);
        RAM ramB = new RAM(4194304, 400000);
        pcList[1] = new PC(procieB, diskB, ramB);

        // Output, print every available PC...
        for(i = 0; i < 2; i++)
        {
            System.out.println("= = = Data PC No. " + (i + 1) + " = = =");
            System.out.println("Prosesor");
            System.out.println("- Nama      : " + pcList[i].getProcessor().getName());
            System.out.println("- Harga     : Rp" + pcList[i].getProcessor().getPrice());
            System.out.println("Penyimpanan");
            System.out.println("- Tipe      : " + pcList[i].getDisk().getType());
            System.out.println("- Kapasitas : " + pcList[i].getDisk().getCapacity() + "MB");
            System.out.println("- Harga     : Rp" + pcList[i].getDisk().getPrice());
            System.out.println("RAM");
            System.out.println("- Kapasitas : " + pcList[i].getRAM().getCapacity() + "MB");
            System.out.println("- Harga     : Rp" + pcList[i].getRAM().getPrice());
            System.out.println();
        }
    }
}
