basename $(find . -name "*.sh") | sed 's/\.sh//' | cut -d'/' -f2
