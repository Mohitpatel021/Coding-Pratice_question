var studentInformation = {
  name: "Mohit",
  age: 23,
  surName: "Patel",
  doB: "21/02/2002",
};
/*
console.log(studentInformation.name);
console.log(studentInformation["name"]);

*/
//updating the value
studentInformation.name = "Vishal";
console.log(studentInformation.name);
//deleting the dob field
delete studentInformation.doB;
console.log(studentInformation);

//checking the type of field
let s = "mohit";

console.log(typeof s);
console.log(typeof studentInformation);

//nested object

var studentobj = {
  obj1: {
    name1: "aagman",
    surname: "Patel Saab",
    subobj1: {
      batch: "java",
      24: "mera batch",
    },
  },
  obj2: {
    age: 23,
  },
  obj3: {
    City: "jabalpur",
  },
};
console.log("surname key is printerd");
console.log(studentobj.obj1.surname);
console.log("batch key is printerd");
//console.log(studentobj["obj1"]["subobj1"]["batch"]);
console.log(studentobj["obj1"]["subobj1"].batch);
console.log("24 key is printerd");
console.log(studentobj.obj1.subobj1, 24);
console.log("24 key is printerd 2nd time");
console.log(studentobj["obj1"]["subobj1"][24]);

console.log(studentobj.obj1.subobj1);
