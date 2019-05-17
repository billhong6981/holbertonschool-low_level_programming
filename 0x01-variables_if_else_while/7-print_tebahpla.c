Welcome to the Emacs shell

~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 1-last_digit.c

========== 1-last_digit.c ==========
1-last_digit.c:11: WARNING: please, no spaces at the start of a line
1-last_digit.c:15: ERROR: spaces preferred around that '%' (ctx:VxV)
1-last_digit.c:18: ERROR: do not use assignment in if condition
total: 2 errors, 1 warnings, 24 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 1-last_digit.c

========== 1-last_digit.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add README.md
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 1-last_digit.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "1-last_digit.c"
[master a718261] 1-last_digit.c
 2 files changed, 26 insertions(+)
 create mode 100644 0x01-variables_if_else_while/1-last_digit.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 8, done.
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 802 bytes | 0 bytes/s, done.
Total 5 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   6dc76a6..a718261  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty  2-print_alphabet.c

========== 2-print_alphabet.c ==========
2-print_alphabet.c:12: ERROR: space required before the open parenthesis '('
total: 1 errors, 0 warnings, 16 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty  2-print_alphabet.c

========== 2-print_alphabet.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add README.md
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 2-print_alphabet.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "2-print_alphabet.c"
[master dbc44ab] 2-print_alphabet.c
 2 files changed, 18 insertions(+)
 create mode 100644 0x01-variables_if_else_while/2-print_alphabet.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 8, done.
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 783 bytes | 0 bytes/s, done.
Total 5 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   a718261..dbc44ab  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ls -l
total 28
-rwxrwxr-x   1 vagrant        vagrant  8729 2019-02-08 02:56 0-positive_or_negative
-rw-rw-r--   1 vagrant        vagrant   324 2019-02-08 03:01 0-positive_or_negative.c
-rw-rw-r--   1 vagrant        vagrant     0 2019-02-08 02:45 0-positive_or_negative.c~
-rwxrwxr-x   1 vagrant        vagrant  8719 2019-02-08 03:44 1-last_digit
-rw-rw-r--   1 vagrant        vagrant   500 2019-02-08 03:44 1-last_digit.c
-rw-rw-r--   1 vagrant        vagrant   356 2019-02-08 03:23 1-last_digit.c~
-rwxrwxr-x   1 vagrant        vagrant  8573 2019-02-08 04:02 2-print_alphabet
-rw-rw-r--   1 vagrant        vagrant   191 2019-02-08 04:01 2-print_alphabet.c
-rw-rw-r--   1 vagrant        vagrant   500 2019-02-08 03:47 2-print_alphabet.c~
-rw-rw-r--   1 vagrant        vagrant   557 2019-02-08 03:48 README.md
-rw-rw-r--   1 vagrant        vagrant     0 2019-02-08 02:42 README.md~
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 2-print_alphabet.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "2-print_alphabet.c1"
[master c801ffe] 2-print_alphabet.c1
 1 file changed, 1 insertion(+), 1 deletion(-)
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 7, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 460 bytes | 0 bytes/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   dbc44ab..c801ffe  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 2-print_alphabet.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "2-print_alphabet.c"
[master d8d065e] 2-print_alphabet.c
 1 file changed, 2 insertions(+)
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 7, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 449 bytes | 0 bytes/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   c801ffe..d8d065e  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 2-print_alphabet.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "2-print_alphabet.c"
[master b45a286] 2-print_alphabet.c
 1 file changed, 3 insertions(+), 2 deletions(-)
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 7, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 477 bytes | 0 bytes/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   d8d065e..b45a286  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
2-print_alphabet.c: In function ‘main’:
2-print_alphabet.c:12:10: error: assignment makes integer from pointer without a cast [-Werror]
 new_line = "\n";
          ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet

========== gcc ==========
diff: gcc: No such file or directory
Error: Cannot open file gcc

========== -Wall ==========
Unknown option: Wall
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== -pedantic ==========
Unknown option: pedantic
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== -Werror ==========
Unknown option: Werror
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== -Wextra ==========
Unknown option: Wextra
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== 2-print_alphabet.c ==========
main

========== -o ==========
Unknown option: o
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== 2-print_alphabet ==========
2-print_alphabet:0: ERROR: Does not appear to be a unified-diff format patch
total: 1 errors, 0 warnings, 0 lines checked
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet

========== gcc ==========
diff: gcc: No such file or directory
Error: Cannot open file gcc

========== -Wall ==========
Unknown option: Wall
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== -pedantic ==========
Unknown option: pedantic
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== -Werror ==========
Unknown option: Werror
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== -Wextra ==========
Unknown option: Wextra
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== 2-print_alphabet.c ==========
main

========== -o ==========
Unknown option: o
Usage: /usr/local/bin/betty-style [OPTION]... [FILE]...
Version: 0.32

Options:
  -q, --quiet                Quiet mode
  --tree                     Run with a kernel tree.
  --no-signoff               Do not check for 'Signed-off-by' line
  --patch                    Treat FILE as patchfile (default)
  --emacs                    Emacs compile window format
  --no-terse                 Disable one line per report.
  --showfile                 Emit diffed file position, not input file position
  -g, --git                  Treat FILE as a single commit or git revision range
                             Single git commit with:
                               <rev>
                               <rev>^
                               <rev>~n
                             Multiple git commits with:
                               <rev1>..<rev2>
                               <rev1>...<rev2>
                               <rev>-<count>
                             Git merges are ignored
  --no-file                  Don't treat FILE as regular source file.
  --subjective, --strict     Enable more subjective tests
  --list-types               List the possible message types
  --types TYPE(,TYPE2...)    Show only these comma separated message types
  --ignore TYPE(,TYPE2...)   Ignore various comma separated message types
  --show-types               Show the specific message type in the output
  --min-conf-desc-length=n   Set the min description length, if shorter, warn
  --root=PATH                PATH to the kernel tree root
  --no-summary               Suppress the per-file summary
  --mailback                 Only produce a report in case of warnings/errors
  --summary-file             Include the filename in summary
  --debug KEY=[0|1]          Turn on/off debugging of KEY, where KEY is one of
                             'values', 'possible', 'type', and 'attr' (default
                             is all off)
  --test-only=WORD           Report only warnings/errors containing WORD
                             literally
  --fix                      EXPERIMENTAL - may create horrible results
                             If correctable single-line errors exist, create
                             "<inputfile>.EXPERIMENTAL-checkpatch-fixes"
                             with potential errors corrected to the preferred
                             checkpatch style
  --fix-inplace              EXPERIMENTAL - may create horrible results
                             Is the same as --fix, but overwrites the input
                             file.  It's your fault if there's no backup or git
  --ignore-perl-version      Override checking of perl version.  expect
                             runtime errors.
  --codespell                Use the codespell dictionary for spelling/typos
                             (default:/usr/share/codespell/dictionary.txt)
  --codespellfile            Use this codespell dictionary
  --color                    Use colors when output is STDOUT (default: on)

  --max-line-length=n        Set the maximum length of a line (default: 80)
  --max-func-length=n        Set the maximum length of a function (default: 40)
  --max-funcs=n              Set the maximum declared functions per source file
                             (default: 5)
                             Set it to -1 for infinite
  --no-safe-guard            Don't check for header files protection
  --allow-global-variables   Allow global variable definition
  -r, --recursive            Run for every C source file (.c and .h) recursively

  -h, --help, --version      Display this help and exit

When FILE is - read standard input.

========== 2-print_alphabet ==========
2-print_alphabet:0: ERROR: Does not appear to be a unified-diff format patch
total: 1 errors, 0 warnings, 0 lines checked
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 2-print_alphabet.c

========== 2-print_alphabet.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
2-print_alphabet.c: In function ‘main’:
2-print_alphabet.c:17:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(new_line);
 ^
In file included from 2-print_alphabet.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘char *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
2-print_alphabet.c: In function ‘main’:
2-print_alphabet.c:18:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(new_line);
 ^
In file included from 2-print_alphabet.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘char *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
2-print_alphabet.c: In function ‘main’:
2-print_alphabet.c:13:11: error: assignment makes integer from pointer without a cast [-Werror]
 *new_line = "\n";
           ^
2-print_alphabet.c:18:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(new_line);
 ^
In file included from 2-print_alphabet.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘char *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
2-print_alphabet.c: In function ‘main’:
2-print_alphabet.c:13:11: error: lvalue required as left operand of assignment
 &new_line = "\n";
           ^
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./2-print_alphabet
abcdefghijklmnopqrstuvwxyz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add ./2-print_alphabet.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "./2-print_alphabet.c"
[master 475e854] ./2-print_alphabet.c
 1 file changed, 2 insertions(+), 2 deletions(-)
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 7, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 445 bytes | 0 bytes/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   b45a286..475e854  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty ./2-print_alphabet.c

========== ./2-print_alphabet.c ==========
./2-print_alphabet.c:10: WARNING: please, no spaces at the start of a line
total: 0 errors, 1 warnings, 19 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add ./2-print_alphabet.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "./2-print_alphabet.c"
[master ca3400a] ./2-print_alphabet.c
 1 file changed, 1 insertion(+), 1 deletion(-)
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 7, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 434 bytes | 0 bytes/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   475e854..ca3400a  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 4-print_alphabt.c

========== 4-print_alphabt.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./4-print_alphabt
abcdefghijklmnopqrstuvwxyz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 4-print_alphabt.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add README.md
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "4-print_alphabt.c"
[master e634efa] 4-print_alphabt.c
 2 files changed, 22 insertions(+)
 create mode 100644 0x01-variables_if_else_while/4-print_alphabt.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 8, done.
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 694 bytes | 0 bytes/s, done.
Total 5 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   ca3400a..e634efa  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 4-print_alphabt.c

========== 4-print_alphabt.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./4-print_alphabt | grep [eq]
abcdefghijklmnopqrstuvwxyz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./4-print_alph\
                                                                                
./4-print_alph: command not found
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ 4-print_alphabt
4-print_alphabt: command not found
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./4-print_alphabt
abcdefghijklmnopqrstuvwxyz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty  4-print_alphabt.c

========== 4-print_alphabt.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./4-print_alphabt
abcdefghijklmnopqrstuvwxyz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 4-print_alphabt.c

========== 4-print_alphabt.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./4-print_alphabt
abcdefghijklmnopqrstuvwxyz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 4-print_alphabt.c

========== 4-print_alphabt.c ==========
4-print_alphabt.c:15: ERROR: do not use assignment in if condition
total: 1 errors, 0 warnings, 25 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 4-print_alphabt.c

========== 4-print_alphabt.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./4-print_alphabt
abcdfghijklmnoprstuvwxyz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 4-print_alphabt.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "4-print_alphabt.c"
[master 192a1a7] 4-print_alphabt.c
 1 file changed, 7 insertions(+), 2 deletions(-)
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 7, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 488 bytes | 0 bytes/s, done.
Total 4 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   e634efa..192a1a7  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 3-print_alphabets.c

========== 3-print_alphabets.c ==========
3-print_alphabets.c:13: ERROR: space prohibited before that close parenthesis ')'
3-print_alphabets.c:17: ERROR: space prohibited before that close parenthesis ')'
total: 2 errors, 0 warnings, 23 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 3-print_alphabets.c

========== 3-print_alphabets.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 3-print_alphabets.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "3-print_alphabets.c"
[master 9985901] 3-print_alphabets.c
 1 file changed, 23 insertions(+)
 create mode 100644 0x01-variables_if_else_while/3-print_alphabets.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 6, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 598 bytes | 0 bytes/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   192a1a7..9985901  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 5-print_numbers.c

========== 5-print_numbers.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
5-print_numbers.c: In function ‘main’:
5-print_numbers.c:11:17: error: multi-character character constant [-Werror=multichar]
 char new_line = '/n';
                 ^
5-print_numbers.c:11:1: error: overflow in implicit constant conversion [-Werror=overflow]
 char new_line = '/n';
 ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 5-print_numbers.c

========== 5-print_numbers.c ==========
5-print_numbers.c:11: ERROR: trailing whitespace
total: 1 errors, 0 warnings, 20 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 5-print_numbers.c

========== 5-print_numbers.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
5-print_numbers.c: In function ‘main’:
5-print_numbers.c:13:12: error: multi-character character constant [-Werror=multichar]
 new_line = '/n';
            ^
5-print_numbers.c:13:1: error: overflow in implicit constant conversion [-Werror=overflow]
 new_line = '/n';
 ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 5-print_numbers.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "5-print_numbers.c"
[master cd517d0] 5-print_numbers.c
 1 file changed, 20 insertions(+)
 create mode 100644 0x01-variables_if_else_while/5-print_numbers.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 6, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 600 bytes | 0 bytes/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   9985901..cd517d0  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c 

========== 6-print_numberz.c ==========
6-print_numberz.c:11: ERROR: trailing whitespace
6-print_numberz.c:11: WARNING: please, no spaces at the start of a line
total: 1 errors, 1 warnings, 18 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:14:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(&num);
 ^
In file included from 6-print_numberz.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘int *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_number
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:11:1: error: ISO C forbids nested functions [-Werror=pedantic]
 int* pt
 ^
6-print_numberz.c:12:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘num’
 num = "0123456789"
 ^
6-print_numberz.c:12:5: error: assignment makes integer from pointer without a cast [-Werror]
 num = "0123456789"
     ^
6-print_numberz.c:13:1: error: expected ‘;’ before ‘for’
 for (num = 0 ; num <= 9 ; num++)
 ^
6-print_numberz.c:10:5: error: variable ‘num’ set but not used [-Werror=unused-but-set-variable]
 int num;
     ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
6-print_numberz.c:11: ERROR: "foo* bar" should be "foo *bar"
total: 1 errors, 0 warnings, 20 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
6-print_numberz.c:10: WARNING: please, no spaces at the start of a line
total: 0 errors, 1 warnings, 19 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:11:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘num’
 num = "0123456789"
 ^
6-print_numberz.c:12:16: error: statement with no effect [-Werror=unused-value]
 for (num = 0 ; num <= 9 ; num++)
                ^
6-print_numberz.c:12:32: error: expected ‘;’ before ‘)’ token
 for (num = 0 ; num <= 9 ; num++)
                                ^
6-print_numberz.c:12:32: error: expected statement before ‘)’ token
6-print_numberz.c:14:1: error: ‘pt’ undeclared (first use in this function)
 pt = &num;
 ^
6-print_numberz.c:14:1: note: each undeclared identifier is reported only once for each function it appears in
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:12:1: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘for’
 for (num = 0 ; num <= 9 ; num++)
 ^
6-print_numberz.c:12:16: error: statement with no effect [-Werror=unused-value]
 for (num = 0 ; num <= 9 ; num++)
                ^
6-print_numberz.c:12:32: error: expected ‘;’ before ‘)’ token
 for (num = 0 ; num <= 9 ; num++)
                                ^
6-print_numberz.c:12:32: error: expected statement before ‘)’ token
6-print_numberz.c:14:1: error: ‘pt’ undeclared (first use in this function)
 pt = &num;
 ^
6-print_numberz.c:14:1: note: each undeclared identifier is reported only once for each function it appears in
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
6-print_numberz.c:10: ERROR: "foo* bar" should be "foo *bar"
total: 1 errors, 0 warnings, 18 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
6-print_numberz.c:11: ERROR: "foo* bar" should be "foo *bar"
total: 1 errors, 0 warnings, 20 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:15:5: error: assignment from incompatible pointer type [-Werror]
 str = &num;
     ^
6-print_numberz.c:16:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(str);
 ^
In file included from 6-print_numberz.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘char *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:15:5: error: assignment makes pointer from integer without a cast [-Werror]
 str = num;
     ^
6-print_numberz.c:16:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(str);
 ^
In file included from 6-print_numberz.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘char *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
6-print_numberz.c:11: ERROR: "foo* bar" should be "foo *bar"
total: 1 errors, 0 warnings, 20 lines checked
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 6-print_numberz.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "6-print_numberz.c"
[master 7a14485] 6-print_numberz.c
 1 file changed, 20 insertions(+)
 create mode 100644 0x01-variables_if_else_while/6-print_numberz.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 6, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 593 bytes | 0 bytes/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   cd517d0..7a14485  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./6-print_numberz
 	
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:15:10: error: assignment makes pointer from integer without a cast [-Werror]
 str[num] = num;
          ^
6-print_numberz.c:16:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(str[num]);
 ^
In file included from 6-print_numberz.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘char *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 7-print_tebahpla.c

========== 7-print_tebahpla.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git add 7-print_tebahpla.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git commit -m "7-print_tebahpla.c"
[master 6ffdc22] 7-print_tebahpla.c
 1 file changed, 19 insertions(+)
 create mode 100644 0x01-variables_if_else_while/7-print_tebahpla.c
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ git push
warning: push.default is unset; its implicit value is changing in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the current behavior after the default changes, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

In Git 2.0, Git will default to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 6, done.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 592 bytes | 0 bytes/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.        
To git@github.com:billhong6981/holbertonschool-low_level_programming.git
   7a14485..6ffdc22  master -> master
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ betty 6-print_numberz.c

========== 6-print_numberz.c ==========
main
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:11:1: error: unknown type name ‘array’
 array str[16];
 ^
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./6-print_numberz
 	
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:16:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(str);
 ^
In file included from 6-print_numberz.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘int *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./6-print_numberz
 	
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./6-print_numberz
 	
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:11:8: error: expected ‘{’ before ‘*’ token
 struct *str;
        ^
6-print_numberz.c:13:1: error: ‘str’ undeclared (first use in this function)
 str = malloc(10);
 ^
6-print_numberz.c:13:1: note: each undeclared identifier is reported only once for each function it appears in
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:11:8: error: expected ‘{’ before ‘char’
 struct char* str;
        ^
6-print_numberz.c:11:8: error: two or more data types in declaration specifiers
6-print_numberz.c:13:1: error: ‘str’ undeclared (first use in this function)
 str = malloc(10);
 ^
6-print_numberz.c:13:1: note: each undeclared identifier is reported only once for each function it appears in
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ ./6-print_numberz
 	
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
6-print_numberz.c: In function ‘main’:
6-print_numberz.c:17:1: error: passing argument 1 of ‘putchar’ makes integer from pointer without a cast [-Werror]
 putchar(str);
 ^
In file included from 6-print_numberz.c:2:0:
/usr/include/stdio.h:580:12: note: expected ‘int’ but argument is of type ‘char *’
 extern int putchar (int __c);
            ^
cc1: all warnings being treated as errors
~/holbertonschool-low_level_programming/0x01-variables_if_else_while $ 