# Json-Web-Tokens

## Overview
JSON Web Tokens (JWTs) are an open, industry-standard method for representing claims securely between two parties. They are commonly used for authentication and information exchange in web applications. By using JWTs, developers can create stateless authentication systems, enabling users to log in once and maintain their session without the need for a server-side session store.

## About the Application
This desktop application, **Json-Web-Tokens**, is inspired by the popular JWT website [jwt.io](https://jwt.io/), which provides tools for decoding, verifying, and generating JWTs. Our application offers a user-friendly interface that simplifies the process of managing JWTs, allowing developers to generate tokens with customizable claims and validate existing tokens easily.

## Features
- Generate JWTs with various claims and customizable payloads.
- Validate existing JWTs to ensure their integrity and authenticity.
- Simple and intuitive interface built using the Qt framework.
- Supports multiple signing algorithms for flexibility.

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Json-Web-Tokens.git
   cd Json-Web-Tokens
2. If you have Qt Creator installed, open the project file (Json-Web-Tokens.pro) and build the project.

3. Alternatively, if you do not have Qt Creator, you can execute the pre-built file ```Json-Web-Tokens.exe``` located in the ```bin``` folder:

4. Ensure all necessary DLL files from the release folder are included in the same directory as the executable.

## Requirements
- Windows operating system
- Qt 6.7.2 or compatible version
- MinGW compiler (if building from source)
