# incluye  < iostream >
# include  < conio.h >
# incluye  < stdlib.h >

usando el  espacio de nombres  std ;
 
 int  main () {
 	Char matriz [ 3 ] [ 3 ];
 	para ( int i = 0 ; i < 3 ; i ++) {
 		para ( int j = 0 ; j < 3 ; j ++) {
 			matriz [i] [j] = ' A ' + ( rand ()% ( 3 ));
 		}
 	}
 	cout << " Esta es su nueva MATRIZ ... \ n \ n " ;
 	para ( int i = 0 ; i < 3 ; i ++) {
 		cout << "    " ;
 		para ( int j = 0 ; j < 3 ; j ++) {
 			cout << "  " << matriz [i] [j];
 		}
 		cout << " \ n " ;
 	}
 	getch ();
 	return  0 ;
 }
