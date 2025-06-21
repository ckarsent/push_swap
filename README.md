# push_swap - Porjet 42 🪄

## Présentation

`push_swap` est un programme conçu pour trier une liste d'entiers en utilisant un ensemble restreint d'opérations sur deux piles : `a` (pile de départ) et `b` (pile auxiliaire).
L’objectif est de générer une séquence d’instructions aussi courte que possible pour réaliser ce tri dans l’ordre croissant.

> Ce projet met l'accent sur l’optimisation algorithmique 🚀, la gestion rigoureuse de la mémoire 🧠, et le respect des contraintes imposées dans le cadre du cursus 42 🎓.

---

## Fonctionnalité ⚙️

À partir d’une liste d'entiers passée en arguments, le programme affiche une suite d’instructions à exécuter pour trier les éléments.
Les seules opérations autorisées sont définies dans le sujet, et doivent être utilisées de manière optimale 💡.

---

## Opérations disponibles 🔁

| Instruction | Effet |
|-------------|-------|
| `sa`        | Échange les deux premiers éléments de la pile `a` |
| `sb`        | Échange les deux premiers éléments de la pile `b` |
| `ss`        | Effectue `sa` et `sb` simultanément |
| `pa`        | Déplace le premier élément de `b` vers `a` |
| `pb`        | Déplace le premier élément de `a` vers `b` |
| `ra`        | Fait remonter tous les éléments de `a` d’un cran |
| `rb`        | Idem pour `b` |
| `rr`        | `ra` et `rb` simultanément |
| `rra`       | Fait descendre tous les éléments de `a` d’un cran |
| `rrb`       | Idem pour `b` |
| `rrr`       | `rra` et `rrb` simultanément |

---

## Compilation 🛠️

Le projet est fourni avec un `Makefile`. Pour compiler :

```bash
make
