# 102architect

## Description 

You are working on a homeplanning software for an architecture firm. The goal is to simplify the process of
drawing the plan, and to integrate various features such as scale management, changing the point of view,
moving doors and windows along walls. . . You are in charge of implementing the geometric transformations (rotation to change point of view, translation to move an object, scaling to zoom in and out, reflection
and any combination of these transformations).

## Usage

```make && ./102architect x y transfo1 arg11 [arg12] [transfo2 arg12 [arg22]] ...```

## Parameters

| Parameter | Desription |
|-----------|------------|
| x       | abscissa of the original point |
| y       | ordinate of the original point |
| transfo | arg1 [arg2] |
| -t i j  | translation along vector (i, j)
| -z m n  | scaling by factors m (x-avis) and n (y-axis)
|-r d     | rotation centered in O by a d degree angle
| -s d    |reflection over the axis passing through O with an inclination angle of d degrees

## Moulinette : 75%
