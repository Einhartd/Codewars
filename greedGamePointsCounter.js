function score( dice ) {
    var value = 0;
    let numbers = {
      1: 0,
      2: 0,
      3: 0,
      4: 0,
      5: 0,
      6: 0
    }
    let values = {
      1: 1000,
      2: 200,
      3: 300,
      4: 400,
      5: 500,
      6: 600
    }
    for (let i = 1; i < 7; i++) {
      let test = dice.filter(x=>x===i).length
      numbers[i] = test
    }
    for (let j = 1; j < 7; j++){
      if (j !== 1 && j !== 5){
        var countedThrees = Math.floor(numbers[j]/3);
        value += countedThrees * values[j];
      }
      else if (j === 1){
        var countedThrees = Math.floor(numbers[j]/3);
        var restOfOnes = numbers[j] - countedThrees * 3;
        value += countedThrees * values[j] + restOfOnes * 100;
      }
      else if (j === 5){
        var countedThrees = Math.floor(numbers[j]/3);
        var restOfOnes = numbers[j] - countedThrees * 3;
        value += countedThrees * values[j] + restOfOnes * 50;
      }
    }
    return value
    console.log(value);
  }