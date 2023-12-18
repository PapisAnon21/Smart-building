/*
String webcode()
{
String page = "<!DOCTYPE html><html><head>";
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
page+="</body>  ";
page+="</html>";
return page;
}
*/
const char webcode[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Domotique</title>
  <style>
    
    
    body
    {
      background-color: black;
    }
    .first_paragraph
    {
      background-color: rgb(233, 81, 0);
      height: 2.5cm;
      color: black;
      font-family: Verdana , sans-serif;
      font-weight: bolder;
      font-size: 1.6cm;
      text-align: center;
      padding-bottom: 0.2cm;
      padding-top: 0.2cm;
      margin: 0cm;
      border-top-left-radius: 3px;
      border-top-right-radius: 3px;
    }
    
    .paragraph
    {
      display: inline-block;
      margin-bottom: 2cm;
      margin-left: 0cm;
      margin-right: 0cm;
      
    }
    
    #main1
    {
      background-color: rgb(209, 203, 203);
      height: 1.5cm;
      color: black;
      font-family:Verdana , sans-serif;
      font-weight: bolder;
      font-size: 0.51cm;
      text-align: center;
      padding-top: 0cm;
      padding-bottom: 0.6cm;
      border: gray solid 1px;
      border-bottom-left-radius: 3px;
      border-bottom-right-radius: 3px;
      margin-bottom: 2cm;
      
      
    }
    
    #modify1
    {
      margin-right: 0.5cm;
      margin-left: 0cm;
    }
    #modify2
    {
      margin-left: 0.5cm;
      margin-right: 0cm;
    }
    
    #modify1:hover
    {
      background-color: white;
      cursor: pointer;
      border-radius: 5px;
      
    }
    
    #modify2:hover
    {
      background-color: white;
      cursor: pointer;
      border-radius: 5px;
    }
    
    .partie_lampes
    {
      display: flex;
      margin-bottom: 0cm;
      border: gray solid 1px;
      
    }
    
    .reseau_hydro
    {
      border: 1px gray solid;
    }
    
    .second_paragraph
    {
      background-color: rgb(243, 154, 106);
      height: 2cm;
      color: rgb(255, 255, 255);
      font-family: Verdana , sans-serif;
      font-weight: bolder;
      font-size: 0.8cm;
      text-align: center;
      padding-bottom: 0cm;
      padding-top: 0.6cm;
      margin: 0cm;
      
       
    }
    
    .lampes
    {
      background-color: rgb(240, 240, 240);
      height: 1.5cm;
      color: black;
      font-family:Verdana , sans-serif;
      font-weight: bolder;
      font-size: 0.8cm;
      text-align: center;
      padding-top: 0.4cm;
      padding-bottom: 0cm;
      border: gray solid 1px;
      margin-bottom: 0cm;
      margin-top: 0cm;
      
    }
    
    .third_paragraph
    {
      background-color: rgb(243, 154, 106);
      height: 2cm;
      color: rgb(255, 255, 255);
      font-family: Verdana , sans-serif;
      font-weight: bolder;
      font-size: 0.8cm;
      text-align: center;
      padding-bottom: 0cm;
      padding-top: 0.6cm;
      margin: 0cm;
      align-items: center;
       
    
    }
    
    .pompes
    {
      background-color: rgb(240, 240, 240);
      height: 1.5cm;
      color: black;
      font-family:Verdana , sans-serif;
      font-weight: bolder;
      font-size: 0.8cm;
      text-align: center;
      padding-top: 0.4cm;
      padding-bottom: 0cm;
      border: gray solid 1px;
      margin-bottom: 0cm; 
      margin-top: 0.5cm;
      
    }
    
    .lampe1
    {
      margin-right: 3cm;
      margin-left: 14cm;
    }
    
    .lampe2
    {
      margin-right: 3cm;
      
    }
    
    strong
    {
      font-size: larger;
      font-family:Verdana , sans-serif; 
      display: inline-block;
      margin-left: 1.7cm;
      background-color: rgb(175, 175, 175);
      border-radius: 4px;
      margin-bottom: 0.3cm;
    }
    
    em
    {
      font-size: larger;
      font-family:Verdana , sans-serif; 
      font-weight: bolder;
      background-color: rgb(201, 251, 251);
      border-radius: 4px;
    }
    
    .lampe1_1
    {
      margin-right: 3cm;
      margin-left: 14cm;
    }
    
    .lampe2_1
    {
      margin-right: 3cm;
      
    }
    
    /*.reseaux_elec
    {
      border: 1px gray solid;
    }
    
    .reseau_hydro
    {
      border: 1px gray solid;
    }*/
    
    .la_pompe
    {
      margin-left: 23cm;
      margin-bottom: 0.2cm;
    }
    
    button
    {
      background-color: rgb(255, 255, 255);
      font-family: Arial, Helvetica, sans-serif;
      width: 3cm;
      height: 1.5cm;
        box-shadow: inset;
      border: gray 5px solid;
      border-radius: 12px;
      cursor: pointer;
      margin: 0cm;
    }
    
    .on:hover
    {
      background-color: rgb(26, 177, 3);
    }
    
    .off:hover
    {
      background-color: rgba(255, 0, 0, 0.927);
    }
    
    input
    {
      border-radius: 5px;
      margin-bottom: 0.3cm;
      border: 4px solid gray;
    }
    
    .la_pompe_1
    {
      margin-left: 25cm;
      margin-bottom: 0.2cm;
    }

    .on:active
{
    background-color: rgb(26, 177, 3);
}

.off:active
{
    background-color: rgba(255, 0, 0, 0.927);
}



.partie_lampes
{
  background-color: white;
}

.background{
  background-color: black;
  height: 1.75cm;
}

  



    
    @media (max-width:2000px)
      {
        .first_paragraph,.second_paragraph,.third_paragraph, .les_reseaux, .reseau_hydro, .la_pompe, .la_pompe_1, .lampes, .lampe1, .lampe2, .lampe3, .lampe1_1, .lampe2_1, .lampe3_1
        {
          font-size: 25px;
          margin-left: 0cm;
          margin-right: 0cm;
          padding-left: 0cm;
          padding-right: 0cm;
          width: auto;

        }
        
        .la_pompe_1
        {
          padding-left: 0cm;
          padding-right: 0cm;
        }
        label
        {
          text-align: left;
        }
        
        strong
        {
          margin: 0cm;
          padding: 0cm;
        }

        .on
        {
          margin-left: 0cm;
          margin-right: 0cm;
        }
        .off
        {
          margin-left: 0cm;
          margin-right: 0cm;
        }
      }

      @media all and (orientation:portrait)
      {
        .first_paragraph,.second_paragraph,.third_paragraph, .les_reseaux, .reseau_hydro, .la_pompe, .la_pompe_1, .lampes, .lampe1, .lampe2, .lampe3, .lampe1_1, .lampe2_1, .lampe3_1
        {
          font-size: 15px;
          margin-left: 0cm;
          margin-right: 0cm;
          padding-left: 0cm;
          padding-right: 0cm;
          width: auto;
          

        }
        
        .la_pompe_1
        {
          padding-left: 0cm;
          padding-right: 0cm;
        }
        label
        {
          text-align: left;
        } 

        strong
        {
          margin: 0cm;
          padding: 0cm;
        }
        p.lampes, p.pompes
        {
          font-size: 15px
        }

        .on
        {
          margin-left: 0cm;
          margin-right: 0cm;
        }

        .off
        {
          margin-left: 0cm;
          margin-right: 0cm;
        }
      }

      

      
    
    
  
    </style>
</head>
  <body>
    <a href="/device_1/on" id="lien1_1" title="lampe1"></a>
    <a href="/device_1/off" id="lien1_2" title="lampe1"></a>
    <a href="/device_2/on" id="lien2_1" title="lampe2"></a>
    <a href="/device_2/off" id="lien2_2" title="lampe2"></a>
    <a href="/device_3/on" id="lien3_1" title="lampe3"></a>
    <a href="/device_3/off" id="lien3_2" title="lampe3"></a>
    <a href="/demande_duree?" id="link1_1" title="lampe1"></a>
    <a href="/demande_duree?" id="link1_2" title="lampe1"></a>
    <a href="/demande_duree?" id="link2_1" title="lampe2"></a>
    <a href="/demande_duree?" id="link2_2" title="lampe2"></a>
    <a href="/demande_duree?" id="link3_1" title="lampe3"></a>
    <a href="/demande_duree?" id="link3_2" title="lampe3"></a>
    <a href="/demande_duree?" id="link4_1" title="pompe"></a>
    <a href="/demande_duree?" id="link4_2" title="pompe"></a>

      
    
    <div class="fixe">
      <h1 class="first_paragraph">BIENVENUE DANS VOTRE APPLICATION SMART BUILDING</h1>
    </div>  
    <div class="background">

    </div>
    
    <h2 class="second_paragraph">SYSTEME DE CONTROLE ELECTRIQUE ET HYDRAULIQUE</h2>
    <div class="les_reseaux">
      <div class="reseaux_elec">
        <p class="lampes">
          CONTROLE DES APPAREILS
        </p>

        <div class="partie_lampes">
          
          <p class="lampe1">

            <label><strong class="centre">APPAREIL(1) </strong></label>
            <br>
            <button onclick="document.getElementById('lien1_1').click()" class="on">
              ON
            
            </button>
            <button onclick="document.getElementById('lien1_2').click()" class="off">
              OFF
            </button>
            
          </p> 
          <p class="lampe2">
            <label><strong class="centre">APPAREIL(2)</strong></label>
            <br>
            <button onclick="document.getElementById('lien2_1').click()" class="on">
              ON
            </button>
            <button onclick="document.getElementById('lien2_2').click()" class="off">
              OFF
            </button>
            
          </p> 
          <p class="lampe3">
            <label> <strong class="centre">APPAREIL(3) </strong></label>
            <br>
            <button onclick="document.getElementById('lien3_1').click()" class="on">
              ON
            </button>
            <button onclick="document.getElementById('lien3_2').click()" class="off">
              OFF
            </button>
            
          </p> 
            
        </div>    <!--n  commentaire!-->    
      </div>
        
      

        
        

    </div>

    <div class="background">

    </div>

    <h2 class="third_paragraph"> PROGRAMMER DES DUREES DE FONCTIONNEMENT </h2> 
    
    <div class="les_reseaux">
      <div class="reseaux_elec">
        <p class="lampes">
          CONTROLE DES APPAREILS
        </p>
        

        <div class="partie_lampes">
          
          <p class="lampe1_1">

            <label><strong> APPAREIL(1) </strong></label>
            <br>
            <label><em>DUREE :</em></label>
            <br>
            <input type="text" name="" id="duree_lampe_1">
            <br>
            <br>
            <button onclick="ma_fonction_duree_lampe_1_on()" class="on">
              ON
            
            </button>
            <button onclick="ma_fonction_duree_lampe_1_off()" class="off">
              OFF
            </button>
            
          </p> 
          <p class="lampe2_1">
            <label><strong>APPAREIL(2) </strong></label>
            <br>
            <label><em>DUREE :</em></label>
            <br>
            <input type="text" name="" id="duree_lampe_2">
            <br>
            <br>
            <button onclick="ma_fonction_duree_lampe_2_on()" class="on">
              ON
            </button>
            <button onclick="ma_fonction_duree_lampe_2_off()" class="off">
              OFF
            </button>
            
          </p> 
          <p class="lampe3_1">
            <label><strong>APPAREIL(3)</strong></label>
            <br>
            <label><em>DUREE :</em></label>
            <br>
            <input type="text" name="" id="duree_lampe_3">
            <br>
            <br>
            <button onclick="ma_foncion_duree_lampe_3_on()" class="on">
              ON
            </button>
            <button onclick="ma_foncion_duree_lampe_3_off()" class="off">
              OFF
            </button>
            
          </p> 
          
          <!--n  commentaire!-->    
        </div>
      </div>
      
    </div>
    
      

    </div>

    
  <script type="text/javascript">
function ma_fonction_duree_lampe_1_on(){
var temps = document.getElementById('duree_lampe_1').value;
var link = document.getElementById("link1_1");
link.href = link.href +'pin=14&etat=on&duration='+ temps;
link.click();
}
function ma_fonction_duree_lampe_1_off(){
var temps = document.getElementById('duree_lampe_1').value;
var link = document.getElementById("link1_2");
link.href = link.href +'pin=14&etat=off&duration='+ temps;
link.click();
}
function ma_fonction_duree_lampe_2_on(){
var temps = document.getElementById('duree_lampe_2').value;
var link = document.getElementById("link2_1");
link.href = link.href +'pin=12&etat=on&duration='+ temps;
link.click();
}
function ma_fonction_duree_lampe_2_off(){
var temps = document.getElementById('duree_lampe_2').value;
var link = document.getElementById("link2_2");
link.href = link.href +'pin=12&etat=off&duration='+ temps;
link.click();
}
function ma_foncion_duree_lampe_3_on(){
var temps = document.getElementById('duree_lampe_3').value;
var link = document.getElementById("link3_1");
link.href = link.href +'pin=13&etat=on&duration='+ temps;
link.click();
}
function ma_foncion_duree_lampe_3_off(){
var temps = document.getElementById('duree_lampe_3').value;
var link = document.getElementById("link3_2");
link.href = link.href +'pin=13&etat=off&duration='+ temps;
link.click();
}
</script>
    
  </body>
</html>
  
)=====";
