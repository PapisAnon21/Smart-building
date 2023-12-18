from flask import Flask , render_template

import RPi.GPIO as gpio

gpio.setmode(gpio.BCM) # permet de definir un mode qui ne change pas le numero des broches son oppe est gpio.BOARD
	
gpio.setup(25 , gpio.OUT) #la on definit la broche 25 comme sorti standard de courant

import datetime 

app = Flask(__name__)

@app.route("/")
def hello():
	now = datetime.datetime.now()
	timeString = now.strftime("%Y-%m-%d %H:%M")
	template_donne = { 'title': 'Controle - LED', 'time': timeString}
	return render_template('projet_raspbi.html' , **template_donne)

@app.route("/<brochName>/<stateBroche>") # ceci permet de mettre a cote de l'adresse cette chaine de caractere
#la fonction qui suit est en liaison directe avec les parametre de app.route
def execute_action(brochName , stateBroche):
	brochName = int(brochName)
	if stateBroche = 'on':
		gpio.output(brochName, gpio.HIGH)
		message = 
	if stateBroche = 'off'
		gpio.output(brochName , gpio.LOW)


if __name__ == '__main__':
	app.run(host = ip_adress , port = 80 , debug = True ) 