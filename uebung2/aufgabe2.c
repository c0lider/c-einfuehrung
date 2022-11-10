
int main(){
    // a) falsch, wegen a
    beta = 3.2a;
    // b) auf der linken seite der zuweisung muss eine variable stehen
    5 * x = 25;
    // c) korrekt, wie "-="
    alpha = alpha - beta;
    // d) nicht erlaubt, da int keyword ist
    gamma = 7 * int;
    // e) korrekt
    z = 3 * y + x;
    // f) 3b kann nicht ausgewertet werden und 3b ist kein erlaubter name für eine variable
    a = 3b * 4 / c;
} 