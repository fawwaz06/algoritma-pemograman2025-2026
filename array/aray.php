<?php
$nim = readline("Masukkan NIM: ");

$arr = str_split($nim);
$arr = array_map('intval', $arr);

$total = array_sum($arr);
$maks = max($arr);
$minim = min($arr);
$rata = $total / count($arr);

echo "Array digit       : ";
print_r($arr);

echo "Total digit       : $total\n";
echo "Digit terbesar    : $maks\n";
echo "Digit terkecil    : $minim\n";
echo "Rata-rata digit   : $rata\n";

echo "Reverse array     : ";
print_r(array_reverse($arr));