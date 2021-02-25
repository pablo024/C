# incluye  < iostream >
# incluye  < stdlib.h >
# include  < conio.h >

usando el  espacio de nombres  std ;

int  main () {
	palabra de cadena;
	cout << " Introduzca su palabra:    " ; cin >> palabra; cout << " \ n " ;
	para ( char i = ' a ' ; i < ' z ' ; i ++) {
		if ( char (palabra [ 0 ]) == i) {cout << " La primera letra de la palabra es la " << i;}
	}
	cout << " \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
}
