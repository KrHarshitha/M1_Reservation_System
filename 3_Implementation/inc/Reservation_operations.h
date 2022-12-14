/**
 * @file Reservation_operations.h
 * @author Harshitha KR (harshitha00002@gmail.com)
 * @brief Header file for bus reservation system
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _Reservation_OPERATIONS_H_
#define _Reservation_OPERATIONS_H_

/**
 * @brief LIST OF BUS
 * @return SHOW LIST OF BUS AVALIABLE
 */
void bus();

/**
 * @brief NUMBER OF SEATS AVAILIABLE
 * @return SHOW NUMBER OF SEATS AVAILIABLE
 */
void book();

/**
 * @brief ENTER NAME
 * @return DISPLAY NAME
 */
void name_n0();

/**
 * @brief SELECTING A SEAT 
 * @return CHOOSING SEATS
 */
int read_n0();

/**
 * @brief CONFIRMATION OF TICKET 
 * @return SHOWS PASSENGER TICKET DEATILS
 */
void read_name();

/**
 * @brief LOCK THE SEAT 1
 * @return CONFIRMATION OF SEATING ALLOTMENT 1
 */
void status();

/**
 * @brief LOCK THE SEAT 2
 * @return CONFIRMATION OF SEATING ALLOTMENT 2
 */
void status_1();

/**
 * @brief   CANCELLING TICKET 
 * @return TICKET CANCELLATION
 */
void cancel();

/**
 * @brief USER LOGIN
 * @return USER INFORMATION
 */
void login();

#endif /* #define _RESERVATION_SYSTEM_H_ */