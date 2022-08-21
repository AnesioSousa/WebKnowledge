/**
 * Um programa hello world em java
 * 
 * @author Anésio Neto
 * @version 1.0
 */
public class App {
    private String nome;
    private int matricula;
    public static void main(String[] args) throws Exception {
        App cu = new App("Camacho", 3562);
        Teste oswald = new Teste();

        System.out.println(cu.sayHi()); 
        System.out.println(cu.getNome());
        System.out.println(cu.getMatricula()); 

        oswald.setTamanho(12);

        System.out.println(oswald.getTamanho());

    }
    /**
     * Construtor da classe padrão
     * 
     */
    public App(String nome, int matricula){
        this.nome = nome;
        this.matricula=matricula;
    }

    public App(){}

    public String getNome(){
        return this.nome;
    }

    public int getMatricula(){
        return this.matricula;
    }

    /**
     * Método para dizer hello para o chamador
     * @return String dizendo "Hello"
     */
    public String sayHello(){
        return "Hello";
    }

    /**
     * Método para dizer hi para o chamador
     * @return String dizendo "Hi!"
     */
    public String sayHi(){
        return "Hi!";
    }
}
