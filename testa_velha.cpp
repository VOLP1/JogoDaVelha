#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "velha.hpp"


TEST_CASE( "Testa velhax", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 1, 0 },
						  { 2, 0, 0 }
					  };
    REQUIRE(VerificaVelha(teste1) == 2 );

	int teste2[3][3]= {   { 0, 0, 2 }, 
	                      { 1, 0, 2 },
						  { 1, 1, 2 }
					  };
    REQUIRE(VerificaVelha(teste2) == 2 );

	int teste3[3][3]= {   { 1, 0, 0}, 
	                      { 1, 1, 0 },
						  { 2, 2, 2 }
					  };
    REQUIRE(VerificaVelha(teste3) == 2 );
}

TEST_CASE( "Testa velhay", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 1, 0 },
						  { 1, 0, 0 }
					  };
    REQUIRE(VerificaVelha(teste1) == 1 );

	int teste2[3][3]= {   { 0, 2, 2 }, 
	                      { 2, 0, 0 },
						  { 1, 1, 1 }
					  };
    REQUIRE(VerificaVelha(teste2) == 1 );

	int teste3[3][3]= {   { 0, 0, 2 }, 
	                      { 1, 1, 1 },
						  { 2, 2, 0 }
					  };
    REQUIRE(VerificaVelha(teste3) == 1 );
}

TEST_CASE( "Testa continua", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 0 },
						  { 1, 0, 0 }
					  };
    REQUIRE(VerificaVelha(teste1) == -1 );

	int teste2[3][3]= {   { 0, 2, 2 }, 
	                      { 2, 1, 0 },
						  { 1, 2, 1 }
					  };
    REQUIRE(VerificaVelha(teste2) == -1 );

	int teste3[3][3]= {   { 0, 0, 2 }, 
	                      { 1, 1, 0 },
						  { 2, 2, 0 }
					  };
    REQUIRE(VerificaVelha(teste3) == -1 );
}

TEST_CASE( "jogo impossivel", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 2, 1 }, 
	                      { 2, 2, 2 },
						  { 1, 2, 2 }
					  };
    REQUIRE(VerificaVelha(teste1) == -2 );

	int teste2[3][3]= {   { 1, 1, 1 }, 
	                      { 1, 1, 1 },
						  { 1, 1, 1 }
					  };
    REQUIRE(VerificaVelha(teste2) == -2 );

	int teste3[3][3]= {   { 1, 1, 1 }, 
	                      { 1, 1, 1 },
						  { 2, 2, 1 }
					  };
    REQUIRE(VerificaVelha(teste3) == -2);
}
TEST_CASE( "Testa empate", "[single-file]" ) {
	int teste1[3][3]= {   { 1, 2, 1 }, 
	                      { 1, 2, 2 },
						  { 2, 1, 2 }
					  };
    REQUIRE(VerificaVelha(teste1) == 0 );

	int teste2[3][3]= {   { 1, 2, 2 }, 
	                      { 2, 1, 1 },
						  { 2, 1, 2 }
					  };
    REQUIRE(VerificaVelha(teste2) == 0);
}

