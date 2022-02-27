/* Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan
Praktikum 03] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek]
untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang
telah dispesifikasikan. Aamiin. */

#include "header.hh"

int main()
{
    int i;
    PC pcList[2];

    // Hardcode input for first PC (composite class constructed in one line for
    // "readability" code.)
    Processor procieA("Intel i5-9300H", 2300000);
    Disk diskA("WD Blue", 1024, 680000);
    RAM ramA(8388608, 825000);
    
    pcList[0].setProcessor(procieA);
    pcList[0].setDisk(diskA);
    pcList[0].setRAM(ramA);

    // Hardcode input for second PC (composite class constructed in one line for
    // "readability" code.)
    Processor procieB("AMD A8", 1725000);
    Disk diskB("Seagate Barracuda", 512, 320000);
    RAM ramB(4194304, 400000);

    pcList[1].setProcessor(procieB);
    pcList[1].setDisk(diskB);
    pcList[1].setRAM(ramB);

    // Output, print every available PC...
    for(i = 0; i < 2; i++)
    {
        cout << "= = = Data PC No. " << (i + 1) << " = = =" << '\n';
        cout << "Prosesor" << '\n';
        cout << "- Nama      : " << pcList[i].getProcessor().getName() << '\n';
        cout << "- Harga     : Rp" << pcList[i].getProcessor().getPrice() << '\n';
        cout << "Penyimpanan" << '\n';
        cout << "- Tipe      : " << pcList[i].getDisk().getType() << '\n';
        cout << "- Kapasitas : " << pcList[i].getDisk().getCapacity() << "MB" << '\n';
        cout << "- Harga     : Rp" << pcList[i].getDisk().getPrice() << '\n';
        cout << "RAM" << '\n';
        cout << "- Kapasitas : " << pcList[i].getRAM().getCapacity() << "MB" << '\n';
        cout << "- Harga     : Rp" << pcList[i].getRAM().getPrice() << "\n\n";
    }

    return 0;
}