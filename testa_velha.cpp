#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "velha.hpp"


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );


}
