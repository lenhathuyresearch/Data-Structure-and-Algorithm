// Cách tính n số tự nhiên đầu tiên
function tong_using_for(n)
{
	let s = 0;
	for (let i = 1; i <= n; ++i) /// T(n) = O(n)
		s += i;
	return s;
}


/// Using công thức

function tong_using_formula(n)
{
	return n*(n+1)/2;
}


/// Using recursion
function tongUsingRecursion(n) {
	if (n == 0)
		return n;
	return n+tongUsingRecursion(n-1);
}


test = [1, 5, 10, 15, 100, 200];

console.log("T(n) = O(1) khi dùng các công thức");
test.forEach(value => {console.log(tong_using_formula(value));});

console.log("T(n) = O(n) khi dùng vòng lặp");
test.forEach(value => {console.log(tong_using_for(value));});

console.log("T(n) = O(n) và S(n) = O(n) khi dùng đệ quy");
test.forEach(value => {console.log(tongUsingRecursion(value));});

