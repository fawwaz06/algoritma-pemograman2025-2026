<?php
$a = readline("Masukan angk ke satu: ");
$b = readline("Masukan angka ke dua: ");

if($a > $b)
    echo "lebih terbesar dari: " . $a . "\n";
 elseif($b > $a)
    echo "lebih terbesar dari: " . $b . "\n";
 else 
    echo "Kedua sama besar: " . $a . "\n";

 echo "apakah keduanya sama?";
 echo ($a == $b) ? " Ya\n" : " Tidak\n";
?>