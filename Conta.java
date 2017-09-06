public class Conta {

    int numero;

	String dono;
	
	double saldo;

	public void deposit(double valor){
		this.saldo += valor;
	}

	public void sacar(double valor){
		this.saldo -= valor;
	}
}
