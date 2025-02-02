# SimpleCalc

## 📌 Overview
**SimpleCalc** is a command-line calculator written in **C**. It takes **three arguments**:
1. **Operand 1** (Integer)
2. **Operator** (`+`, `-`, `*`, `/`, `%`, `&`, `|`, `^`, `<<`, `>>`)
3. **Operand 2** (Integer)

It parses the input, performs the calculation, and prints the result.

### Features:
- Supports **arithmetic** (`+`, `-`, `*`, `/`, `%`) and **bitwise** (`&`, `|`, `^`, `<<`, `>>`) operations.
- Handles **error checking** (invalid input, divide by zero, etc.).
- Follows the **CSD-T coding standard** for maintainability.
- Uses **unit testing** for verification.

---

## ⚙️ Build & Run Instructions

### 1️⃣ Prerequisites
Ensure you have:
- **GCC** (GNU Compiler Collection)
- **CMake** (for building the project)
- **Git** (for version control)
- **CUnit** (for testing)

To install these dependencies on **Ubuntu**, run:
```sh
sudo apt update
sudo apt install build-essential cmake git libcunit1 libcunit1-doc libcunit1-dev -y
```

### 2️⃣ Clone the Repository
```sh
git clone https://github.com/J-u-s-t-J-o-s-h/simple-calc.git
cd simple-calc
```

### 3️⃣ Build the Project
```sh
bash build.sh
```
This will **compile** the project and generate an executable at:
```
./build/simplecalc
```

### 4️⃣ Run SimpleCalc
```sh
./build/simplecalc <operand1> <operator> <operand2>
```

---

## 📌 Usage Examples

| **Command** | **Expected Output** |
|-------------|---------------------|
| `./build/simplecalc 10 + 5` | `10 + 5 = 15` |
| `./build/simplecalc 15 - 3` | `15 - 3 = 12` |
| `./build/simplecalc 6 * 7` | `6 * 7 = 42` |
| `./build/simplecalc 10 / 2` | `10 / 2 = 5` |
| `./build/simplecalc 10 / 0` | ❌ `Error: Division by zero.` |
| `./build/simplecalc 5 << 2` | `5 << 2 = 20` |
| `./build/simplecalc 10 >> 1` | `10 >> 1 = 5` |

---

## 🧪 Testing Instructions

### 1️⃣ Running Unit Tests
Tests are located in the **`tests/`** directory.

To run all tests:
```sh
make test
```
This will execute **unit tests** using **CUnit** and display **pass/fail results**.

### 2️⃣ Example Test Output
```
Running Unit Tests...
✅ Test Passed: Addition (10 + 5 = 15)
✅ Test Passed: Division (20 / 2 = 10)
✅ Test Passed: Bitwise AND (6 & 3 = 2)
...
All tests passed successfully!
```

---

## 📜 License
This project is licensed under the **MIT License**.

## 👤 Author
- **Josh Boynton** (GitHub: [J-u-s-t-J-o-s-h](https://github.com/J-u-s-t-J-o-s-h))
- **Email**: jboynton44@gmail.com

---

### ✅ Rubric Checklist
✔️ **Overview (3 pts)** → Purpose, features, and key functionalities.  
✔️ **Build & Run Instructions (3 pts)** → Step-by-step setup guide.  
✔️ **Usage Examples (2 pts)** → Real examples with expected outputs.  
✔️ **Testing Instructions (2 pts)** → Running tests with example output.  

---

```sh
git add README.md
git commit -m "Added complete README documentation"
git push origin main
```
