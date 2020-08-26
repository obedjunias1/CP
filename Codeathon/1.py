def counting_files(files):
    file_counts = {}
    for file in files:
        if '.' in file:
            i = file.index('.')
            extension = file[i+1:]
            if extension not in file_counts:
                file_counts[extension] = 1
            else:
                file_counts[extension] += 1

    return file_counts


def display_file_count(files_counts):
    for file_type, num_of_files in file_counts.items():
        print("There are {} files with .{} extension".format(file_type, num_of_files))


file_names = ["abc.py", "abc.cpp", "abc.c", "abc.jpg", "abc.py", "abc.cpp",
                "abc.jpg", "abc.php", "abc.cpp", "abc.py", "abc.c", "abc.c",
                "abc.c", "abc.cpp", "abc.py", "abc.php", "abc.jpg", "abc.c",
                "abc.cpp", "abc.php", "abc.py", "abc.py", "abc.py", "abc.jpg",
                "abc.cpp", "abc.cpp", "abc.cpp", "abc.c", "abc.c", "abc.c",
                "abc.py", "abc.php"]

file_counts = counting_files(file_names)
display_file_count(file_counts)