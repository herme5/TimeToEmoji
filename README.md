# TimeToEmoji

For Mac OSX supporting emojis, you can display the hours (🕙) as emojis in your custom terminal.

1. Compile main.cpp and add the binary to /usr/local/bin

2. Edit your bashrc (or zsh-theme) file.
Mine looks like that :


```sh
...
function emojiTime() {
time2emoji
}

PROMPT='%{$reset_color%}$(emojiTime)  '
...
```

Assuming time2emoji is the built binary from step 1.
