# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	flotar dinero, todos; int tipo;
	cout << " Ingresa una cantidad de dinero:    " ; cin >> dinero; cout << " \ n \ n Ingresar el importe adicional \ n " ;
	cout << " 1.IVA (21%) \ n 2.IVA General (16%) \ n 3.IVA reducido (7%) \ n 4.IVA Supereducido (4%) \ n :    " ; cin >> tipo;
	if (tipo == 1 ) {todo = dinero * 0.21 ;}
	else  if (tipo == 2 ) {todo = dinero * 0.16 ;}
	else  if (tipo == 3 ) {todo = dinero * 0.07 ;}
	else  if (tipo == 4 ) {todo = dinero * 0.04 ;}
	else {cout << " Introduca una opcion valida " ;}
	cout << " El precio de " << dinero << " euros con el IVA aplicado pasa a ser de " << dinero + todo << " euros " ;
	cout << " \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
}
