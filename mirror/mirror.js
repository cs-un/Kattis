var t = parseInt(readline());
for(var run = 1; run <= t; ++run)
{
	var r = parseInt(readline());
	var text = [];
	for(var i = 0; i < r; ++i)
		text[i] = readline().split('').reverse().join('');
	print("Test " + run);
	for(var i = r - 1; i >= 0; --i)
		print(text[i]);
}