#include <iostream>
#include <windows.h>
#include <string>
#include <time.h>
#include <locale>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Spanish");

	int desition;
	string name;

	cout << "Bienvenido al juego, las reglas son: " << endl; Sleep(2000);
	cout << "1 Poner atenci�n a la historia y las desiciones que tomar�s. " << endl; Sleep(2000);
	cout << "2 Disfrutar y pasarla bien. " << endl; Sleep(2000);
	cout << "3 Se te dar�n opciones num�ricas para escoger la de tu preferencia. " << endl; Sleep(2000);
	cout << "Recuerda que la historia se adapta a tus desiciones, buena suerte. " << endl; Sleep(2000);
	cout << "Antes de comenzar me gustar�a saber tu nombre para hacer la historia m�s amena. " << endl; Sleep(2000);
	cout << "Ingresa tu nombre: "; Sleep(3000);
	cin >> name;
	cout<< "Muy bien, "<< name << ", vamos a comenzar\n" << endl; Sleep(7000);

	do {
		cout << "Te acabas de despertar en un lugar desconocido" << endl; Sleep(2000);
		cout << "Solamente ves una puerta" << endl; Sleep(2000);
		cout << "Vas a la puerta o te quedas investigando la habitaci�n?" << endl; Sleep(2000);
		cout << "Escoge 1 para ir por la puerta, escoge 2 para investigar la habitaci�n" << endl; Sleep(2000);
		cin >> desition;
		
	switch (desition)
	{
	case 1:
		cout << "Sales por la puerta y te encuentras un comedor y una sala de estar desconocido" << endl; Sleep(3000);
		cout << "Notas que la puerta a la calle est� abierta" << endl; Sleep(3000);
		cout << "�Sales o buscas a fondo en la casa?" << endl; Sleep(3000);
		cout << "Escoge 1 si sales por a puerta, escoge 2 si buscas a fondo. " << endl; Sleep(3000);
		cin >> desition;
		switch (desition)
		{
		case 1:
			cout << "Decidiste salir por la puerta, sales, ves un barrio totalmente desconocido. " << endl; Sleep(3000);
			cout << "Caminas hasta la esquina para ver el nombre de la calle. " << endl; Sleep(3000);
			cout << "Te das cuenta que no tiene se�alamientos. " << endl; Sleep(3000);
			cout << "�Caminas a otra esquina para buscar el nombre de la calle o doblas en la primera calle? " << endl; Sleep(3000);
			cout << "Escoge 1 para caminar a la siguiente esquina, escoge 2 para doblar en la primera calle. " << endl; Sleep(3000);
			cin >> desition;
			switch (desition)
			{
			case 1:
				cout << "Caminas a la siguiente esquina y hay un se�alamiento con letras raras. " << endl; Sleep(3000);
				cout << "No logras reconocer lo que dice, te quedas extra�ado. " << endl; Sleep(3000);
				cout << "Notas un coche, est� sin una ventana, no hay cristal. " << endl; Sleep(3000);
				cout << "Dentro del coche hay algo sospechoso. " << endl; Sleep(3000);
				cout << "Escoge 1 si miras dentro del coche, escoge 2 si sigues delante. " << endl; Sleep(3000);
				cin >> desition;
				switch(desition)
				{
				case 1: 
					cout << "Ves dentro del coche, miras que tiene la llave pegada. " << endl; Sleep(3000);
					cout << "Notas que tiene la suficiente gasolina. " << endl; Sleep(3000);
					cout << "Pero decides revisar el coche a fondo, notas que le hace falta una buj�a. " << endl; Sleep(3000);
					cout << "�Quieres volver a la casa o abandonas el coche?" << endl; Sleep(3000);
					cout << "Escoge 1 si quieres volver a la casa, escoge 2 si contin�as por la calle. " << endl; Sleep(3000);
					cin >> desition;
					switch (desition)
					{
					case 1:
						cout << "Vuelves a la casa. " << endl; Sleep(3000);
						cout << "Comienzas a buscar a fondo, buscas debajo del sill�n. Es bastante viejo. " << endl; Sleep(3000);
						cout << "Como si llevase decenas de a�os solo. " << endl; Sleep(3000);
						cout << "Encuentras una buj�a vieja. " << endl; Sleep(3000);
						cout << "�te llevas la buj�a o te la llevas? " << endl; Sleep(3000);
						cout << "Escoge 1 para llevarte la buj�a, escoge 2 para dejarla. " << endl; Sleep(3000);
						cin >> desition;
						switch(desition)
						{
						case 1: 
							cout << "Tomas la buj�a, la guardas en tu bolsillo. " << endl; Sleep(3000);
							cout << "Regresas al coche, justo antes de llegar escuchas un maullido muy extra�o. " << endl; Sleep(3000);
							cout << "Eres atacado por un gato, se supone que en este juego no hay gatos.. " << endl; Sleep(3000);
							cout << "Final bonus/23" << endl; Sleep(3000);
							break;
						case 2:
							cout << "Vas corriendo hacia donde vino el ruido. " << endl; Sleep(3000);
							cout << "Te tropiezas con un basurero vac�o y caes de est�mago con las piernas en el pecho. " << endl; Sleep(3000);
							cout << "Sientes una gran punzada en el pecho. " << endl; Sleep(3000);
							cout << "Es la buj�a..." << endl; Sleep(3000);
							cout << "Terminas muriendo de hemorragia, no hay nadie para ayudarte." << endl; Sleep(3000);
							cout << "Lo �ltimo que ves es un gato de 5 ojos, extra�o" << endl; Sleep(3000);
							cout << "Final 5/?" << endl; Sleep(3000);
							break;
						default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
							break;
						}
						break;
					case 2:
						cout << "Dejas la buj�a, parece que no sirvi� de nada que volvieras. " << endl; Sleep(3000);
						cout << "Te das cuenta lo que est�s haciendo, esto no existe. " << endl; Sleep(3000);
						cout << "Tu abuelo te quita de un juego recreativo en otra dimensi�n. " << endl; Sleep(3000);
						cout << "Final 6/?" << endl; Sleep(3000);
						break;
					default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
						break;
					}
					break;
				case 2:
					cout << "Contin�as por la calle, logras llegar a un restaurante. " << endl; Sleep(3000);
					cout << "Te das cuenta que no hay nadie, pero est� lleno de comida caliente. " << endl; Sleep(3000);
					cout << "Est�s hambriento, no has comido nada" << endl; Sleep(3000);
					cout << "�La comes o investigas el restaurante?" << endl; Sleep(3000);
					cin >> desition;
					switch(desition)
					{
					case 1:
						cout << "Te comes todo lo que pudiste encontrar. " << endl; Sleep(3000);
						cout << "Quedas satisfecho. " << endl; Sleep(3000);
						cout << "Escuchas una voz en el cielo, como si viniese de otro lado. " << endl; Sleep(3000);
						cout << "Simulaci�n terminada, has muerto. " << endl; Sleep(3000);
						cout << "Final 7/?" << endl; Sleep(3000);
						break;
					case 2:
						cout << "Te metes a investigar el restaurante. " << endl; Sleep(3000);
						cout << "Parece que la cocina est� encendida. " << endl; Sleep(3000);
						cout << "Hay un veneno en la mesa, que bueno que no com�, piensas. " << endl; Sleep(3000);
						cout << "Notas que hay algo en un sart�n, a�n crudo. " << endl; Sleep(3000);
						cout << "Hay un refirgerador detr�s tuyo. " << endl; Sleep(3000);
						cout << "Es una c�mara fr�a. " << endl; Sleep(3000);
						cout << "Abres la puerta de la c�mara. " << endl; Sleep(3000);
						cout << "Parece que no hay nada" << endl; Sleep(3000);
						cout << "Sientes como alguien te empuja por detr�s y te encierra dentro. " << endl; Sleep(3000);
						cout << "Mueres por hipotermia. " << endl; Sleep(3000);
						cout << "Final 8/?" << endl; Sleep(3000);
						break;
					default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
						break;
					}
					break;
				default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
					break;
				}
				break;
			case 2:
				cout << "Sigues delante, decides ignorar completamente el coche. " << endl; Sleep(3000);
				cout << "Ves a lo lejos una monta�a, nevada en pleno verano a media ciudad. " << endl; Sleep(3000);
				cout << "Decides avanzar por la ciudad hasta llegar a ella. " << endl; Sleep(3000);
				cout << "Escuchas una puerta abri�ndose una puerta. " << endl; Sleep(3000);
				cout << "�Investigas de donde vino el sonido o sigues con tu camino? " << endl; Sleep(3000);
				cout << "Escoge 1 si vas a seguir el sonido, escoge 2 si sigues a la monta�a. " << endl; Sleep(3000);
				cin >> desition;
				switch(desition)
				{
				case 1:
					cout << "Vas a investigar y sigues el sonido. " << endl; Sleep(3000);
					cout << "Viene desde una casa, parece ser de las mejores que hay. " << endl; Sleep(3000);
					cout << "La puerta est� entreabierta, entras y ves una casa totalmente renovada. " << endl; Sleep(3000);
					cout << "Notas que hay unas escaleras a un lado de la puerta" << endl; Sleep(3000);
					cout << "Comida caliente en la mesa, como si la acabasen de servir. " << endl; Sleep(3000);
					cout << "Est�s hambriento, no has comido nada" << endl; Sleep(3000);
					cout << "Escoge 1 si decides sentarte a comer, escoge 2 si subes las escaleras. " << endl; Sleep(3000);
					cin >> desition;
					switch (desition)
					{
					case 1:
						cout << "Te sientas a comer, nadie te acompa�a. " << endl; Sleep(3000);
						cout << "Dudas de la procedencia de la comida. " << endl; Sleep(3000);
						cout << "Te est�s muriendo hambre, pruebas un bocado. " << endl; Sleep(3000);
						cout << "No puedes dejar de comer, terminas la comida de los platos. " << endl; Sleep(3000);
						cout << "Volteas la cara un segundo y la mesa est� llena de comida de nuevo. " << endl; Sleep(3000);
						cout << "Pierdes la noci�n del tiempo y del apetito. " << endl; Sleep(3000);
						cout << "Engordas tanto que se tapan tu arterias. " << endl; Sleep(3000);
						cout << "Final 10/?" << endl; Sleep(3000);
						break;
					case 2:
						cout << "Subes por las escaleras, de muy buen material, te sientes como en casa. " << endl; Sleep(3000);
						cout << "Al subir a la primera planta, una foto tuya colgada se puede notar" << endl; Sleep(3000);
						cout << "creo que dice: " << endl; Sleep(3000);
						cout << name << ", est� entre nosotros. " << endl; Sleep(3000);
						cout << "En toda la planta no hay ni una puerta, solamente una estanter�a y el cuadro. " << endl; Sleep(3000);
						cout << "Ves un libro salido. " << endl; Sleep(3000);
						cout << "�Jalas el libro o te vas? " << endl; Sleep(3000);
						cout << "Escoge 1 si jalas el libro, escoge 2 si te vas. " << endl; Sleep(3000);
						cin >> desition;
						break;
					default:
						break;
					}
					break;
				case 2:
					cout << "Prefieres no entrometerte y sigues hacia la monta�a. " << endl; Sleep(3000);
					cout << "Llegas a la monta�a, est� un muro inmenso. " << endl; Sleep(3000);
					cout << "Rodeaste para no tener problema. " << endl; Sleep(3000);
					cout << "No hay forma de pasar a la monta�a. " << endl; Sleep(3000);
					cout << "Ves que hay una puerta secreta. " << endl; Sleep(3000);
					cout << "La llave parece cil�ndrica y planaa de un lado. " << endl; Sleep(3000);
					cout << "Te quedas varado en medio del muro, intentas escalarlo pero es demasiado alto. " << endl; Sleep(3000);
					cout << "En un intento te fue imposible, caes de bastantes metros de altura. " << endl; Sleep(3000);
					cout << "Final 9/?" << endl; Sleep(3000);
					break;
				default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
					break;
				}
				break;
			default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
				break;
			}
			break;
		case 2:
			cout << "Comienzas a buscar a fondo, buscas debajo del sill�n. Es bastante viejo. " << endl; Sleep(3000);
			cout << "Como si llevase decenas de a�os solo. " << endl; Sleep(3000);
			cout << "Encuentras una buj�a vieja. " << endl; Sleep(3000);
			cout << "�te llevas la buj�a o te la llevas? " << endl; Sleep(3000);
			cout << "Escoge 1 para llevarte la buj�a, escoge 2 para dejarla. " << endl; Sleep(3000);
			cin >> desition;
			switch (desition)
			{
			case 1:
				cout << "Te llevas la buj�a, la pones en tu bolsillo. " << endl; Sleep(3000);
				cout << "Sales, ves un barrio totalmente desconocido. " << endl; Sleep(3000);
				cout << "Caminas hasta la esquina para ver el nombre de la calle. " << endl; Sleep(3000);
				cout << "Sales por la puerta principal. " << endl; Sleep(3000);
				cout << "Caminas hasta la esquina para ver el nombre de la calle. " << endl; Sleep(3000);
				cout << "Te das cuenta que no tiene se�alamientos. " << endl; Sleep(3000);
				cout << "�Caminas a otra esquina para buscar el nombre de la calle o doblas en la primera calle? " << endl; Sleep(3000);
				cout << "Escoge 1 para caminar a la siguiente esquina, escoge 2 para doblar en la primera calle. " << endl; Sleep(3000);
				cin >> desition;
				switch (desition)
				{
				case 1:
					cout << "Caminas a la siguiente esquina y hay un se�alamiento con letras raras. " << endl; Sleep(3000);
					cout << "No logras reconocer lo que dice, te quedas extra�ado. " << endl; Sleep(3000);
					cout << "Notas un coche, est� sin una ventana, no hay cristal. " << endl; Sleep(3000);
					cout << "Dentro del coche hay algo sospechoso. " << endl; Sleep(3000);
					cout << "Escoge 1 si miras dentro del coche, escoge 2 si sigues delante. " << endl; Sleep(3000);
					cin >> desition;
					switch (desition)
					{
					case 1:
						cout << "Encuentras un cuchillo lleno de sangre dentro del coche. " << endl; Sleep(3000);
						cout << "Est� fresca, como si no hubiesen pasado ni 3 minutos. " << endl; Sleep(3000);
						cout << "�Lo guardas o sigues el rastro? " << endl; Sleep(3000);
						cout << "Escoge 1 si te llevas el cuchillo, escoge 2 si siges el rastro. " << endl; Sleep(3000);
						cin >> desition;
						switch (desition)
						{
						case 1:
							cout << "Tomas el cuchillo y te retiras, te diriges hacia la monta�a. " << endl; Sleep(3000);
							cout << "Anochece al poco tiempo. " << endl; Sleep(3000);
							cout << "Un ruido extra�o resuena una cuadra delante de ti. " << endl; Sleep(3000);
							cout << "Es una mujer muy hermosa, con un bate en la mano. " << endl; Sleep(3000);
							cout << "Has llegado lejo, �eh?" << endl; Sleep(3000);
							cout << "Corre hacia a ti, te quiere dejar sin vida. " << endl; Sleep(3000);
							cout << "Tomas el cuchillo, haces lo primero que piensas. " << endl; Sleep(3000);
							cout << "�QU� HAS HECHO? " << endl; Sleep(3000);
							cout << "Eres arrestado por consumo de drogas y homicidio. " << endl; Sleep(3000);
							cout << "Final 22/?" << endl; Sleep(3000);
							break;
						case 2:
							cout << "Sigues el rastro, hasta el callej�n que lleva a la monta�a. " << endl; Sleep(3000);
							cout << "Ahora lo sabes, te das cuenta de lo que est� pasando. " << endl; Sleep(3000);
							cout << "Eres "<< name << " Un programador, te acabas de divorciar y tu esposa. "  << endl; Sleep(3000);
							cout << "La mujer que te ha perseguido todm el tiempo, jur� vengarse. " << endl; Sleep(3000);
							cout << "No tienes m�s remedio que... " << endl; Sleep(3000);
							cout << "*Grito femenino*" << endl; Sleep(3000);
							cout << "Final 23/23" << endl; Sleep(3000);
							break;
						default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
							break;
						}
						break;
					case 2:
						cout << "Sigues delante por la calle, cierras los ojos por un momento, se hizo de noche, no tienes refugio. " << endl; Sleep(3000);
						cout << "No sabes ni d�nde te encuentras. " << endl; Sleep(3000);
						cout << "Ya no est�s en el mismo sitio. " << endl; Sleep(3000);
						cout << "Es un todo pero a la vez una nada. " << endl; Sleep(3000);
						cout << "Final 12/?" << endl; Sleep(3000);
						break;
					default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
						break;
					}
					break;
				case 2:
					cout << "Doblas en la primera calle. " << endl; Sleep(3000);
					cout << "Te incandilan una luces, no sabes lo que pas�. " << endl; Sleep(3000);
					cout << "Te han arrollado. " << endl; Sleep(3000);
					cout << "Final 11/?" << endl; Sleep(3000);
					break;
				default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
					break;
				}
				break;
			case 2: 
				cout << "Dejas la buj�a, tropiezas con ella. " << endl; Sleep(3000);
				cout << "Tu cara aterriza encima de esta." << endl; Sleep(3000);
				cout << "Sientes algo punzante durante unos instantes y ya no m�s. " << endl; Sleep(3000);
				cout << "Final 13/?" << endl; Sleep(3000);
				break;
			default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
				break;
			}
			break;
		default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
			break;
		}
		break;
	case 2:
		cout << "Te quedas investigando la habitaci�n en donde te encuentras, notas que es un cuarto vac�o, " << endl; Sleep(3000);
		cout << "con solamente una cama y un espejo frente a ti. " << endl; Sleep(3000);
		cout << "Notas una peque�a nota doblada frente al espejo, �la tomas o sigues investigando?" << endl; Sleep(3000);
		cout << "Escoge 1 si deseas leer la nota, escoge 2 si quieres seguir investigando. " << endl; Sleep(3000);
		cin >> desition;
		switch (desition)
		{
		case 1:
			cout << "Decides leer la nota, est� doblada, la tomas y la desdoblas. " << endl; Sleep(3000);
			cout << "Est� escrita con tinta y en cursiva, huele a perfume. " << endl; Sleep(3000);
			cout << "La letra parece ser de una mujer, el perfume te recuerda a alguien..." << endl; Sleep(3000);
			cout << "La carta, poco m�s que un pedazo de papel avejentado tiene escrito:  " << endl; Sleep(3000);
			cout << name << ", si est�s leyendo esto, no s� qui�n eres, no s� c�mo llegaste aqu�, y no es importante. " << endl; Sleep(3000);
			cout << "Lo importante y que tienes que saber a todo momento es que est�s en grave peligro. " << endl; Sleep(3000);
			cout << "Al�jate de los lugares oscuros, y pase lo que pase, no dejes que..." << endl; Sleep(3000);
			cout << "La carta termina tan abruptamente como inicia. " << endl; Sleep(3000);
			cout << "Pareciera que quien la escribi� la dejo sin terminar por alguna extra�a raz�n." << endl; Sleep(3000);
			cout << "�Tomas la carta o la dejas donde estaba?" << endl; Sleep(3000);
			cout << "Escoge 1 para llevar la carta contigo, escoge 2 para dejarla donde la encontraste. " << endl; Sleep(3000);
			cin >> desition;
			switch(desition)
			{
			case 1:
				cout << "Te llevas la carta contigo, la guardas en tu bolsillo. " << endl; Sleep(3000);
				cout << "Sales por la puerta del cuarto. " << endl; Sleep(3000);
				cout << "Sales por la puerta y te encuentras un comedor y una sala de estar desconocido" << endl; Sleep(3000);
				cout << "Notas que la puerta a la calle est� abierta" << endl; Sleep(3000);
				cout << "�Sales o buscas a fondo en la casa?" << endl; Sleep(3000);
				cout << "Escoge 1 si sales por a puerta, escoge 2 si buscas a fondo. " << endl; Sleep(3000);
				cin >> desition;
				switch (desition)
				{
				case 1:
					cout << "Decidiste salir por la puerta, sales, ves un barrio totalmente desconocido. " << endl; Sleep(3000);
					cout << "Caminas hasta la esquina para ver el nombre de la calle. " << endl; Sleep(3000);
					cout << "Te das cuenta que no tiene se�alamientos. " << endl; Sleep(3000);
					cout << "�Caminas a otra esquina para buscar el nombre de la calle o doblas en la primera calle? " << endl; Sleep(3000);
					cout << "Escoge 1 para caminar a la siguiente esquina, escoge 2 para doblar en la primera calle. " << endl; Sleep(3000);
					cin >> desition;
					switch (desition)
					{
					case 1:
						cout << "Caminas a la siguiente esquina y hay un se�alamiento con letras raras. " << endl; Sleep(3000);
						cout << "No logras reconocer lo que dice, te quedas extra�ado. " << endl; Sleep(3000);
						cout << "Notas un coche, est� sin una ventana, no hay cristal. " << endl; Sleep(3000);
						cout << "Dentro del coche hay algo sospechoso. " << endl; Sleep(3000);
						cout << "Lo hab�a, una persona esperando, una mujer uy hermosa, pero t� no eras lo suficiente. " << endl; Sleep(3000);
						cout << "Final 21/?" << endl; Sleep(3000);
						break;
					case 2:
						cout << "Doblas en la primera calle. " << endl; Sleep(3000);
						cout << "Te incandilan una luces, no sabes lo que pas�. " << endl; Sleep(3000);
						cout << "Te han arrollado. " << endl; Sleep(3000);
						cout << "Final 16/?" << endl; Sleep(3000);
						break;
					default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
						break;
					}
					break;
				case 2:
					cout << "Comienzas a buscar a fondo, buscas debajo del sill�n. Es bastante viejo. " << endl; Sleep(3000);
					cout << "Como si llevase decenas de a�os solo. " << endl; Sleep(3000);
					cout << "Encuentras una buj�a vieja. " << endl; Sleep(3000);
					cout << "�te llevas la buj�a o la dejas? " << endl; Sleep(3000);
					cout << "Escoge 1 para llevarte la buj�a, escoge 2 para dejarla. " << endl; Sleep(3000);
					cin >> desition;
					switch (desition)
					{
					case 1:
						cout << "Tomas la buj�a te trae un recuerdo, sabes exactamente ad�nde ir. " << endl; Sleep(3000);
						cout << "Es como si ya hubieses estado aqu�. " << endl; Sleep(3000);
						cout << "Sales disparatado hacia una monta�a. " << endl; Sleep(3000);
						cout << "Est� nevada, a media ciudad, peinsas" << endl; Sleep(3000);
						cout << "Est�s por llegar, hay un callej�n para llegar. " << endl; Sleep(3000);
						cout << "Recuerdas la carta, la sacas del bolsillo. " << endl; Sleep(3000);
						cout << "Una mujer, mi mujer..." << endl; Sleep(3000);
						cout << "�Vas por el callej�n o esperas a que anochezca?" << endl; Sleep(3000);
						cout << "Escoge 1 para ir por el callej�n, escoge 2 para esperar a que anochezca. " << endl; Sleep(3000);
						cin >> desition;
						switch (desition)
						{
						case 1:
							cout << "Pasas por el callej�n, no le das importancia a lo que dec�a la carta. " << endl; Sleep(3000);
							cout << "Est� demasiado oscuro, no sabes qu� hacer, ves la luz al final del t�nel. " << endl; Sleep(3000);
							cout << "No est� a m�s de 2 minutos, piensas" << endl; Sleep(3000);
							cout << "�Corres hacia el final o pasas caminando?" << endl; Sleep(3000);
							cout << "Escoge 1 para correr, Escoge 2 para caminar" << endl; Sleep(3000);
							cin >> desition;
							switch (desition)
							{
							case 1:
								cout << "Corres con la m�xima velocidad que te hes posible. " << endl; Sleep(3000);
								cout << "Notas como si no te acercaras a la luz. " << endl; Sleep(3000);
								cout << "De hecho, es todo lo contrario, ves c�mo se aleja m�s. " << endl; Sleep(3000);
								cout << "Miras hacia atr�s, la entrada desapareci�. " << endl; Sleep(3000);
								cout << "Se escucha un murmullo como si fuesen dentro de las paredes. " << endl; Sleep(3000);
								cout << "No est�s solo, o al menos eso escuho. " << endl; Sleep(3000);
								cout << "Corres hasta que mueres de cansancio, un paro respiratorio, mala suerte. " << endl; Sleep(3000);
								cout << "Final 3/?" << endl; Sleep(3000);
								break;
							case 2:
								cout << "Caminas a tu paso, con tranquilidad. " << endl; Sleep(3000);
								cout << "A trav�s del callej�n se van prendiendo luces por donde pasas. " << endl; Sleep(3000);
								cout << "La luz de la salida se ve cada vez m�s cerca. " << endl; Sleep(3000);
								cout << "Ves a una mujer, notas un perfume. " << endl; Sleep(3000);
								cout << "Empiezas a recordar, est�s en... " << endl; Sleep(3000);
								cout << "Amor m�o, dice la mujer. " << endl; Sleep(3000);
								cout << "La miras a detalle, no parece del todo una mujer. " << endl; Sleep(3000);
								cout << "Creo que es por los 4 brazos, dices, pero no le tomas importamcia" << endl; Sleep(3000);
								cout << "Al revisar el lugar te das cuenta que es la misma casa donde despertaste. " << endl; Sleep(3000);
								cout << "Final 4/?" << endl; Sleep(3000);
								break;
							default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
								break;
							}
							break;
						case 2:
							cout << "Esperas a que anochezca, te quedas sentado a un lado del t�nel. " << endl; Sleep(3000);
							cout << "No has comido nada en todo el d�a, te mueres de hambre. " << endl; Sleep(3000);
							cout << "Empiezas a sentir mucho fr�o, como si de los polos se tratase. " << endl; Sleep(3000);
							cout << "Sientes un inmenso dolor, como si alguien te rasgu�ase. " << endl; Sleep(3000);
							cout << "Pierdes la consciencia al poco tiempo. " << endl; Sleep(3000);
							cout << "Recuerdas qui�n eres, tiempo insuficiente. " << endl; Sleep(3000);
							cout << "Final 2/?" << endl; Sleep(3000);
							break;
						default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
							break;
						}
						break;
					case 2:
						cout << "Dejas la buj�a, accidentalmente la pisas. " << endl; Sleep(3000);
						cout << "Rueda hasta la puerta, vas por ella. " << endl; Sleep(3000);
						cout << "Est�s a punto de levantarla, te quedas desmayas sin raz�n alguna. " << endl; Sleep(3000);
						cout << "�D�NDE ESTOY?, gritas. " << endl; Sleep(3000);
						cout << "Un gran eco y retundo silencio te ensordece. " << endl; Sleep(3000);
						cout << "Sientes algo en la cara, te lastima y parece sudar. " << endl; Sleep(3000);
						cout << "Te quitas los lentes de VR, nada existi�. " << endl; Sleep(3000);
						cout << "simplemente eres" << name << " un don nadie, vives solo y no tienes familia. " << endl; Sleep(3000);
						cout << "Final 1/?" << endl; Sleep(3000);
						break;
					default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
						break;
					}
					break;
				default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
					break;
				}
				break;
			case 2:
				cout << "Dejas la carta donde la encontraste. " << endl; Sleep(3000);
				cout << "Sigues investigando el cuarto, notas un bulto en el colch�n..." << endl; Sleep(3000);
				cout << "�Lo revisas o sales del cuarto?" << endl; Sleep(3000);
				cout << "Escoge 1 si revisas el bulto, escoge 2 si sales del cuarto. " << endl; Sleep(3000);
				cin >> desition;
				switch (desition)
				{
				case 1:
					cout << "Revisas el bulto, no es m�s que simples cobijas mal puestas. " << endl; Sleep(3000);
					cout << "Sales del cuarto, notas una puerta que lleva al jard�n. " << endl; Sleep(3000);
					cout << "Abres la puerta, entras al jard�n. " << endl; Sleep(3000);
					cout << "Hay una casa en un �rbol. " << endl; Sleep(3000);
					cout << "Parece reci�n constru�da" << endl; Sleep(3000);
					cout << "�Subes a la casa o te vas? " << endl; Sleep(3000);
					cout << "Escoge 1 para subir, escoge 2 para irte. " << endl; Sleep(3000);
					cin >> desition;
					switch (desition)
					{
					case 1:
						cout << "Subes a la casa del �rbol, hay una trampilla. " << endl; Sleep(3000);
						cout << "Abres la peque�a puerta, miras a detalle la casa. " << endl; Sleep(3000);
						cout << "No hay m�s que un ba�l viejo. " << endl; Sleep(3000);
						cout << "�Bajas del �rbol o abres el ba�l?" << endl; Sleep(3000);
						cout << "Escoge 1 si bajas del �rbol, escoge 2 si revisas el ba�l. " << endl; Sleep(3000);
						cin >> desition;
						switch (desition)
						{
						case 1:
							cout << "Quieres bajar del �rbol, de repente est�s en un pino, en medio del bosque. " << endl; Sleep(3000);
							cout << "Intentas bajar de poco. " << endl; Sleep(3000);
							cout << "Resbalas y caes m�s de 100 metros de altura. " << endl; Sleep(3000);
							cout << "Final 19/?" << endl; Sleep(3000);
							break;
						case 2:
							cout << "Abres el ba�l. " << endl; Sleep(3000);
							cout << "No hay nada mas que una lata vieja. " << endl; Sleep(3000);
							cout << "La decides guardar. " << endl; Sleep(3000);
							cout << "Ves por la ventana y te encuentras en un bosque, ya no es la casa. " << endl; Sleep(3000);
							cout << "Tratas de bajar con cuidado. " << endl; Sleep(3000);
							cout << "Arrojas la lata para ver la ca�da. " << endl; Sleep(3000);
							cout << "Es bastante larga. " << endl; Sleep(3000);
							cout << "Ves una rama con la cual es f�cil bajar" << endl; Sleep(3000);
							cout << "Logras bajar y caminas por el bosque. " << endl; Sleep(3000);
							cout << "Hay una caba�a. " << endl; Sleep(3000);
							cout << "Parece que est� desierta. " << endl; Sleep(3000);
							cout << "ERROR EN SISTEMA, TERMINANDO SIMULACI�N " << endl; Sleep(3000);
							cout << "Final 20/?" << endl; Sleep(3000);
							break;
						default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
							break;
						}
						break;
					case 2:
						cout << "Quieres irte" << endl; Sleep(3000);
						cout << "Entras al cuarto, hay una persona esper�ndote, tiene un cuchillo en la mano. " << endl; Sleep(3000);
						cout << "No te da tiempo a correr. " << endl; Sleep(3000);
						cout << "Reconoces la cara de la mujer, solo que..." << endl; Sleep(3000);
						cout << "Tinene algo extra�o. " << endl; Sleep(3000);
						cout << "Final 15/?" << endl; Sleep(3000);

						break;
					default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
						break;
					}
					break;
				case 2:
					cout << "Sales del cuarto, hay una persona esper�ndote, tiene un cuchillo en la mano. " << endl; Sleep(3000);
					cout << "No te da tiempo a correr. " << endl; Sleep(3000);
					cout << "Reconoces la cara de la mujer, solo que..." << endl; Sleep(3000);
					cout << "Tinene algo extra�o. " << endl; Sleep(3000);
					cout << "Final 14/?" << endl; Sleep(3000);
					break;
				default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
					break;
				}
				break;
			default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
				break;
			}
			break;
		case 2:
			cout << "Sigues investigando el cuarto, notas un bulto en el colch�n..." << endl; Sleep(3000);
			cout << "�Lo revisas o sales del cuarto?" << endl; Sleep(3000);
			cout << "Escoge 1 si revisas el bulto, escoge 2 si sales del cuarto. " << endl; Sleep(3000);
			cin >> desition;
			switch (desition)
			{
			case 1:
				cout << "Revisas el bulto, mueves las cobijas. " << endl; Sleep(3000);
				cout << "Mueves cobija por cobija, hasta que... " << endl; Sleep(3000);
				cout << "Llegas al objeto que hac�a el bulto. " << endl; Sleep(3000);
				cout << "No sabes lo que �s, nunca lo hab�as visto en tu vida. " << endl; Sleep(3000);
				cout << "Tiene una forma cil�ndrica pero no del todo sim�trica, es plana de un lado. " << endl; Sleep(3000);
				cout << "�Te lo llevas o decides dejarlo?" << endl; Sleep(3000);
				cout << "Escoge 1 si lo llevas contigo, escoge 2 si lo dejas donde estaba. " << endl; Sleep(3000);
				break;
			case 2:
				cout << "Sales por la puerta y te encuentras un comedor y una sala de estar desconocido" << endl; Sleep(3000);
				cout << "Notas que la puerta a la calle est� abierta" << endl; Sleep(3000);
				cout << "�Sales o buscas a fondo en la casa?" << endl; Sleep(3000);
				cout << "Escoge 1 si sales por a puerta, escoge 2 si buscas a fondo. " << endl; Sleep(3000);
				cin >> desition;
				switch (desition)
				{
				case 1:
					cout << "Decidiste salir por la puerta, sales, ves un barrio totalmente desconocido. " << endl; Sleep(3000);
					cout << "Caminas hasta la esquina para ver el nombre de la calle. " << endl; Sleep(3000);
					cout << "Te das cuenta que no tiene se�alamientos. " << endl; Sleep(3000);
					cout << "�Caminas a otra esquina para buscar el nombre de la calle o doblas en la primera calle? " << endl; Sleep(3000);
					cout << "Escoge 1 para caminar a la siguiente esquina, escoge 2 para doblar en la primera calle. " << endl; Sleep(3000);
					cin >> desition;
					switch (desition)
					{
					case 1:
						cout << "Caminas a la siguiente esquina y hay un se�alamiento con letras raras. " << endl; Sleep(3000);
						cout << "No logras reconocer lo que dice, te quedas extra�ado. " << endl; Sleep(3000);
						cout << "Notas un coche, est� sin una ventana, no hay cristal. " << endl; Sleep(3000);
						cout << "Dentro del coche hay algo sospechoso. " << endl; Sleep(3000);
						cout << "Escoge 1 si miras dentro del coche, escoge 2 si sigues delante. " << endl; Sleep(3000);
						cin >> desition;
						switch (desition)
						{
						case 1:
							cout << "Miras dentro del coche y metes la mano por la ventana. " << endl; Sleep(3000);
							cout << "Mientras tanto unas luces se arcan a ti. " << endl; Sleep(3000);
							cout << "Te han atropellado." << endl; Sleep(3000);
							cout << "Final 17/?" << endl; Sleep(3000);
							break;
						case 2:
							cout << "Sigues delante, te estaban esperando, sab�a que volver�as, dijo " << endl; Sleep(3000);
							cout << "�volver? Te preguntas" << endl; Sleep(3000);
							cout << "Siempre vuelven, pero desde ahora no. " << endl; Sleep(3000);
							cout << "Ves solamente un destello y un ruido abrumador. " << endl; Sleep(3000);
							cout << "Final 18/?" << endl; Sleep(3000);
							break;
						default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
							break;
						}
						break;
					case 2:
						cout << "Doblas en la primera calle. " << endl; Sleep(3000);
						cout << "Te incandilan una luces, no sabes lo que pas�. " << endl; Sleep(3000);
						cout << "Te han arrollado. " << endl; Sleep(3000);
						cout << "Final 17/?" << endl; Sleep(3000);
						break;
					default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
						break;
					}
					break;
				case 2:
					cout << "Comienzas a buscar a fondo, buscas debajo del sill�n. Es bastante viejo. " << endl; Sleep(3000);
					cout << "Como si llevase decenas de a�os solo. " << endl; Sleep(3000);
					cout << "Encuentras una buj�a vieja. " << endl; Sleep(3000);
					cout << "�te llevas la buj�a o te la llevas? " << endl; Sleep(3000);
					cout << "Escoge 1 para llevarte la buj�a, escoge 2 para dejarla. " << endl; Sleep(3000);
					break;
				default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
					break;
				}
				break;
			default: cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
				break;
			}
			break;
		default:
			cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
			break;
		}
		break;
			
	default:
		cout << "Error, regresando a punto de guardado. " << endl; Sleep(3000);
		break;
	}
		} while (desition != 1 && desition != 2);
}
