

document.addEventListener("keydown", function (event) {
  if (event.key === "b") {
    let r = Math.floor(Math.random() * 256);
    let g = Math.floor(Math.random() * 256);
    let b = Math.floor(Math.random() * 256);
    let color1 = `rgb(${r},${g},${b})`;
    document.body.style.backgroundColor = `rgb(${r},${g},${b})`;
  } 
  else if (event.key === "q") {
    
    const quotes = [
      "The only way to do great work is to love what you do. - Steve Jobs",
      "In three words I can sum up everything I've learned about life: it goes on. - Robert Frost",
      "The only limit to our realization of tomorrow will be our doubts of today. - Franklin D. Roosevelt",
      "Dreams start with sleep, And reality starts with Action",
      "Don't Wish for it, Work for it",
      "Live what you love",
      "We all are works in progress",
      "You must be the chnage you wish to see in the world",
      "You are enough as just you are",
      "If you cant't find a way , create one!!",
      "i never lose Either i win or Learn",
      "Smile, Life is too short to be unhappy!!",
      "Dreams don't work unless you do!!",
    ];
    const randomIndex = Math.floor(Math.random() * quotes.length);
    const randomQuote = quotes[randomIndex];
    alert(randomQuote);
  } 
  else if (event.key == "e") {
    let randomEmojiSeries = Math.floor(
      Math.random() * (128512 - 128567 + 1) + 128567
    );
    let newRandomEmojiSeries = "&#" + randomEmojiSeries.toString();
    document.getElementById("divcontainer").innerHTML = newRandomEmojiSeries;
  } 
  else if (event.key == "a") {
    const audioClips = [
      new Audio("Ringtone1.mp3"),
      new Audio("Ringtone2.mp3"),
      new Audio("Ringtone3.mp3"),
      new Audio("Ringtone4.mp3"),
      new Audio("Ringtone5.mp3"),
    ];
    const randomAudioIndex = Math.floor(Math.random() * audioClips.length);
    const randomAudio = audioClips[randomAudioIndex];
    randomAudio.play();
  }
   else if (event.key === "c") {
    const paragraph = document.getElementById("content");
    paragraph.textContent = 'Text changed! You pressed "c".';
  } 
  else if ((event.key = "r")) {
    let rotationDegree = 0;
    const rotatingElement = document.getElementById("rotating-element");
      rotationDegree += 45;
      rotatingElement.style.transform = `rotate(${rotationDegree}deg)`;
  }
});
