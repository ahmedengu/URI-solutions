import java.util.Scanner;

public class Main {
	
	private static Scanner s;
	
	public static void main(String[] args) {
		int x,i=0;
		s=new Scanner(System.in);
		do {
			x=s.nextInt();
			i++;
		} while (x!=2002);
		for(;i>1;i--){
			System.out.println("Senha Invalida");
		}
		if(x==2002)
		System.out.println("Acesso Permitido");
	}

}
