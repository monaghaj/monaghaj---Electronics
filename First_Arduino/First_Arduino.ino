//Joe Monaghan
//Lab 01

//Functions
void printHappy(String name) {
  String result = "Happy Birthday" + name;
  Serial.println(result); 
}
float computeArea(float wid, float hei) {
  float area = wid*hei;
}

void printGospels() {
  //Array
  String gospels [] = {"Mathew", "Mark", "Luke", "John"};
  Serial.println("The Gospels are: ");
  for (int i = 3; i > -1; i--) {
     Serial.println(gospels[i]);
  }
}
void printFavoriteMovieCharacters() {
  //Array
  String favoriteMovieCharacters [] = {"Russel Crow", "Jonah Hill", "Christian Bale", "Seth Rogen", "Maisie Williams"};
  Serial.println("My favorite movie charaters are: ");
  for (int i = 3; i > -1; i--) {
     Serial.println(favoriteMovieCharacters[i]);
  }
}
//void function2a(int x, int y) {
  //}
  void printFunction4(){
  int functionNumbers [] = {1,2,3,4,5,6,7,8};
  for (int i = 0; i<8; i++){
    Serial.println (functionNumbers[i]);
  }
  
  }
  
  //float findHypot(int a, int b) {
    //float c = sqrt(pow(a, 2) + pow(b, 2));
    //return c;
  //}
  
  
void setup(){
  Serial.begin(9600); //Start serial communication
  Serial.println("Hotty Toddy");
  Serial.println(computeArea(30, 40));
  Serial.println("I am Arduino and I comunicate at");
  Serial.println("9600 Baud rate. Ports 0 and 1 are used");
  Serial.println("for serial communication.");
  Serial.println("Serial communication works well for debugging");
  Serial.println("and monitoring sensor values during the");
  Serial.println("execution of a program.");
  printGospels();
  printFavoriteMovieCharacters(); 
  printFunction4();
  
  
}//end setup

void loop() {
}//end loop
