var city = [
  "Jabalpur",
  "Mumbai",
  "Pune",
  "Indore",
  "Delhi",
  "Ahemdabad",
  "Bhopal",
  "Mathura",
  "Kaanpur",
  "Banglore",
];

function getRandomCity() {
  var random = Math.floor(Math.random() * city.length);
  console.log(city[random]);
}
getRandomCity();
