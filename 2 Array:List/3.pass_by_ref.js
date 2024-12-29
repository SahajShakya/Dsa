function changeArr(arr) {
    // Pass by reference (mutable object - array)
    for (let i = 0; i < arr.length; i++) {
        arr[i] = 2 * arr[i];
    }
}

let arr = [1, 2, 3];
changeArr(arr);  // Modifies the original array
arr.forEach(num => console.log(num));
