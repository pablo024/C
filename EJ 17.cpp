# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	const  char * billetes [] = { " b500 " , " b200 " , " b100 " , " b50 " , " b20 " , " b10 " , " b5 " , " m2 " , " m1 " };
	const  char * numero [] = { " 500 " , " 200 " , " 100 " , " 50 " , " 20 " , " 10 " , " 5 " , " 2 " , " 1 " };
	int dinero, resto, gasto, coste;
	cout << " Ingresa la cantidad de dinero:    " ; cin >> dinero; cout << " \ n \ n " ; int dinero2 = dinero;
	cout << " Tienes: " ;
	para ( int i = 0 ; i < 9 ; i ++) {
		cadena x = numero [i];
		if (dinero / atoi (x. c_str ())> = 0 ) {
			int var = dinero / atoi (x. c_str ());
			resto = dinero-var * atoi (x. c_str ());
			cout << var << " de " << numero [i] << " , " ;
			dinero = resto;
		} 
	}
	cout << " \ n \ n Ingrese la cantidad de dinero a gastar:    " ; cin >> coste; cout << " \ n \ n Te devolveran: " ; gasto = dinero2-coste;
	para ( int i = 0 ; i < 9 ; i ++) {
		cadena x = numero [i];
		if (gasto / atoi (x. c_str ())> = 0 ) {
			int var = gasto / atoi (x. c_str ());
			resto = gasto-var * atoi (x. c_str ());
			cout << abs (var) << " de " << numero [i] << " , " ;
			gasto = resto;
		} 
	}       	
	cout << " \ n \ n " ;	
	sistema ( " pausa " );
	return  0 ;
}
