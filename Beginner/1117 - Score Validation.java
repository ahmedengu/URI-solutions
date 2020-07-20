import java.util.Scanner;

public class Main {
	
	
	public static void main(String[] args) {
		float a=0,c[]=new float[10000];
		int i=-1,y=0;
		Scanner s=new Scanner(System.in);
		do {
			i++;
			c[i]=s.nextFloat();
			if(c[i]>=0&&c[i]<=10){
				if(y==0)
					a=c[i];
				else
					a=(a+c[i])/2;
				y++;
			}
			
		} while (y!=2);
		s.close();
		for(i=0;;i++){
			if(!(c[i]>=0&&c[i]<=10))
				System.out.println("nota invalida");
			else if(c[i]>=0&&c[i]<=10&&y==2)
				y++;
			else if(c[i]>=0&&c[i]<=10&&y==3){
				System.out.printf("media = %.2f\n", a);
				break;}
		}
	}

}
