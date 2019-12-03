def isValid(s):
	
	array=list(set(s))
	f=[]
	for character in array:
		f.append(s.count(character))
	maximum=max(f)
	minimum=min(f)
	maxcount=f.count(maximum)
	mincount=f.count(minimum)
	if(maximum==minimum):
		#print('If executed')
		return 'YES'
	elif(mincount==1 and len(list(set(f)))<=2):
		#print('first if executed')
		return 'YES'
	elif((maximum-minimum)>1):
		#print('max-min executed')
		#print(maximum,' is maximum :::::',minimum,'  minimum is executed')
		return 'NO'
	else:
		if(maxcount>1):
	    		#print('elif executed')
	    		return 'NO'
		else:
	    		#print('else executed')
	    		return 'YES'

   
string='ibfdgaeadiaefgbhbdghhhbgdfgeiccbiehhfcggchgghadhdhagfbahhddgghbdehidbibaeaagaeeigffcebfbaieggabcfbiiedcabfihchdfabifahcbhagccbdfifhghcadfiadeeaheeddddiecaicbgigccageicehfdhdgafaddhffadigfhhcaedcedecafeacbdacgfgfeeibgaiffdehigebhhehiaahfidibccdcdagifgaihacihadecgifihbebffebdfbchbgigeccahgihbcbcaggebaaafgfedbfgagfediddghdgbgehhhifhgcedechahidcbchebheihaadbbbiaiccededchdagfhccfdefigfibifabeiaccghcegfbcghaefifbachebaacbhbfgfddeceababbacgffbagidebeadfihaefefegbghgddbbgddeehgfbhafbccidebgehifafgbghafacgfdccgifdcbbbidfifhdaibgigebigaedeaaiadegfefbhacgddhchgcbgcaeaieiegiffchbgbebgbehbbfcebciiagacaiechdigbgbghefcahgbhfibhedaeeiffebdiabcifgccdefabccdghehfibfiifdaicfedagahhdcbhbicdgibgcedieihcichadgchgbdcdagaihebbabhibcihicadgadfcihdheefbhffiageddhgahaidfdhhdbgciiaciegchiiebfbcbhaeagccfhbfhaddagnfieihghfbaggiffbbfbecgaiiidccdceadbbdfgigibgcgchafccdchgifdeieicbaididhfcfdedbhaadedfageigfdehgcdaecaebebebfcieaecfagfdieaefdiedbcadchabhebgehiidfcgahcdhcdhgchhiiheffiifeegcfdgbdeffhgeghdfhbfbifgidcafbfcd'
isValid(string)
