# Initialize temperature in Celsius
celsius_temperature = 100

# Start a loop to find the temperature where Celsius and Fahrenheit are equal
while True:
    # Compute the corresponding temperature in Fahrenheit
    fahrenheit_temperature = (celsius_temperature * 9/5) + 32

    # Check if the temperatures are equal
    if int(celsius_temperature) == int(fahrenheit_temperature):
        break  # Exit the loop if temperatures are equal
    else:
        celsius_temperature -= 1  # Decrement the Celsius temperature

# Print the temperature that is the same in both Celsius and Fahrenheit
print(f"The temperature that is the same in both Celsius and Fahrenheit is: {int(celsius_temperature)} degrees.")