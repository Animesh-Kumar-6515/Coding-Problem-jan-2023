abstract class Vehicle{
	abstract void start();

}
class car extends Vehicle{
	void start(){
		System.out.println("car starts with key ");
	}
}
class scooter extends Vehicle{
	void start(){
		System.out.println("scooter starts with kick ");
	}
	public static void main(String[] args) {
		car c=new car();
		c.start();
	}
}