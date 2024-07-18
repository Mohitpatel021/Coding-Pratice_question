var a = 10;
let b = 12;
const c = 11;
//declaring a function here
function myfunction() {
  console.log("the sum of  variable is " + b);
  console.log("the sum of  variable is " + c);
  console.log("the sum of  variable is " + a);
}
//here we are trying to chnge the constant variable
//c = 55;
//calling function
myfunction();

const rectangleArea1 = (a, b) => {
  let area = a * b;
  console.log(area);
};

rectangleArea1(a, b);

function newfunction(p, q) {
  console.log(p + q);
}
newfunction(2, 2);
