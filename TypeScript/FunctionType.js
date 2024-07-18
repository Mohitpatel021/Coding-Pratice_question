function add() {
    if (Math.random() < 0.5) {
        return 40;
    }
    else {
        return "Hello";
    }
}
console.warn(add());
