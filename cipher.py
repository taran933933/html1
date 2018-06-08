text= "abcd"
shift= 3

key = "abcdefghijklmnopqrstuvwxyz"

def encrypt(text,shift):

	result=''
	for char in text:
			i=(key.index(char) + shift) % 26
			result += key[i]

	return result
text2 = encrypt(text,shift)

def decrypt(text2,shift):
	result1=''
	for char in text2:
			i=(key.index(char) - shift) % 26
			result1 += key[i]

	return result1



print ("the encryptd code is", text2)
print ("the decrypted code is", decrypt(text2,shift))