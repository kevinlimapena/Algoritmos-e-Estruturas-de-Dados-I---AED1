
#include <stdio.h>
#include <stdbool.h>
int main(void) {
printf("char: %ld bytes\n", sizeof( char ) );
printf("unsigned char: %ld bytes\n", sizeof( unsigned char ) );
printf("short int: %ld bytes\n", sizeof( short ) );
printf("unsigned short int: %ld bytes\n", sizeof( unsigned short int ) );
printf("int : %ld bytes\n", sizeof( int ) );
printf("long int: %ld bytes\n", sizeof( long int ) );
printf("unsigned long int: %ld bytes\n", sizeof( unsigned long int ) );
printf("float: %ld bytes\n", sizeof( float ) );
printf("double: %ld bytes\n", sizeof( double ) );
printf("bool: %ld bytes\n", sizeof( bool ) );
printf("void: %ld bytes\n", sizeof( void ) );
return 0;
}