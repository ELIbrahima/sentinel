# Git cheatsheet

## Every change

git status
git add .
git commit -m "type: message"
git push

## Undo

- Broken file, not committed: git restore <file>
- See history: git log --oneline
- Cancel a pushed commit: git revert <id> then git push

## Message types

- feat: new feature
- fix: bug fix
- docs: documentation only