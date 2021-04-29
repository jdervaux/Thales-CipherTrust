/*************************************************************************
**                                                                                                                             **
** Copyright(c) 2014 - 2017                          Confidential Material                                           **
**                                                                                                                             **
** This file is the property of Vormetric Inc.                                                                      **
** The contents are proprietary and confidential.                                                               **
** Unauthorized use, duplication, or dissemination of this document,                                      **
** in whole or in part, is forbidden without the express consent of                                         **
** Vormetric, Inc..                                                                                                        **
**                                                                                                                             **
**************************************************************************/
/*
 ***************************************************************************
 * File: vpkcs11_sample_cli.h
 ***************************************************************************
 ***************************************************************************
 * vpkcs11 sample cli header file
 ***************************************************************************
 */

#ifndef __vpkcs11_sample_cli_h__
#define __vpkcs11_sample_cli_h__

#define OK       0
#define NO_INPUT 1
#define TOO_LONG 2

int argc;
char userInput[64];
char pinSymbol[10] = "-p ";
char keySymbol[10] = " -k ";
char operationSymbol[10] = " -o ";
char fileSymbol[10] = " -f ";
char wrappingKeySymbol[10] = " -w ";
int inputResponse = 1;
char *pin[2] = {pinSymbol, "Enter pin: "};
char *key[2] = {keySymbol, "Enter key name: "};
char *encryptionType[3] = {operationSymbol, "Enter encryption type (CBC_PAD (default) or CTR or ECB or FPE): ", "validEncryptionType"};
char *digestOperation[3] = {operationSymbol, "Enter operation type (SHA512, SHA384, SHA256 (default), SHA224, SHA1 or MD5): ", "validMacOperations"};
char *digestHmacOperation[3] = {operationSymbol, "Enter operation type (SHA512-HMAC, SHA384-HMAC, SHA256-HMAC (default)): ", "validHmacOperations"};
char *file[2] = {fileSymbol, "Enter the file path: "};
char *wrappingKey[2] = {wrappingKeySymbol, "Enter key wrap name: "};

char *validHmacOperations[6] = {"SHA512-HMAC", "SHA384-HMAC", "SHA256-HMAC", "SHA224-HMAC", "SHA1-HMAC", "MD5-HMAC"};
char *validMacOperations[6] = {"SHA512", "SHA384", "SHA256", "SHA224", "SHA1", "MD5"};
char *validEncryptionType[4] = {"CBC_PAD", "CTR", "ECB", "FPE"};

int menu();
/*
************************************************************************
* Function: menu
* Displays a list of a operation the user can perform
************************************************************************
* Returns: OK
************************************************************************
*/

int sampleCli(char *sampleFileName, char ***optArray , int optArraySize, int f());
/*
************************************************************************
* Function: sampleCli
* Asks the user the required elements to run the sample selected
************************************************************************
* Returns: OK
************************************************************************
*/

int getCaseInput(int opSelected);
/*
************************************************************************
* Function: getCaseInput
* Transforms the input given by the user in an array of arguments argv.
* Then calls the sample function with argv.
************************************************************************
* Returns: opSelected
************************************************************************
*/

#endif
