
#!/bin/bash
cat /etc/passwd | grep -v '^#' | awk 'NR > 1' | awk 'NR%2' | cut -d ':' -f1 | rev | sort -r | sed -n " FT_LINE1 , FT_LINE2 p" | sed 's/$/,/' | tr '\n' ' ' | sed 's:, *$:.:g' | tr -d '\n'
