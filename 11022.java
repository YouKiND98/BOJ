import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int testcase = sc.nextInt();
		for (int k = 0; k < testcase; k++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			System.out.println("Case #" + (k+1) + ": " + a + " + " + b + " = " + (a+b));
		}
	}

}
