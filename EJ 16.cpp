# incluye  < iostream >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;

int  main () {
    const  char * unidades [] =
        { " primero " , " segundo " , " tercero " , " cuarto " , " quinto " , " sexto " ,
         " septimo " , " octavo " , " noveno " , " decimo " };
    const  char * decenas [] =
        { " decimo " , " vigesimo " , " trigesimo " , " cuadragesimo " ,
         " quintuagesimo " , " sexagesimo " , " septuagesimo " ,
         " octogesimo " , " nonagesimo " };
    const  char * centenas [] =
        { " centesimo " , " ducentesimo " , " tricentesimo " , " cuadringentesimo " ,
         " quingentesimo " , " sexcentesimo " , " septingentesimo " ,
         " octingentesimo " , " noningentesimo " };
    int numero;
    
    cout << " Introduzca su n�mero:   " ; cin >> numero; cout << " \ n \ n " ;
    int centena = int (numero / 100 );
    int decena = int ((numero-centena * 100 ) / 10 );
    int unidade = int (numero-centena * 100 -decena * 10 );
    
    cout << " El numero " << numero << " es igual a ' " << centenas [centena- 1 ] << "  " << decenas [decena- 1 ] << "  " << unidades [unidade- 1 ] << " ' \ n " ;
    
    cout << " \ n \ n " ;
    sistema ( " pausa " );
    return  0 ;
    }
