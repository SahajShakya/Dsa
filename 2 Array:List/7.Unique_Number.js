function unique(arr) {
    let countDict = {};
    for (let num of arr) {
        countDict[num] = (countDict[num] || 0) + 1;
    }
    let uniqueElements = [];
    for (let num in countDict) {
        if (countDict[num] === 1) {
            uniqueElements.push(Number(num));
        }
    }

    console.log(uniqueElements);
}

const arr = [1, 2, 3, 4, 1, 2, 3];
unique(arr);
