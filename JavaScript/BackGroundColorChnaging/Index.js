
const btn1 = document.getElementById("btn1");
btn1.addEventListener("click", Changing);
let intervalId;
function Changing() {
  intervalId = setInterval(change1, 1000);
}
function change1() {
  let r = Math.floor(Math.random() * 256);
  let g = Math.floor(Math.random() * 256);
  let b = Math.floor(Math.random() * 256);

  let color1 = `rgb(${r},${g},${b})`;
  document.body.style.backgroundColor = `rgb(${r},${g},${b})`;
}
