/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDSEncryptionHelpers : NSObject
{
}

+ (void)noteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 messageData:(id)arg4 type:(int)arg5 encrypt:(BOOL)arg6 remote:(BOOL)arg7;
+ (id)decryptMessage:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 fromToken:(id)arg4 encryptionType:(int)arg5 error:(int *)arg6;
+ (id)encryptMessage:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forToken:(id)arg4 encryptionType:(int *)arg5 error:(int *)arg6;

@end
