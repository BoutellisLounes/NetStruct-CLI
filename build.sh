```bash
#!/bin/bash
echo "🔨 Compiling NetStruct-CLI..."
gcc src/main.c src/cli_user.c src/ip_calc.c -Iinclude -Wall -Wextra -o netstruct
echo "✅ Compilation completed! You can run ./netstruct.exe"
```
