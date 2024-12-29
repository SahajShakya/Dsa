list = [1,2,3,4,100,20,-10];

max = 0;
for(i=0;i<=list.length;i++){
    if (list[i]>max){
        max = list[i];
    }
}
console.log("The largest number is: ", max)

let randomMax = 0;
const maximum = list.map(
    (num) => {
        if (num > randomMax) {
            randomMax = num;
        }
    }
)
console.log("The largest number is: ", randomMax)

console.log("The largest number is: ", Math.max(...list));


let reduce_max = list.reduce((accumulator, currentValue) => {
    return Math.max(accumulator, currentValue);
}, list[0]);
console.log("The largest number is: ", reduce_max)


