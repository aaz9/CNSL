from cryptography.fernet import Fernet

key = Fernet.generate_key()
cipher_suite = Fernet(key)


input_img_path = input("Enter Image path : ")
with open(input_img_path, "rb") as file:
    img_data = file.read()

ecrypted_data = cipher_suite.encrypt(img_data)

encrypt_file_path = "encrypted_img.bin"
with open(encrypt_file_path, "wb") as file:
    file.write(ecrypted_data)

print("Image encrypted and saved as 'encrypted_image.bin'. Transmit this file securely.")

decrypt_data = cipher_suite.decrypt(ecrypted_data)

decrypted_file_path = "decrypted_img.jpg"
with open(decrypted_file_path, "wb") as file:
    file.write(decrypt_data)

print("Image decrypted and saved as 'decrypted_image.jpg'.")
