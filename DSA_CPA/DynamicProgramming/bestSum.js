// unfinished

const bestSum = (targetSum, numbers) => {
	if (targetSum === 0) {
		return [];
	}
	if (targetSum < 0) {
		return null;
	}
	let shortestCombination = null;

	for (let num of numbers) {
		const reminder = targetSum - num;
		const reminderCombination = bestSum(reminder, numbers);
		if (reminderCombination !== null) {
			const combination = [ ...reminderCombination, num];
			if (
				shortestCombination === null ||
				combination.length < shortestCombination.length
			) {
				shortestCombination = combination;
			}
		}
	}
	return shortestCombination;
};


console.log(bestSum(7,[5,3,4,7]));
console.log(bestSum(8,[2,3,5]));
console.log(bestSum(8,[1,4,5]));
console.log(bestSum(100,[1,2,5,25]));// this will take decades to finish
