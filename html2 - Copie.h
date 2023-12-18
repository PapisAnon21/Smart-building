page+="<!DOCTYPE html>";
page+="<html>";
page+="<head>";
page+="<style type='text/css'>";
page+=".first_paragraphe";
page+="{";
page+="color: white;";
page+="background: black;";
page+="height: 60px;";
page+="width: 100%;";
page+="font-size: 1.8em;";
page+="position: relative;";
page+="left: 11%;";
page+="}";
page+=".second_paragraphe";
page+="{";
page+="color: white ;";
page+="background: black;";
page+="height: 45px;";
page+="width: 100px;";
page+="font-size: 1.7em;";
page+="position: relative;";
page+="top: 20%;";
page+="text-align: center;";
page+="}";
page+=".les_reseaux";
page+="{";
page+="display: flex;";
page+="}";
page+=".reseau_hydro";
page+="{";
page+="position: relative;";
page+="left: 60%;";
page+="top: 30%;";
page+="}";
page+=".les_lampes";
page+="{";
page+="color: white;";
page+="background: black;";
page+="font-size: 2.2em;";
page+="position: relative;";
page+="left: 50%;";
page+="}";
page+=".pompes";
page+="{";
page+="color: white;";
page+="background: black;";
page+="font-size: 2.2em;";
page+="position: relative;";
page+="right: 80%;";
page+="}"
page+=".partie_lampes";
page+="{";
page+="display: flex";
page+="}";
page+=".lampe1";
page+="{";
page+="position: relative;";
page+="left: 40%;";
page+="font-size: 3em;";
page+="}";
page+=".lampe2";
page+="{";
page+="position: relative;";
page+="left: 50%;";
page+="font-size: 3em;";
page+="}";
page+=".lampe3";
page+="{";
page+="position: relative;";
page+="left: 60%;";
page+="font-size: 3em;";
page+="}";
page+=".la_pompe";
page+="{";
page+="position: relative;";
page+="right: 50%;";
page+="top: 5%;";
page+="font-size: 3em;";
page+="}";
page+=".third_paragraphe";
page+="{";
page+="color: white;";
page+="background: black;";
page+="height: 45px;";
page+="width: 100px;";
page+="font-size: 1.7em;";
page+="position: relative;";
page+="top: 20%;";
page+="text-align: center;";
page+="}";
page+="button";
page+="{";
page+="font-size: 1em;";
page+="}";
page+=".les_lampes_1";
page+="{";
page+="color: white;";
page+="background: black;";
page+="font-size: 2.2em;";
page+="position: relative;";
page+="left: 10%;";
page+="text-align: center;";
page+="}";
page+=".lampe1_1";
page+="{";
page+="position: relative;";
page+="left: 5%;";
page+="font-size: 2em;";
page+="}";
page+=".lampe1_2";
page+="{";
page+="position: relative;";
page+="left: 10%;";
page+="font-size: 2em;";
page+="}";
page+=".lampe1_3";
page+="{";
page+="position: relative;";
page+="left: 15%;";
page+="font-size: 2em;";
page+="}";
page+=".reseau_hydro1_1";
page+="{";
page+="position: relative;";
page+="left: 45%;";
page+="top: 30%;";
page+="}";
page+=".pompes1_1";
page+="{";
page+="color: white;";
page+="background: black;";
page+="font-size: 2.2em;";
page+="position: relative;";
page+="right: 80%;";
page+="}";
page+="</style>";
page+="<meta charset='utf-8'>";
page+="<title> Domotique </title>";	
page+="</head>";
page+="<body>";
page+="<div>";
page+="<a href='/device_1/on' id='lien1_1' title='lampe1'></a>";
page+="<a href='/device_1/of' id='lien1_2' title='lampe1'></a>";
page+="<a href='/device_2/on' id='lien2_1' title='lampe2'></a>";
page+="<a href='/device_2/off' id='lien2_2' title='lampe2'></a>";
page+="<a href='/device_3/on' id='lien3_1' title='lampe3'></a>";
page+="<a href='/device_3/off' id='lien3_2' title='lampe3'></a>";
page+="<a href='/demande_duree?' id='link1_1' title='lampe1'></a>";
page+="<a href='/demande_duree?' id='link1_2' title='lampe1'></a>";
page+="<a href='/demande_duree?' id='link2_1' title='lampe2'></a>";
page+="<a href='/demande_duree?' id='link2_2' title='lampe2'></a>";
page+="<a href='/demande_duree?' id='link3_1' title='lampe3'></a>";
page+="<a href='/demande_duree?' id='link3_2' title='lampe3'></a>";
page+="<a href='/demande_duree?' id='link4_1' title='pompe'></a>";
page+="<a href='/demande_duree?' id='link4_2' title='pompe'></a>";
page+="</div>";	
page+="<h1> <p class='first_paragraphe' >Bienvenue Dans Votre Application Smart Building </p></h1>";
page+="<br><br>";
page+="<h2> <p class'second_paragraphe'> SYSTEME DE CONTROLE ELECTRIQUE ET HYDRAULIQUE </p></h2>";
page+="<div class='les_reseaux'>";
page+="<div class='reseaux_electrique'>";
page+="<p class='les_lampes'>";
page+="Controle Des Appareils";  // c'est ce document qui a subi le bon modification
page+="</p>";
page+="<br>";
page+="<div class='partie_lampes'>";
page+="<p class='lampe1'>";
page+="<label><strong> APPAREIL 1 </strong></label>";
page+="<br>";
page+="<button onclick=\"document.getElementById('lien1_1').click()\">";
page+="ON";
page+="</button>";
page+="<button onclick=\"document.getElementById('lien1_2').click()\">";
page+="OFF";
page+="</button>";
page+="</p>"; 
page+="<p class='lampe2'>";
page+="<label><strong>APPAREIL 2 </strong></label>";
page+="<br>";
page+="<button onclick=\"document.getElementById('lien2_1').click()\">";
page+="ON";
page+="</button>";
page+="<button onclick=\"document.getElementById('lien2_2').click()\">";
page+="OFF";
page+="</button>";
page+="</p>"; 
page+="<p class='lampe3'>";
page+="<label> <strong>APPAREIL 3 </strong></label>";
page+="<br>";
page+="<button onclick=\"document.getElementById('lien3_1').click()\">";
page+="ON";
page+="</button>";
page+="<button onclick=\"document.getElementById('lien3_2').click()\">";
page+="OFF";
page+="</button>";
page+="</p>"; 
page+="</div>";
page+="</div>";
page+="<div class='reseau_hydro'>";
page+="<p class='pompes'>";
page+="Controle De la Pompe";
page+="</p>";
page+="<p class='la_pompe'>";
page+="<label><strong>Pompe</strong></label>";
page+="<br>";
page+="<button onclick=\"document.getElementById('lien4_1').click()\">";
page+="ON";
page+="</button>";
page+="<button onclick=\"document.getElementById('lien4_2').click()\">";
page+="OFF";
page+="</button>";
page+="<br>";
page+="</p>";
page+="</div>";
page+="</div>";
page+="<div >";
page+="<h2 ><p class='third_paragraphe'> PROGRAMMER DES DUREES DE FONCTIONNEMENT </p></h2>";
page+="<div class='les_reseaux'>";
page+="<div class='reseaux_electrique'>";
page+="<p class='les_lampes_1'>";
page+="Controle Des Appareils";
page+="</p>";
page+="<br>";
page+="<div class='partie_lampes'>";
page+="<p class='lampe1_1'>";
page+="<label><strong> APPAREIL 1 </strong></label>";
page+="<br>";
page+="<label><em> Saisir la Durée :</em></label>";
page+="<br>";
page+="<input type='text'  id='duree_lampe_1'>";
page+="<br>";
page+="<br>";
page+="<button onclick=\"ma_fonction_duree_lampe_1_on()\">";
page+="ON";
page+="</button>";
page+="<button onclick=\"ma_fonction_duree_lampe_1_off()\">";
page+="OFF";
page+="</button>";
page+="</p>"; 
page+="<p class='lampe1_2'>";
page+="<label><strong>APPAREIL 2 </strong></label>";
page+="<br>";
page+="<label><em> Saisir la Durée :</em></label>";
page+="<br>";
page+="<input type='text'  id='duree_lampe_2'>";
page+="<br>";
page+="<br>";
page+="<button onclick=\"ma_fonction_duree_lampe_2_on()\">";
page+="ON";
page+="</button>";
page+="<button onclick=\"ma_fonction_duree_lampe_2_off()\">";
page+="OFF"
page+="</button>"
page+="</p>"
page+="<p class='lampe1_3'>"
page+="<label><strong>APPAREIL 3 </strong></label>"
page+="<br>"
page+="<label><em> Saisir la Durée :</em></label>"
page+="<br>"
page+="<input type='text'  id='duree_lampe_3'>";
page+="<br>";
page+="<br>";
page+="<button onclick=\"ma_foncion_duree_lampe_3_on()\">";
page+="ON";
page+="</button>";
page+="<button onclick=\"ma_foncion_duree_lampe_3_off()\">";
page+="OFF";
page+="</button>";
page+="</p> ";
page+="</div>";
page+="</div>";
page+="<div class='reseau_hydro1_1'>";
page+="<p class='pompes1_1'>";
page+="Controle De la Pompe";
page+="</p>";
page+="<p class='la_pompe'>";
page+="<label><strong>Pompe</strong></label>";
page+="<br>";
page+="<label><em> Saisir la Durée :</em></label>";
page+="<br>";
page+="<input type='text'>";
page+="<br>";
page+="<button>";
page+="ON";
page+="</button>";
page+="<button>";
page+="OFF";
page+="</button>";
page+="<br>";
page+="</p>";
page+="</div>";
page+="</div>";
page+="</div>";
page+="<script type='text/javascript'>";
page+="function ma_fonction_duree_lampe_1_on(){";
page+="var temps = document.getElementById('duree_lampe_1').value;";
page+="var link = document.getElementById('link1_1');";
page+="link.href = link.href +'pin=14&etat=on&duration='+ temps;";
page+="link.click();";
page+="}";
page+="function ma_fonction_duree_lampe_1_off(){";
page+="var temps = document.getElementById('duree_lampe_1').value;";
page+="var link = document.getElementById('link1_2');";
page+="link.href = link.href +'pin=14&etat=off&duration='+ temps;";
page+="link.click();";
page+="}";
page+="function ma_fonction_duree_lampe_2_on(){";
page+="var temps = document.getElementById('duree_lampe_2').value;";
page+="var link = document.getElementById('link2_1');";
page+="link.href = link.href +'pin=12&etat=on&duration='+ temps;";
page+="link.click();";
page+="}";
page+="function ma_fonction_duree_lampe_2_off(){";
page+="var temps = document.getElementById('duree_lampe_2').value;";
page+="var link = document.getElementById('link2_2');";
page+="link.href = link.href +'pin=12&etat=off&duration='+ temps;";
page+="link.click();";
page+="}";
page+="function ma_foncion_duree_lampe_3_on(){";
page+="var temps = document.getElementById('duree_lampe_3').value;";
page+="var link = document.getElementById('link3_1');";
page+="link.href = link.href +'pin=13&etat=on&duration='+ temps;";
page+="link.click();";
page+="}";
page+="function ma_foncion_duree_lampe_3_off(){";
page+="var temps = document.getElementById('duree_lampe_3').value;";
page+="var link = document.getElementById('link3_2');";
page+="link.href = link.href +'pin=13&etat=off&duration='+ temps;";
page+="link.click();";
page+="}";
page+="</script>";
page+="</body>	";
page+="</html>";
