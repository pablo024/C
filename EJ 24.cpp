# incluye  < iostream >
# include  < conio.h >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

vacío  crearMatriz ();
bool  verificarMatriz ( int **, int );
void  imprimir ( int **);

int ** matriz, num;

int  main () {
	crearMatriz ();
	verificarMatriz (matriz, num);
	imprimir (matriz);
	
	getch ();
	return  0 ;
}
bool  verificarMatriz ( int ** matriz, int num) {
	para ( int i = 0 ; i < 3 ; i ++) {
		para ( int j = 0 ; j < 3 ; j ++) {
			if (* (* (matriz + i) + j) == num- 48 ) {
				devolver  falso ;
			}
		}
	}
	devuelve  verdadero ;
}

void  crearMatriz () {
	matriz = new  int * [ 3 ];
	para ( int i = 0 ; i < 3 ; i ++) {
		matriz [i] = new  int [ 3 ];
	}
	para ( int i = 0 ; i < 3 ; i ++) {
		para ( int j = 0 ; j < 3 ; j ++) {
			num = ' 1 ' + ( rand ()% ( 9 ));
			while ( verificarMatriz (matriz, num) == false ) {
				num = ' 1 ' + ( rand ()% ( 9 ));
			}
			* (* (matriz + i) + j) = num- 48 ;
		}
	}
}

void  imprimir ( int ** matriz) {
	para ( int i = 0 ; i < 3 ; i ++) {
		cout << "    " ;
		para ( int j = 0 ; j < 3 ; j ++) {
			cout << "  " << * (* (matriz + i) + j);
		}
		cout << " \ n " ;
	}
}
