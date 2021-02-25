# incluye  < iostream >
# include  < conio.h >
# incluye  < stdlib.h >
# incluye  < stdio.h >

usando el  espacio de nombres  std ;

vacío  crearValores ();
 comprobarValores void ();
void  imprimirResult ();

int matriz [ 3 ] [ 3 ], aux;
matrices de carbón [ 3 ] [ 3 ];
bool x, o;

int  main () {
	sistema ( " color 1A " );
	
	crearValores ();
	comprobarValores ();
	imprimirResult ();
	
	return  0 ;
}

void  crearValores () {
	para ( int i = 0 ; i < 3 ; i ++) {
		para ( int j = 0 ; j < 3 ; j ++) {
			matriz [i] [j] = rand ()% 2 ;
		}
	}
}

void  comprobarValores () {
	int var = 0 ;
	
	while ( verdadero ) {
		int i = 0 ;
		para ( int j = 0 ; j < 3 ; j ++) {
			var + = matriz [i] [j];
		}
		x = (var = 3 )? verdadero : falso ;
		o = (var = 0 )? verdadero : falso ;
		si (var = 3 || 0 ) romper ;
		var = 0 ;
		i ++;
	}
	while ( verdadero ) {
		int i = 0 ;
		para ( int j = 0 ; j < 3 ; j ++) {
			var + = matriz [j] [i];
		}
		x = (var = 3 )? verdadero : falso ;
		o = (var = 0 )? verdadero : falso ;
		si (var = 3 || 0 ) romper ;
		var = 0 ;
		i ++;
	}
	while ( verdadero ) {
		int i = 0 , j = 0 ;
		var + = matriz [i] [j];
		i ++; j ++;
		x = (var = 3 )? verdadero : falso ;
		o = (var = 0 )? verdadero : falso ;
		si (var = 3 || 0 ) romper ;
	} var = 0 ;
	while ( verdadero ) {
		int i = 3 , j = 0 ;
		var + = matriz [i] [j];
		I--; j ++;
		x = (var = 3 )? verdadero : falso ;
		o = (var = 0 )? verdadero : falso ;
		si (var = 3 || 0 ) romper ;
	} var = 0 ;
}

void  imprimirResult () {
	
	
	para ( int i = 0 ; i < 3 ; i ++) {
		cout << " \ n \ t " ;
		para ( int j = 0 ; j < 3 ; j ++) {
			switch (matriz [i] [j]) {
				caso  0 :
					matrices [i] [j] = ' X ' ;
					romper ;
				caso  1 :
					matrices [i] [j] = ' O ' ;
					romper ;
			}
			cout << "   " << matrices [i] [j];
		}
	}
	cout << " \ n \ n El resultado del juego es " ;
	si (x = verdadero ) {cout << " -1 " ;}
	más  si (o = verdadero ) {cout << " 1 " ;}
	más {cout << " 0 " ;}
	cout << " \ n " ;
}

