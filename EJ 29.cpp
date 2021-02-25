# incluye  < iostream >
# include  < conio.h >
# incluye  < stdlib.h >
# incluir  < string.h >

usando el  espacio de nombres  std ;

struct  Palabra {
	char palabra [ 30 ];
	int vocales = 0 ;
	int pos;
} pal [ 5 ], * punteroPal = pal;

char Vocales [] = { ' A ' , ' E ' , ' I ' , ' O ' , ' U ' };

vacío  crearPalabra ();
void  contarVocales ();
 imprimirPalabra void ();

int  main () {
	sistema ( " color 1A " );
	crearPalabra ();
	contarVocales ();
	imprimirPalabra ();
	
	getch ();
	return  0 ;
}

void  crearPalabra () {
	para ( int i = 0 ; i < 5 ; i ++) {
		cout << " Introduzca la palabra -> " << i + 1 << " :   " ;
		cin. getline (pal [i]. palabra , 30 , ' \ n ' );
		pal [i]. pos = i;
		sistema ( " cls " );
	}
}

void  contarVocales () {
	int aux;
	para ( int i = 0 ; i < 5 ; i ++) {
		para ( int j = 0 ; j < strlen (pal [i]. palabra ); j ++) {
			para ( int z = 0 ; z < 5 ; z ++) {
				if ( strupr ((* (punteroPal + j)). palabra ) == Vocales + z) {
					pal [i]. vocales ++;
				}
			}
		}
	}
	para ( int i = 0 ; i < 5 ; i ++) {
		para ( int j = 0 ; j < 4 ; j ++) {
			si (pal [j]. vocales > pal [i + 1 ]. vocales ) {
				aux = pal [j]. pos ;
				pal [j]. pos = pal [j + 1 ]. pos ;
				pal [j + 1 ]. pos = aux;
			}
		}
	}
}

void  imprimirPalabra () {
	para ( int j = 0 ; j < 5 ; j ++) {
		para ( int i = 0 ; i < 5 ; i ++) {
			si (pal [i]. pos == j) {
				cout << i + 1 << " . " << pal [i]. palabra << endl;
			}
		}
	}
	
}
