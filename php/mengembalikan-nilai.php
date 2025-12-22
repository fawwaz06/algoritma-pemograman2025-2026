<?php // membuat fungsi function hitungUmur($thn_lahir, $thn_sekarang){   $umur = $thn_sekarang - $thn_lahir;   return $umur; 
} 
 
echo "Umur saya adalah ". hitungUmur(1994, 2015) ." tahun"; 
?> 
 
 
Memangil Fungsi di dalam Fungsi : 
Save : memanggil-fungsi-didalam-fungsi.php 
<?php // membuat fungsi 
function hitungUmur($thn_lahir, $thn_sekarang){ 
   
 
 
 
 
$umur = $thn_sekarang - $thn_lahir;   return $umur; 
} 
 
function perkenalan($nama, $salam="Assalamualaikum"){ 
  
 echo $salam.", "; 
  echo "Perkenalkan, nama saya ".$nama."<br/>"; 
  // memanggil fungsi lain 
  echo "Saya berusia ". hitungUmur(1994, 2015) ." tahun<br/>";   echo "Senang berkenalan dengan anda<br/>"; 
} 
 
 
// memanggil fungsi perkenalan perkenalan("fawwaz"); 
?> 
 
 