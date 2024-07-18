const btn1 = this.document.getElementById("btn");
btn1.addEventListener("click", showqoute);

function showqoute() {
  const q1 = "Dreams start with sleep, And reality starts with Action";
  const q2 = "Don't Wish for it, Work for it";
  const q3 = "Live what you love";
  const q4 = "We all are works in progress";
  const q5 = "You must be the chnage you wish to see in the world";
  const q6 = "You are enough as just you are";
  const q7 = "If you cant't find a way , create one!!";
  const q8 = "i never lose Either i win or Learn";
  const q9 = "Smile, Life is too short to be unhappy!!";
  const q10 = "Dreams don't work unless you do!!";

  let random = Math.floor(Math.random() * 10 + 1);
  console.log(random);
  switch (random) {
    case 1:
      document.body.innerText = q1;
      break;
    case 2:
      document.body.innerText = q;
      break;
    case 3:
      document.body.innerText = q4;
      break;
    case 5:
      document.body.innerText = q5;
      break;
    case 6:
      document.body.innerText = q6;
      break;
    case 7:
      document.body.innerText = q7;
      break;
    case 8:
      document.body.innerText = q8;
      break;
    case 9:
      document.body.innerText = q9;
      break;
    case 10:
      document.body.innerText = q10;
      break;
  }
}
