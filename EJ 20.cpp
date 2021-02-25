# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

 corrector de vacíos () {
	string dni; int resultado; string letra;
	cout << " Introduzca su DNI:    " ; cin >> dni; cout << " \ n \ n " ;
	char letras [] = { ' T ' , ' R ' , ' W ' , ' A ' , ' G ' , ' M ' , ' Y ' , ' F ' , ' P ' , ' D ' , ' X ' , ' B ' , ' N ' ,
					 ' J ' , ' Z ' , ' S ' , ' Q ' , ' V ' , ' H ' , ' L ' , ' C ' , ' K ' , ' E ' };
	if (dni. length () == 9 ) {		
		resultado = dni [ 0 , 8 ]% 23 ;
		if (dni [ 8 ] == letras [resultado]) {
			cout << " -> El DNI " << dni << " es correcto " ;}
		else {cout << " -> El " << dni << " no es correcto ... \ n \ n -> Asegurese de haberlo escrito bien " ;}
	} más {
		cout << " Asegurese de haberlo escrito bien ... " ;}
}

void  letra () {
	string dni; int resultado; string letra;
	cout << " Introduzca su DNI (sin numero):    " ; cin >> dni; cout << " \ n \ n " ;
	char letras [] = { ' T ' , ' R ' , ' W ' , ' A ' , ' G ' , ' M ' , ' Y ' , ' F ' , ' P ' , ' D ' , ' X ' , ' B ' , ' N ' ,
					 ' J ' , ' Z ' , ' S ' , ' Q ' , ' V ' , ' H ' , ' L ' , ' C ' , ' K ' , ' E ' };
	if (dni. length () == 8 ) {		
		resultado = dni [ 0 , 8 ]% 23 ;
		cout << " La letra de su DNI es la " << letras [resultado] << " y su DNI es el " << dni << letras [resultado] << " \ n " ;
	} más {
		cout << " Asegurese de haberlo escrito bien ... " ;}

}


int  main () {
	int opc;
	cout << " Introduzca que desea hacer: \ n \ n 1.Saber si su DNI es correcto. \ n 2.Saber la letra de su DNI. \ n :    " ; cin >> opc; cout << " \ n \ n " ;
	if (opc == 1 ) { corrector ();} else  if (opc == 2 ) { letra ();}
	cout << " \ n \ n \ n " ;
	sistema ( " pausa " );
	return  0 ;
}
