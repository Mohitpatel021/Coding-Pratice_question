const User_info="https://api.github.com/users/Mohitpatel021";
console.log(User_info);
const Info_Promise=fetch(User_info);

console.log(Info_Promise);
Info_Promise.then(callKroBhai);

function callKroBhai(){
    console.log("Haa bhai kr diya humne promise");
}