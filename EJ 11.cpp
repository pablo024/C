# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	cadena palabra1, palabra2;
	cout << " Introduzca su primera palabra:    " ; cin >> palabra1; cout << " \ n Introduzca su segunda palabra:    " ; cin >> palabra2;
	if (palabra1 [ 0 ] == palabra2 [ 0 ]) {cout << " \ n La primera letra de cada palabra son iguales y esta es la " << palabra1 [ 0 ];}
	else {cout << " \ n La primera letra de las palabras son distintas ya que una es " << palabra1 [ 0 ] << " y la otra es " << palabra2 [ 0 ];}
	cout << " \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
}
