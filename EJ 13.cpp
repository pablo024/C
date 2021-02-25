# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	int filas;
	cout << " PIRAMIDA \ n ******** \ n \ n Ingrese el número de filas:   " ; cin >> filas; cout << " \ n \ n " ;
	para ( int i = 1 ; i <= filas; i ++) {
		para ( int j = 1 ; j <= filas + 1 -i; j ++) {
			cout << "   " ;
		}
		para ( int j = 1 ; j <(i + 1 ) * 2 - 2 ; j ++) {
			cout << " * " ;
		}
	cout << endl << " \ n " ;
	}	
	cout << " \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
	}
