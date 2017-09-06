public class Programa {

    public static void main(String[] args) {


        Conta minhaConta = new Conta();
		minhaConta.dono = "William";
		minhaConta.saldo = 500 ;
		minhaConta.numero = 101215;

		/*minhaConta.deposit(800);
		minhaConta.sacar(50);*/

		System.out.println(minhaConta.dono);
		System.out.println(minhaConta.numero);
		System.out.println(minhaConta.saldo);
    }

}
