# 📝 get_next_line

## 📌 Description  
`get_next_line` is a function that reads a file descriptor **line by line** until the **end of the file (EOF)**. It efficiently handles both **file input and standard input (stdin)**, making it useful for scenarios where reading text incrementally is required.

## 🔍 How It Works  
- Reads from the file descriptor using `read()`, storing data in a **static buffer** to manage multiple file descriptors.  
- Dynamically allocates memory to return each line while ensuring **newline (`\n`) handling**.  
- Supports different **buffer sizes** via the `BUFFER_SIZE` macro, allowing flexible memory usage.

## ⚡ Features  
✅ Reads files and stdin line by line  
✅ Manages **multiple file descriptors** concurrently  
✅ Works with a **customizable `BUFFER_SIZE`**  
✅ Handles both **small and large files** efficiently 

### important part (explaining) :

#### https://www.tldraw.com/ro/WtqlEflAMSSMZvmwpwCoX?d=v-5764.-4029.10753.10928.page

