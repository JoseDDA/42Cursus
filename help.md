Here’s a streamlined approach to implementing the `get_next_line` function in the easiest and most efficient way:

### Key Strategy Outline:
1. **Use a Static Variable**: Store any leftover data that was read from the file but not yet returned to ensure continuity across multiple calls to `get_next_line`.
2. **Read in Chunks**: Use the `read` function to read data from the file descriptor into a buffer in chunks of size `BUFFER_SIZE`.
3. **Manage Line Extraction**: Efficiently extract the next line from the stored data and return it to the caller.
4. **Memory Management**: Properly handle memory allocations and free unused memory to avoid leaks.
5. **Stop Conditions**: Handle end-of-file (EOF) and errors gracefully, ensuring that you return `NULL` when there's nothing more to read or when an error occurs.

### Most Important Functions to Implement:
1. **`get_next_line`**:
   - Main function that manages the reading and returning of the next line from the file descriptor.
   - Calls helper functions to read data, extract lines, and update the static buffer.
   
2. **Helper Functions**:
   - **`ft_read_to_buffer(int fd, char *buffer)`**: Reads data from the file descriptor into a buffer.
   - **`ft_extract_line(char **leftover)`**: Extracts a complete line from the static variable (or leftover data) and prepares the remainder for the next call.
   - **`ft_update_leftover(char *leftover, size_t newline_index)`**: Updates the leftover data after extracting a line.
   - **`ft_strjoin`**: Concatenates two strings, used to append new data to the static buffer.
   - **`ft_free`**: Handles memory deallocation to avoid leaks.

### Bullet-Point Steps:
1. **Initialize Static Variables**: Use a static variable to store leftover data from previous reads.
2. **Reading Data**:
   - If there is no leftover data, read a new chunk from the file into the buffer.
   - Keep appending new data to the static variable until a newline character (`\n`) is encountered.
3. **Extracting a Line**:
   - Use the `ft_extract_line` function to find the next newline character.
   - Return the extracted line, and update the static buffer for the next call using `ft_update_leftover`.
4. **Memory Management**:
   - Ensure that you free any dynamically allocated memory in case of errors or when all lines have been read.
5. **End-of-File Handling**:
   - When the end of the file is reached, return any remaining data that does not end with a newline character.
   - Return `NULL` if there is no more data to read.

This approach should help you structure your implementation efficiently and avoid common pitfalls like memory leaks or infinite loops.
