# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	palabra de cadena; int suma = 0 , numero;
	cout << " Introduzca su número:    " ; cin >> palabra; cout << " \ n " ;
	for ( int i = 0 ; i <= palabra. length (); i ++) {
		numero = palabra [i];
		suma = suma + numero;
	}
	cout << " El resultado de la suma es " << suma;
	cout << " \ n \ n " ;	
	sistema ( " pausa " );
	return  0 ;
}
