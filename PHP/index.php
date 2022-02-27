<?php
    /* Saya [Muhammad Satria Ramadhani - 2005128] mengerjakan evaluasi [Latihan
    Praktikum 03] dalam mata kuliah [Desain dan Pemrograman Berorientasi Objek]
    untuk keberkahan-Nya, maka saya tidak melakukan kecurangan seperti yang
    telah dispesifikasikan. Aamiin. */

    include "Processor.php";
    include "Disk.php";
    include "RAM.php";
    include "PC.php";

    $pcList = array();

    // Hardcode input for first PC (composite class constructed in one line for
    // "readability" code).
    $procieA = new Processor("Intel i5-9300H", 2300000);
    $diskA = new Disk("WD Blue", 1024, 680000);
    $ramA = new RAM(8388608, 825000);
    $pcA = new PC($procieA, $diskA, $ramA);

    // Hardcode input for second PC (composite class constructed in one line for
    // "readability" code).
    $procieB = new Processor("AMD A8", 1725000);
    $diskB = new Disk("Seagate Barracuda", 512, 320000);
    $ramB = new RAM(4194304, 400000);
    $pcB = new PC($procieB, $diskB, $ramB);

    // Merge PC as array.
    array_push($pcList, $pcA);
    array_push($pcList, $pcB);

    // Output, print every available memory...
    for($i = 0; $i < 2; $i++)
    {
        echo "= = = Data PC No. " . ($i + 1) . " = = =" . "<br/>";
        echo "Prosesor" . "<br/>";
        echo "- Nama : " . $pcList[$i]->getProcessor()->getName() . "<br/>";
        echo "- Harga : Rp" . $pcList[$i]->getProcessor()->getPrice() . "<br/>";
        echo "Penyimpanan" . "<br/>";
        echo "- Tipe : " . $pcList[$i]->getDisk()->getType() . "<br/>";
        echo "- Kapasitas : " . $pcList[$i]->getDisk()->getCapacity() . "MB" . "<br/>";
        echo "- Harga : Rp" . $pcList[$i]->getDisk()->getPrice() . "<br/>";
        echo "RAM" . "<br/>";
        echo "- Kapasitas : " . $pcList[$i]->getRAM()->getCapacity() . "MB" . "<br/>";
        echo "- Harga     : Rp" . $pcList[$i]->getRAM()->getPrice() . "<br/><br/>";
    }
?>