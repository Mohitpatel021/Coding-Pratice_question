const btn = document.getElementById("say");
btn.addEventListener("click", handle);

function handle() {
  var name = document.getElementById("name").value;
  var age = document.getElementById("age").value;
  var address = document.getElementById("address").value;
  var disease = document.getElementById("disease").value;

  var doctor = "";

  switch (disease.toLowerCase()) {
    case "bonesujan":
    case "fracture":
      doctor = "Orthopedic Specialist";
      break;
    case "fever":
    case "cough":
    case "cold":
      doctor = "General Physician";
      break;
    case "teethpain":
    case "teethdecaying":
      doctor = "Dentist";
      break;
    default:
      doctor = "General Physician";
  }
  var context = { name: name, disease: disease, doctortype: doctor };
  localStorage.setItem("patientInfo", JSON.stringify(context));
  var template = document.getElementById("text-template").innerHTML;
  var compiledTemplate = Handlebars.compile(template);
  var html = compiledTemplate(context);
  document.getElementById("result").innerHTML = html;
}

document.addEventListener("DOMContentLoaded", function () {
  var savedInfo = localStorage.getItem("patientInfo");

  if (savedInfo) {
    var context = JSON.parse(savedInfo);
    var template = document.getElementById("text-template").innerHTML;
    var compiledTemplate = Handlebars.compile(template);
    var html = compiledTemplate(context);
    document.getElementById("result").innerHTML = html;
  }
});
