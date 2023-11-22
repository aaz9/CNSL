# Assignment - 5 - SHA Algorithm

import hashlib


def sha1(message):
    sha1_hash = hashlib.sha1(message.encode()).hexdigest()
    return sha1_hash


message = input("Enter message to be hashed : ")

hash_value = sha1(message)

print("SHA-1 Hash of Message : ", hash_value)
print("First 8 characters of hash : ", hash_value[:8])
