list = [4,2,7,8,1,2,5];
target = 8;

let search = -1; // Default value in case the target is not found

list.forEach((data, index) => {
    if (data === target && search === -1) {  // If found, and not already set
        search = index; // Set the search variable to the index
    }
});

console.log("The index of target is: ", search);


const searchUsingMethod = list.findIndex(data => data === target);

console.log("The index of target is:", searchUsingMethod);

let searchUsingFor;
for (let i = 0; i < list.length; i++) {
    if (list[i] === target) {
        searchUsingFor = i; // Update search with the index of the target
        break; // Exit loop once the target is found
    }
    else{
        searchUsingFor = -1;
    }
}

console.log("The index of target is: ", searchUsingFor);
