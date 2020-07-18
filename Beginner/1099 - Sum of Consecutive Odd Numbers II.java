import java.util.Scanner;

public class Main {

	private static Scanner scan;

	public static void main(String[] args) {
		
		int n,x,y;
		int a[] = new int[10000];
		
		scan = new Scanner(System.in);
		n=scan.nextInt();
		
		for (int i = 0; i < n; i++) {
			x=scan.nextInt();
			y=scan.nextInt();
			if(y>x){
				x+=y;
				y=x-y;
				x=x-y;
			}
			
			a[i]=0;
			for (int j = y+1; j < x; j++) {
				if(j%2==1)
					a[i]+=j;
				
			}
			
		}
		for (int i = 0; i < n; i++) {
			System.out.println(a[i]);
			
		}

	}

}
