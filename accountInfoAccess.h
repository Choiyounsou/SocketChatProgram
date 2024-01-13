/* �̸�: accountInfoAccess.h
 *  ����: ���� ���� ���� �� ���� �Լ����� ����
 */

#ifndef __ACCACCESS_H__
#define __ACCACCESS_H__
#include <WinSock2.h>
#include "accountInfo.h"

int AddaccInfo(char* id, char* password, char* nickname);
int RegistAccstomer(SOCKET clntSock);
int LoginAccstomer(SOCKET clntSock);
accInfo* GetAccPtrByid(char* id);
accInfo* GetAccPtrBypassword(char* password);
accInfo* GetAccPtrBynick(char* nick);
int IsRegistid(char* id);
int IsRegistpassword(char* password);
int IsRegistnickname(char* nickname);

void StoreacclistToFile(void);
void LoadacclistFromFile(void);

#endif

/* end of file */#pragma once
