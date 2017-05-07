  
  #include "U8glib.h"
  
  // A linha abaixo define as ligacoes e deve ser 
  // ajustada conforme o display utilizado. 
  U8GLIB_ST7920_128X64_1X u8g(6, 5, 4 ,7); //Enable, RW, RS, RESET  
  int display = 1;  
   
  void u8g_prepare() 
  {  
  u8g.setFont(u8g_font_6x10);  
  u8g.setFontRefHeightExtendedText();  
  u8g.setDefaultForegroundColor();  
  u8g.setFontPosTop();  
  }  
  
  /*
  O display 128x64 é uma matriz, onde o ponto superior esquerdo 
  é o ponto 0,0 e o ponto inferior direito é o ponto 128,64.
  */
  
  void Tela1()  // Fontes  
  {
  u8g.setFont(u8g_font_unifont); 
  u8g.drawStr( 33, 32, "Fontes");
  u8g.drawStr( 34, 32, "Fontes");
  }
  
  void Tela2()  // Fontes  
  {
  u8g.setFont(u8g_font_04b_03);  // O comando setFonte representa o tipo de fonte.
  u8g.drawStr( 10, 8, "Fonte Pequena");
  /*
  O comando acima representa que a escrita vai começar a partir de 
  10 pontos da esquerda para direita e a 8 pontos de cima para 
  baixo.
  Para escrita o ponto inicial é o inferior esquerdo.
  */
  u8g.setFont(u8g_font_6x10);
  u8g.drawStr( 10, 22, "Fonte Media");  
  u8g.setFont(u8g_font_unifont); 
  u8g.drawStr( 10, 39, "Fonte Grande");
  u8g.setFont(u8g_font_unifont); 
  u8g.drawStr( 10, 57, "Fonte Bold");
  u8g.drawStr( 11, 57, "Fonte Bold");
  }
     
  void Tela3()  // Linhas  
  {
  u8g.setFont(u8g_font_unifont); 
  u8g.drawStr( 35, 32, "Linhas");
  u8g.drawStr( 36, 32, "Linhas");
  }
  
  void Tela4() // Linhas 
  {
  /*
  O comando abaixo vai criar uma linha a partir da esquerda 
  para a direita no ponto cinco e a partir de cima para baixo 
  no ponto 5 e vai até o ponto 123 da esquerda para a direita e
  no ponto cinco de cima para baixo.
  */
  u8g.drawLine(5, 5, 123, 5);
  u8g.drawLine(5, 10, 5, 49);
  u8g.drawLine(123, 10, 123, 49);
  u8g.drawLine(10, 10, 64, 49);
  u8g.drawLine(64, 49, 118, 10);
  u8g.drawLine(5, 55, 123, 55);
  }  
  
  void Tela5()  // Retangulos  
  {
  u8g.setFont(u8g_font_unifont); 
  u8g.drawStr( 25, 32, "Retangulos");
  u8g.drawStr( 26, 32, "Retangulos");
  } 

  /* 
  u8g.drawFrame(X, Y, L, A);
  Para criarmos um retângulo utilizando o comando acima, 
  devemos escolher o ponto onde vamos iniciar nosso retângulo, 
  que vai ser o ponto superior esquerdo, colocando as coordenadas
  X e Y, por exemplo  10,15 o nosso retângulo vai iniciar a 10
  pontos da esquerda para a direita e a 15 pontos de cima para 
  baixo o comando L representa a largura do retângulo, se L valer
  50 teremos um retângulo com 50 pontos de largura e A representa 
  altura do triangulo se A valer 20 teremos um retângulo de 20 
  pontos de altura.
  */

  void Tela6()  // Cantos Retos 
  {
  u8g.setFont(u8g_font_unifont); 
  u8g.drawStr( 17, 22, "Cantos Retos");
  u8g.drawFrame(3,3,121,58);
  u8g.drawFrame(13,28,102,30);
  }

  /* 
  u8g.drawrFrame(X, Y, L, A, C);
  Para criarmos um retângulo utilizando o comando acima, 
  é identico ao comando anterior, com a diferença de incluir
  o comando C que é o angulo da curva do cando do retângulo,
  quanto maior o numero, maior a curva do retângulo.
  */

  void Tela7()  // Cantos Curvos 
  {
  u8g.setFont(u8g_font_unifont); 
  u8g.drawStr( 12, 22, "Cantos Curvos");
  u8g.drawRFrame(3,3,121,58,8);
  u8g.drawRFrame(13,28,102,30,5);
  }
  
  void Tela8() // Retangulo Preenchido  
  {
  u8g.setFont(u8g_font_unifont);
  u8g.drawBox(0,0,128,64);
  u8g.setColorIndex(0); 
  /*
  O acima comando inverte a cor da escrita para que seja visto em um 
  retângulo preenchido, senão não veriamos algo ecrito dentro dele.
  */
  u8g.drawStr( 30, 25, "Retangulo");  
  u8g.drawStr( 26, 50, "Preenchido");
  }
  
  void Tela9()  // Circulos  
  {
  u8g.setFont(u8g_font_unifont); 
  u8g.drawStr( 33, 32, "Circulos");
  u8g.drawStr( 34, 32, "Circulos");
  /*
  O comando acima foi deslocado 1 ponto para a direita para dar o
  efeito de Negrito.
  */
  }
 
  void Tela10()  // Circulos  
  {
  u8g.drawCircle(64,32,30); 
  /*
  O comando acima representa que vamos criar um circulo com 
  o centro no ponto 64 da esquerda para a direita e no ponto 32
  de cima para baixo, com um raio de 30 pontos
  */
  }

  void Tela11()  // Diversos 
  {
  u8g.setFont(u8g_font_04b_03);
  u8g.drawRFrame(5,1,119,12,3);
  u8g.drawStr( 10, 10, "abcdefghijklmnopqrstuvxz");
  u8g.setFont(u8g_font_04b_03);
  u8g.drawFrame(5,17,119,12);
  u8g.drawStr( 9, 26, "ABCDEFGHIJKLMNOPQRSTUVXZ"); 
  u8g.drawCircle(20,46,13); 
  u8g.drawLine(40, 33, 40, 61);
  u8g.drawLine(50, 33, 50, 61);
  u8g.drawLine(60, 33, 60, 61);
  u8g.drawLine(70, 33, 125, 33);
  u8g.drawLine(70, 38, 125, 61);
  } 

  void draw() //Rotina Desenho  
  {
  u8g_prepare();  
  switch(display) //Carrega a tela correspondente  
  {
  case 1:  
  Tela1();  
  break;  
  case 2:  
  Tela2();  
  break;  
  case 3:  
  Tela3();  
  break; 
  case 4:  
  Tela4();  
  break; 
  case 5:  
  Tela5();  
  break; 
  case 6:  
  Tela6();  
  break;
  case 7:  
  Tela7();  
  break;
  case 8:  
  Tela8();  
  break;
  case 9:  
  Tela9();  
  break;
  case 10:  
  Tela10();  
  break;
  case 11:  
  Tela11();  
  break;
  }  
  } 
  
  void setup() 
  {  
  if ( u8g.getMode() == U8G_MODE_R3G3B2 )   
   u8g.setColorIndex(255);   // white  
  else if ( u8g.getMode() == U8G_MODE_GRAY2BIT )  
   u8g.setColorIndex(1);     // max intensity  
  else if ( u8g.getMode() == U8G_MODE_BW )  
   u8g.setColorIndex(1);     // pixel on  
    
  u8g.setContrast(0x30);  
  }  
   
  void loop() 
  {  
  // picture loop   
  for (display =1; display < 12; display++) //Carrega as telas de 1 a 7  
  {  
  u8g.firstPage();   
  do 
  {  
  draw();  
  } 
  while( u8g.nextPage() );  
  delay(4000);  //Pausa de 4 segundos entre as telas.  
  }  
  }     
