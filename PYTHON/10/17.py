# create a package (animals)
# inside are 5 modules - fish.py, birds.py, amphibians.py, mammals.py, reptiles.py
# each module has two functions - example and characteristic

from animals import fish,mammals,amphibians,birds,reptiles

print("Example of fish, mammals, birds, reptiles : ")
fish.ex()
mammals.ex()
birds.ex()
reptiles.ex()

print("Characteristic of amphibians, reptiles : ")
amphibians.ch()
reptiles.ch()