import java.util.Scanner;

public class Main {
	
	private static Scanner s;
	
	public static void main(String[] args) {
		int n[] = new int[10000],y,i=-1,x;
		s=new Scanner(System.in);
		do {
			i++;
			x=s.nextInt();
			y=s.nextInt();
			if(x<y)
				n[i]=1;
			else
				n[i]=0;
		} while (x!=y);
		
		for (int j = 0; j < i; j++) {
			if(n[j]==1)
				System.out.println("Crescente");
			else
				System.out.println("Decrescente");
		}
	}

}
