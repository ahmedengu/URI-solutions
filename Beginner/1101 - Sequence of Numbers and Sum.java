import java.util.Scanner;

public class Main {

	
	private static Scanner scan;

	public static void main(String[] args) {
		
		int x[]=new int[10000],y[]=new int[10000],s=0,i=-1;
		scan = new Scanner(System.in);
		do {
			i++;
			x[i]=scan.nextInt();
			y[i]=scan.nextInt();
			
		} while (x[i]>0&&y[i]>0);
		
		for (int c=0; c<i; c++) {
			s=0;
			if(x[c]>y[c]){
				x[c]+=y[c];
				y[c]=x[c]-y[c];
				x[c]=x[c]-y[c];
			}
			for (int j = x[c]; j <= y[c]; j++) {
				System.out.print(j+" ");
				s+=j;
			}
			System.out.println("Sum="+s);
		}
	}

}
