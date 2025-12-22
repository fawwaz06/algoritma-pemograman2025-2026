<?php // membuat fungsi 
function perkenalan($nama, $salam="Assalamualaikum"){ 
  echo $salam.", ";   echo "Perkenalkan, nama saya ".$nama."<br/>"; 
  echo "Senang berkenalan dengan anda<br/>"; 
} 
 
// memanggil fungsi yang sudah dibuat 
perkenalan("muhammad fawwaz azmi", "Hi"); 
 
echo "<hr>"; 
 
$saya = "fawwaz"; 
$ucapanSalam = "Selamat pagi"; 
 
// memanggilnya lagi tanpa mengisi parameter salam perkenalan($saya); 
?> 