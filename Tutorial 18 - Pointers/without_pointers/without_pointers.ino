void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  String var = "Hello E&E!";
  add_subscribe(var);
}

void loop() {
  // put your main code here, to run repeatedly:
}

void add_subscribe(String var_temp) {
  String final_var = var_temp + " Subscribe!";
  Serial.println();
  Serial.println(final_var);
}
      