#!/bin/sh
#creation des repoertoires de maniere recursive + changement de date
mkdir -p test0 test2
touch -t 1510042047 test0
touch -t 1510042045 test2

#creation des fichiers avec la taille fixe et l'horodatage.
dd if=/dev/zero of=test1 bs=4 count=1
touch -t 1510042046 test1
dd if=/dev/zero of=test3 bs=1 count=1
touch -t 1510042044 test3
dd if=/dev/zero of=test4 bs=2 count=1
touch -t 1510042043 test4
dd if=/dev/zero of=testJour01 bs=42 count=1
touch -t 1510042042 testJour01
#faire le lien symbolique entre testjour01 et test6
ln -s testJour01 test6
#faire des lien physiques entre test3 et test5(test5 va etre un raccourci de test3)
ln test3 test5
touch -mht 1510042020 test6
#modifier les permissions des fichiers
chmod 715 test0
chmod 414 test1
chmod 504 test2
chmod 404 test3
chmod 020 test4
chmod 615 testJour01
