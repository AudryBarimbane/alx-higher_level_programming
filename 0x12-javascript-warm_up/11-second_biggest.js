#!/usr/bin/node
if (process.argv.length <= 3) {
  console.log(0);
} else {
  const n = process.argv.map(Number)
    .slice(2, process.argv.length)
    .sort((a, b) => a - b);
  console.log(n[n.length - 2]);
}

