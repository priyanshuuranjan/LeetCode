function chunk(inputArray, chunkSize) {
  const chunks = [];
  for (let i = 0; i < inputArray.length; i += chunkSize) {
    const chunk = [];
    for (let j = i; j < Math.min(i + chunkSize, inputArray.length); j++) {
      chunk.push(inputArray[j]);
    }
    chunks.push(chunk);
  }
  return chunks;
}