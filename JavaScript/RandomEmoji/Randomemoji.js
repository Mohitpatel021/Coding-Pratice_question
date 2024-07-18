const btn1 = this.document.getElementById("btn");
const divout = this.document.getElementById("divcontainer");
btn1.addEventListener("click", emojiShow);

function emojiShow() {
  let randomEmojiSeries = Math.floor(
    Math.random() * (128512 - 	128567 + 1) + 	128567
  );
  let newRandomEmojiSeries = "&#" + randomEmojiSeries.toString();
  document.getElementById("divcontainer").innerHTML = newRandomEmojiSeries;
}
