class Parent {

  public void mohit() {
    System.out.println("mohit class called");
  }
}

class Child extends Parent {

  public void om() {
    System.out.println("Om class called");
  }
}

public class Main {

  public static void main(String[] args) {
   Child p = new Child();
    p.om();
  }
}
