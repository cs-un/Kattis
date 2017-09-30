var num = parseInt(readline());
while(num-- > 0)
{
	var s1 = readline();
	var s2 = readline();
	var s3 = '';
	for(var i = 0; i < s1.length; ++i)
	{
		if(s1[i] != s2[i])
			s3+="*";
		else
			s3+=".";
	}
	print(s1);
	print(s2);
	print(s3);
	print();
}