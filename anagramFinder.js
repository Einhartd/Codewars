function anagrams(word, words) {
    var foundAnagrams = [];
    var wordForTesting;
    var wordToTest;
    var checkerForLength;
  
    for (let i = 0; i < words.length; i++)
      {
        checkerForSymbol = 0;
        checkerForLength = 0;
        wordForTesting = word.split("");
        wordToTest = words[i].split("");
        
        for (var j = 0; j < wordForTesting.length; j++)
          {
            console.log(wordForTesting);
            if (wordForTesting.length != wordToTest.length)
              {
                checkerForLength = 1;
                break;
              }
            
            for (let k = 0; k < wordToTest.length; k++)
              {
                console.log("j " + j);
                console.log("k " + k);
                
                if (wordForTesting[j] == wordToTest[k])
                  {
                    console.log("przed usuwaniem " + wordForTesting);
                    wordForTesting.splice(j, 1);
                    wordToTest.splice(k, 1);
                    j = -1;
                    k = 0;
                    break;
                  }
              }
          }
        if (checkerForLength == 0 && wordToTest.length == 0)
          {
            foundAnagrams.push(words[i]);
          }
  
      }
    console.log(foundAnagrams);
    return foundAnagrams;
}