# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
	int dia, mess, years; char mes;
	cout << " Ingrese su fecha: \ n Dia: " ; cin >> dia; cout << " mes: " ; cin >> mes; cout << " a�o: " ; cin >> a�os;
	if (mes == " enero " ) {mess = " 1 " ;} else  if (mes == " febrero " ) {mess = " 2 " ;} else  if (mes == " marzo " ) {mess = " 3 " ;}
	else  if (mes == " abril " ) {mess = " 4 " ;} else  if (mes == " mayo " ) {mess = " 5 " ;} else  if (mes == " junio " ) {mess = " 6 " ;}
	else  if (mes == " julio " ) {mess = " 7 " ;} else  if (mes == " agosto " ) {mess = " 8 " ;} else  if (mes == " septiembre " ) {mess = " 9 " ;}
	else  if (mes == " octubre " ) {mess = " 10 " ;} else  if (mes == " noviembre " ) {mess = " 11 " ;} else  if (mes == " diciembre " ) {mess = " 12 " ;} else {cout << " El mes introducido no extiste " ;}
	cout << " Su fecha es: " << dia << " / " << mes << " / " << a�os; cout << " \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
}
