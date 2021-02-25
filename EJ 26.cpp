# incluye  < iostream >
# include  < conio.h >
# incluir  < string.h >

usando el  espacio de nombres  std ;

int  main () {
	char palabra [ 10 ], * p, * aux;
	
	para ( int i = 0 ; i < 10 ; i ++) {
		fflush (stdin);
		cout << " Palabra " << i + 1 << " : " ; cin >> palabra [i];
	}	
	p = palabra;
	para ( int i = 0 ; i < 10 ; i ++) {
		para ( int j = 0 ; j < 9 ; j ++) {
			if ( strlen (* (p + j))> strlen (* (p + j + 1 ))) {
				* aux = * (p + j);
				* (p + j) = * (p + j + 1 );
				* (p + j + 1 ) = * aux;
			}
		}
	}
	para ( int i = 0 ; i < 10 ; i ++) {
		cout << * (p + i) << "   " ;
	}
	getch ();
	return  0 ;
}
