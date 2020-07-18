public class Main {

	public static void main(String[] args) {
		int j=7,c=0;
		for (int i = 1; i <= 9; i+=2) {
			c=j-2;
			for (; j >= c; j--) {
				System.out.println("I="+i+" J="+j);				
			}
			j+=5;
		}
	}

}
