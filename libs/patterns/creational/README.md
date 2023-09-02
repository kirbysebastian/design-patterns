# Creational Design Pattern
```
Creational patterns provide various obkect creation mechanisms, which increase flexibility and reuse of code
```

## Factory Method

### Definition
- Provides an interface for creating objects in a superclass (parent class), but allows
subclasses to alter the type of objects that will be created.

### Problem
- Adding of new types of objects to be created requires changes to the overall code and introduce
messy conditionals that switch your application's behavior depending on the required type of object
that needs to be created.

### Solution
- Replacing direct object construction calls with calls to a special **factory** method. Objects
returned by a factory method are referred to as **products**.

### Structure
```
Creator
 + createProduct(): Product

ConcreteCreatorA -|> Creator <|- ConcreteCreateB

	ConcreteCreatorA : Creator
	 + createProduct(): Product //returns ConcreteProductA

	ConcreteCreatorB : Creator
	 + createProduct(): Product //returns ConcreteProductB

Product <<interface>>
 + doStuff()

ConcreteProductA -|> Product <|- ConcreteProductB

	ConcreteProductA : Product
	ConcreteProductB : Product
```
- Creator class responsibility doesn't necessarily be product creation only. It usually has some
core business logic related to the products. It helps decoupl this logic from the concrete product
classes.

### Learning
- Main gist is to only introduce a method for a certain Class to create necessary objects with
different types.


## Abstract Factory

## Builder

## Prototype

## Singleton

