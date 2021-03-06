/*************************************************************************/
/*  quaternion.h                                                         */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           ZeroThree Engine                            */
/*************************************************************************/
/* Copyright (c) 2021-present Steven Cheung.                             */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#pragma once

#include <iostream>
#include <math.h>

class Vector3;

class Quaternion
{
public:
    //scalar
    float s;

    //vector
    Vector3 v;

    //constructor
    Quaternion();

    //constructor
    Quaternion(float uS, Vector3& uV);

    //destructor
    ~Quaternion();

    /*!
     *  @brief Copy Constructor
     */
    Quaternion(const Quaternion& value);

    /*!
     *  @brief Copy Constructor
     */
    inline Quaternion& operator=(const Quaternion& value);

    /*!
    * @brief Addition
    *
    * @param q quaternion
    *
    * @return adds quaternions
    */
    void operator+=(const Quaternion& q);

    /*!
     *  @brief Addition
     *
     *  @param q quaternion
     *
     *  @return Quaternion addition
     */
    Quaternion operator+(const Quaternion& q)const;

    /*!
    *  @brief Subtraction
    *
    *  @param q quaternion
    *
    *  @return subtracts quaternions
    */
    void operator-=(const Quaternion& q);

    /*!
     *  @brief Subtraction
     *
     *  @param q quaternion
     *
     *  @return Quaternion subtraction
     */
    Quaternion operator-(const Quaternion& q) const;

    /*!
    *  @brief Quaternion Multiplication
    *
    *  @param q quaternion
    *
    *  @return Quaternion product
    */
    void operator*=(const Quaternion& q);

    /*!
    *  @brief Quaternion Multiplication
    *
    *  @param q quaternion
    *
    *  @return Quaternion product
    */
    Quaternion operator*(const Quaternion& q)const;

    /*!
    *  @brief Quaternion multiplication
    *
    *  @param q quaternion
    *
    *  @return quaternion product
    */
    Quaternion multiply(const Quaternion& q) const;

    /*!
    *  @brief Quaternion Division
    *
    *  @param q quaternion
    *
    *  @return Quaternion product
    */
    void operator/=(const Quaternion& q);

    /*!
    *  @brief Quaternion Division
    *
    *  @param q quaternion
    *
    *  @return Quaternion product
    */
    Quaternion operator/(const Quaternion& q) const;

    /*!
    *  @brief Quaternion Division
    *
    *  @param q quaternion
    *
    *  @return quaternion product
    */
    Quaternion divide(const Quaternion& q) const;

    /*!
    *  @brief Quaternion Multiplication (scalar)
    *
    *  @param q quaternion
    *
    *  @return Quaternion product
    */
    void operator*=(const float value);

    /*!
    *  @brief Quaternion Multiplication (scalar)
    *
    *  @param q quaternion
    *
    *  @return Quaternion product
    */
    Quaternion operator*(const float value) const;

    /*!
    *  @brief Quaternion Division (scalar)
    *
    *  @param q quaternion
    *
    *  @return Quaternion product
    */
    void operator/=(const float value);

    /*!
    *  @brief Quaternion Division (scalar)
    *
    *  @param q quaternion
    *
    *  @return Quaternion product
    */
    Quaternion operator/(const float value) const;

    /*!
    *  @brief Norm of the quaternion
    *
    *  @return Returns results of the Norm of a quaternion
    */
    float Norm();

    /*!
    *  @brief Normalisation of the quaternion
    *
    *  @return Returns results of the Normalisation of a quaternion
    */
    float Normalisation();

    /*!
    *  @brief Special Unit-Norm form of quaternion
    */
    void ConvertToUnitNormQuaternion();

    /*!
    *  @brief Conjugate
    *
    *  @return Conjugate of a quaternion
    */
    Quaternion Conjugate();

    /*!
    *  @brief Inverse
    *
    *  @return Inverse of a quaternion
    */
    Quaternion Inverse();

    void Inverse(Quaternion& q);
};