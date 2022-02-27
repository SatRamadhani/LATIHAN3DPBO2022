# Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan
# Praktikum 03] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek]
# untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang
# telah dispesifikasikan. Aamiin.

# Import class file.
from Processor import Processor
from Disk import Disk
from RAM import RAM
from PC import PC

# Declare array of object.
pcList = []

# Hardcode input for first PC (composite class constructed in one line
# for "readability" code.)
procieA = Processor("Intel i5-9300H", 2300000)
diskA = Disk("WD Blue", 1024, 680000)
ramA = RAM(8388608, 825000)
pcList.append(PC(procieA, diskA, ramA))

# Hardcode input for second PC (composite class constructed in one line
# for "readability" code.)
procieB = Processor("AMD A8", 1725000)
diskB = Disk("Seagate Barracuda", 512, 320000)
ramB = RAM(4194304, 400000)
pcList.append(PC(procieB, diskB, ramB))

# Output, print every available PC...
for i in range(2):
    print("= = = Data PC No. ", (i + 1), " = = =")
    print("Prosesor")
    print("- Nama      :", pcList[i].getProcessor().getName())
    print("- Harga     : Rp", pcList[i].getProcessor().getPrice())
    print("Penyimpanan")
    print("- Tipe      :", pcList[i].getDisk().getType())
    print("- Kapasitas :", pcList[i].getDisk().getCapacity(), "MB")
    print("- Harga     : Rp", pcList[i].getDisk().getPrice())
    print("RAM");
    print("- Kapasitas :", pcList[i].getRAM().getCapacity(), "MB")
    print("- Harga     : Rp", pcList[i].getRAM().getPrice())
    print()