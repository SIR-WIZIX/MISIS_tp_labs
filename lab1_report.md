## Создание репозитория

```bash
cd projects
mkdir MISIS_tp_labs && cd MISIS_tp_labs
git init
```

Добавление README.md с помощью ```nvim README.md```

```bash
git status
git add README.md
git commit -m "repo init + README"
```

Выполнение лабораторной работы №2 в директории ```lab2```

```bash
git add lab2/
git commit -m "lab2"
git remote add origin git@github.com:SIR-WIZIX/MISIS_tp_labs.git
```

Создание репозитория MISIS_tp_labs через веб-интерфейс GitHub

```bash
git push origin main
```

