find . -name "*.sh" \( -type f \) | rev | cut -d / -f 1 | rev | cut -d . -f 1
