import pikepdf
from tqdm import tqdm

# load password list
passwords = [ line.strip() for line in open("8412968323.txt") ]

# iterate over passwords
for password in tqdm(passwords, "Decrypting PDF"):
    try:
        # open PDF fi
        with pikepdf.open("foo-protected.pdf", password=password) as pdf:
            # Password decrypted successfully, break out of the loop
            print("[+] Password found:", password)
            break
    except pikepdf._core.PasswordError as e:
        # wrong password, just continue in the loop
        continue