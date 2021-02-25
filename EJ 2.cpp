# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	flotar euros, dolares; int j;
	cout << " Que desea pasar \ n 1.Euros-Dolares \ n 2.Dolares-Euros \ n : " ; cin >> j;
	si (j == 1 ) {
		cout << " \ n Euros: " ; cin >> euros;
		cout << " \ n El cambio de " << euros << " euros a dolares son " << euros * 1.10 << " dolares " ;
	} más  si (j == 2 ) {
		cout << " \ n Dolares: " ; cin >> dolares;
		cout << " \ n El cambio de " << dolares << " dolares a euros son " << dolares / 1.10 << " euros " ;
	} más {
		cout << " Ingrese una opcion valida " ;
	}
	cout << " \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
