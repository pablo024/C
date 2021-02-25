# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	int numero;
	cout << " Introduzca su número:    " ; cin >> numero; cout << " \ n \ n " ;
	para ( int i = numero- 1 ; i> numero- 4 ; i -) {cout << i << " , " ;}
	cout << " y " ;
	para ( int i = numero + 1 ; i <numero + 4 ; i ++) {cout << i << " , " ;}
	cout << " \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
}
