# HOW TO INSTALL

`git clone https://github.com/42Paris/minilibx-linux`
`cd minilibx-linux`
`sudo apt-get install libxext-dev libxrandr-dev libx11-dev libbsd-dev libssl-dev`
`sudo mv ./man/man1 /usr/local/man/`
`sudo mv ./mlx.h /usr/local/include/`
`make`
`sudo mv ./libmlx.a /usr/local/lib/`

> compile example

> clang -Wall -Wextra -Werror main.c -lbsd -lmlx lXext -lX11