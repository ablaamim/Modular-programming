---

## :fork_and_knife: [Modular programming](https://en.wikipedia.org/wiki/Modular_programming), beyond the Spaghetti mess :heavy_exclamation_mark:

---

</p>
<p align="center">
<img src="https://media2.giphy.com/media/l3vRf3QDkiCiNjXGM/giphy.gif?cid=790b761176ff3f599e97eecd1509a17c289bdf79c0ba4437&rid=giphy.gif&ct=g" width="500">
<p/>

---

## :soccer: The goal :

> Create a complete module in the rules of the art it is necessary to respect the [norm](https://github.com/ablaamim/Libft-Extended/blob/master/srcs/en.norm.pdf), 
as well as authorized functions at [1337](https://1337.ma/en/) school [42 Network].

---

## MODULE 1 : Useful function to manipulate tables of integers :

---

> ABSOLUFUCKINLUTELY :heavy_exclamation_mark:

### :information_source: Extending my libft with more util function!

> Struct used in intarray module:
```c
typedef struct s_intarray
{
	int	*tab;
	int	len;
} *t_intarray;
```

> Header file :

 [modules.h](https://github.com/ablaamim/Libft_extended/blob/master/modules/modules.h)

> Compilation script :

 [Makefile](https://github.com/ablaamim/Libft_extended/blob/master/modules/Makefile)

---

## Content :

|Function | Description |
|---      |--- |
| [ft_intarray_debug()](https://github.com/ablaamim/Libft_extended/blob/master/modules/ft_intarray_debug.c) | Prints an array of integers in a form of a real array with "[ ]" on borders. |
| [ft_putnbr()](https://github.com/ablaamim/Libft_extended/blob/master/modules/ft_putnbr.c) | Prints numbers in the range of integer type, including INTMAX and INTMIN. |
| [ft_intarray_print_positive_values()](https://github.com/ablaamim/Libft_extended/blob/master/modules/ft_intarray_print_positive_values.c) | Traverse an array of integers and filters the positive values in order to print them. |
| [ft_intarray_search()](https://github.com/ablaamim/Libft_extended/blob/master/modules/ft_intarray_search.c)| Traverse an array of ints searching for a set "n", if it accures the function returns 1, otherwise it returns 0. |
| [ft_intarray_nb_occurences()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_nb_occurences.c) | Traverse an array of ints counting the number of occurences, and it returns the count. |
| [ft_intarray_create()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_create.c) | Constructor module, it creates an array of size len initialized with zeros. |
| [ft_intarray_set()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_set.c) | Assinging values in specific indexes. |
| [ft_intarray_get()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_get.c) | Retrieves an element of an intarray by indexing. |
| [ft_intarray_sort()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_sort.c) | Sorting an array of integers using selection sort. |
| [ft_intarray_len()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_len.c) | Calculates the length of an intarray. |
| [ft_intarray_destroy()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_destroy.c) | Free what was allocated. |
| [ft_intarray_sum()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_sum.c) | Sums up an intarray. |
| [ft_intarray_average()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_average.c)| Calculates the average of an intarray. |
| [ft_intarray_median()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_median.c) | Calculates the median of an intarray. |
| [ft_intarray_clone()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_clone.c)| Create a clone of an intarray. |
| [unsorted_intarray_delete()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/UNSORTED_intarray_delete.c)| Deletes an element from an intarray, but it changes order. (Good complexity) |
| [ft_intarray_delete()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_delete.c)| Deletes an element from an intarray, and it keeps its order. (Bad complexity) |
|[ft_intarray_add()](https://github.com/ablaamim/Libft-Extended/blob/master/modules/ft_intarray_add.c)| Add an element to an intarray. |
|[ft_empty_intarray_create()](https://github.com/ablaamim/Libft_extended/blob/master/modules/ft_empty_intarray_create.c) | Creates an empty intarray. |

---

## Module 2 : Useful tools :

---

## Content :

| Functiontion | Description |
|--- |--- |
| [ft_atoi()]() | Converts ascii to integers. |
| [ft_putchar()]() | Writes a character on stdout using write system call |
| [ft_putstr()]() | Writes a string character by character on stdout using system call write |

---
