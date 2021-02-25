# incluye  < iostream >
# include  < conio.h >
# incluir  < string.h >
# incluye  < stdio.h >

usando el  espacio de nombres  std ;

struct  Palabras {
	char * palabra;
} palabra [ 5 ], * punteroPalabra = palabra;

void  pedirDatos ();
vacío  transformarDatos (Palabras *);

char palabra [ 5 ] [ 30 ];

int  main () {
	pedirDatos ();
	transformarDatos (punteroPalabra);
	
	eliminar [] punteroPalabra-> palabra ;
	
	getch ();
	return  0 ;
}

void  pedirDatos () {
	para ( int i = 0 ; i < 5 ; i ++) {
		cout << " Introduzca el nombre numero " << i + 1 << " :   " ; cin. getline (palabra [i], 30 , ' \ n ' );
		(punteroPalabra + i) -> palabra = new  char [ strlen (palabra [i])];
		(punteroPalabra + i) -> palabra = palabra [i];
	}
}

void  transformarDatos (Palabras * punteroPalabra) {
	int pos, var [ 5 ], max = 0 ;
	para ( int i = 0 ; i < 5 ; i ++) {
		strupr ((punteroPalabra + i) -> palabra );
		while ((punteroPalabra + i) -> palabra ) {				 // ERROR
			switch ((punteroPalabra + i) -> palabra ) {
				caso  ' A ' : var [i] ++;
			}
		}
		if (var [i]> max) {
			max = var [i];
			pos = i;
		}
	}
	cout << " La palabra con mas 'A' es " << (punteroPalabra + pos) -> palabra << endl;
}
