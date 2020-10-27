# Document Templates

This repository meant to store all our plain text document templates.
Feel free to check it out, and start using/improving it.

The general rules are the following:

* Use spell checker.
* Keep 80 characters limit.
* Use markdown lint when adding or editing markdown documents.
* Always render the template before pushing any changes.

## Getting Started

1. Clone the repository or download the needed templates directly from the
    bitbucket.

```bash
git clone ssh://git@bitbucket.hensoldt-cyber.systems:7999/hc/doc_templates.git
```

2. Copy needed templates to your repo and start editing.
3. Generate documentation and check the results.

```bash
doxygen
xdg-open build/html/index.html
```

4. Update the desired template or add a new one.
5. Create a pull request.

### Markdown

For documents formated in markdown the following tools are recommended:

* [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
* Visual Studio Plugins
  * [Markdown PDF](https://marketplace.visualstudio.com/items?itemName=yzane.markdown-pdf)
  * [markdownlint](https://marketplace.visualstudio.com/items?itemName=DavidAnson.vscode-markdownlint)
  * [Markdown Preview Enhanced](https://marketplace.visualstudio.com/items?itemName=shd101wyy.markdown-preview-enhanced)
* [PlantUML](https://marketplace.visualstudio.com/items?itemName=jebbs.plantuml)
* [Doxygen](http://doxygen.nl/)
* [Notable standalone editor](https://notable.md/)

### Dependencies

N/A
