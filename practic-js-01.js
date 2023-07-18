import static java.lang.Math.cos;
import static java.lang.Math.sin;
public static void main(String[] args) {
    int a = 30;
    double rad;
    public void print(){ 
        rad = Math.toRadians(a); 
        System.out.print("sin= " + sin(rad));
        System.out.print("cos =" + cos(rad));
    }
}
