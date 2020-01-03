
public class Methodes {
	
	private short s;
	private int i;
	private long l;
	
	
	public static int somme(short nombre1, short nombre2){
		   return (nombre1 + nombre2) ;
		}
	
	public static long produit(long nmb1, long nmb2)
	{
		return nmb1*nmb2;
	}
	
    public static int fact(int s)
	{
		
		for(int i=s-1;i>=1;i--)
		{
		  	s=s*i;
		}
		
		return s;
	}
    
    
    public static void paire(int p)
    {
    	if (p%0==0)
    	{
    		System.out.println("le nombre est paire");
    	}
    	else
    	{
    	 System.out.println("le nombre est impaire");
    	}
    }
	
	

	public static void main(String[] args) {
		int i=10;
		short s=3;
		short s1=5;
		long l=100;
		long l2=10;
		System.out.println(somme(s,s1));
		System.out.println(produit(l,l2));
		System.out.println(fact(i));
		paire(10);
	}

}
