# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	int j; flotar a, b;
	cout << " Elija un modo: \ n 1.Suma \ n 2.Resta \ n 3.Multiplicacion \ n 4.Division \ n : " ; cin >> j; cout << " \ n " ;
	if (j == 1 ) {cout << " SUMA \ n **** \ n a: " ; cin >> a; cout << " b: " ; cin >> b; cout << " \ n a + b = " << a + b;}
	else  if (j == 2 ) {cout << " RESTA \ n ***** \ n a: " ; cin >> a; cout << " b: " ; cin >> b; cout << " \ n a-b = " << ab;}
	else  if (j == 3 ) {cout << " MULTIPLICACION \ n ************** \ n a: " ; cin >> a; cout << " b: " ; cin >> b; cout << " \ n a * b = " << a * b;}
	else  if (j == 4 ) {cout << " DIVISION \ n ***** \ n a: " ; cin >> a; cout << " b: " ; cin >> b; cout << " \ n a / b = " << a / b;}
	else {cout << " Ingrese una opcion valida " ;}
	cout << " \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
}
