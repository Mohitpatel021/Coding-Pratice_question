class StudentData {
  constructor(name, age) {
    this.name = name;
    this.age = age;
  }
  submit(params) {
    console.log(
      this.newname + " " + this.newage + " your form is successfully submited"
    );
  }
  cancel(params) {
    console.log("unfortunately!! Your form is Not submited");
  }
  /*
  fil(name, age) {
    this.newname = name;
    this.newage = age;
  }
  */
}

/*
let mohit = new StudentData();
mohit.fil("Mr.mohit", 21);
mohit.submit();
mohit.cancel();

let aagman = new StudentData();
aagman.fil("Mr.aagman", 23);
aagman.submit();
aagman.cancel();
*/

let mohit = new StudentData("Mohit", 21);
mohit.submit();
mohit.cancel();
