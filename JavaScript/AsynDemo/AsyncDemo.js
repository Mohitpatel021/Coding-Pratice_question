console.log("i am 1");
console.log("i am 2");

function f1() {
  var x = f1sub();
}
function f1sub() {
  for (var i = 0; ; i++) {
    console.log(i);
  }
}
console.log("i am last");
f1();
