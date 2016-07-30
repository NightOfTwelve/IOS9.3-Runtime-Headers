//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMItem, IMMessageItem, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@protocol IMRemoteDaemonProtocol <NSObject>
- (void)enrollSelfDeviceForSMSRelay:(NSString *)arg1;
- (void)unEnrollDeviceForSMSRelay:(NSString *)arg1 account:(NSString *)arg2;
- (void)enrollDeviceForSMSRelay:(NSString *)arg1 account:(NSString *)arg2;
- (void)importMessage:(NSDictionary *)arg1 isRead:(_Bool)arg2;
- (void)validateProfileAccount:(NSString *)arg1;
- (void)unvalidateAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)validateAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)removeAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)addAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)relay:(NSString *)arg1 sendCancel:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)relay:(NSString *)arg1 sendUpdate:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)relay:(NSString *)arg1 sendInitateRequest:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)sendAVMessageToPerson:(NSString *)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(NSDictionary *)arg4 conference:(NSString *)arg5 account:(NSString *)arg6;
- (void)sendVCUpdate:(NSData *)arg1 toPerson:(NSString *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)sendCounterProposalToPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)cancelVCRequestWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)respondToVCInvitationWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)requestVCWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4 toChatID:(NSString *)arg5 identifier:(NSString *)arg6 style:(unsigned char)arg7;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)passwordUpdatedAccount:(NSString *)arg1;
- (void)setBlockIdleStatus:(_Bool)arg1 account:(NSString *)arg2;
- (void)setBlockList:(NSArray *)arg1 account:(NSString *)arg2;
- (void)setAllowList:(NSArray *)arg1 account:(NSString *)arg2;
- (void)setBlockingMode:(unsigned int)arg1 account:(NSString *)arg2;
- (void)setProperties:(NSDictionary *)arg1 ofParticipant:(NSString *)arg2 inChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 account:(NSString *)arg6;
- (void)sendSavedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendPlayedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendReadReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)declineInvitationToChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)removePersonInfo:(NSDictionary *)arg1 chatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)invitePersonInfo:(NSDictionary *)arg1 withMessage:(IMMessageItem *)arg2 toChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 account:(NSString *)arg6;
- (void)removeChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)leaveChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSArray *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 groupID:(NSString *)arg5 joinProperties:(NSDictionary *)arg6 account:(NSString *)arg7;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSArray *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 joinProperties:(NSDictionary *)arg5 account:(NSString *)arg6;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 account:(NSString *)arg3;
- (void)setValue:(id)arg1 ofProperty:(NSString *)arg2 ofPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)requestProperty:(NSString *)arg1 ofPerson:(NSString *)arg2 account:(NSString *)arg3;
- (void)stopWatchingBuddy:(NSString *)arg1 account:(NSString *)arg2;
- (void)startWatchingBuddy:(NSString *)arg1 account:(NSString *)arg2;
- (void)requestSubscriptionTo:(NSString *)arg1 account:(NSString *)arg2;
- (void)acceptSubscriptionRequest:(_Bool)arg1 from:(NSString *)arg2 account:(NSString *)arg3;
- (void)renameGroup:(NSString *)arg1 to:(NSString *)arg2 account:(NSString *)arg3;
- (void)changeGroup:(NSString *)arg1 changes:(NSDictionary *)arg2 account:(NSString *)arg3;
- (void)changeGroups:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)requestGroupsAccount:(NSString *)arg1;
- (void)unregisterAccount:(NSString *)arg1;
- (void)registerAccount:(NSString *)arg1;
- (void)authenticateAccount:(NSString *)arg1;
- (void)resumeBuddyUpdatesAccount:(NSString *)arg1;
- (void)holdBuddyUpdatesAccount:(NSString *)arg1;
- (void)sendMappingPacket:(NSString *)arg1 toHandle:(NSString *)arg2 account:(NSString *)arg3;
- (void)logoutAccount:(NSString *)arg1;
- (void)loginAccount:(NSString *)arg1;
- (void)autoReconnectAccount:(NSString *)arg1;
- (void)autoLoginAccount:(NSString *)arg1;
- (void)loadChatWithChatIdentifier:(NSString *)arg1;
- (void)removeChat:(NSString *)arg1;
- (void)silenceChat:(NSString *)arg1 untilDate:(NSDate *)arg2;
- (void)chat:(NSString *)arg1 updateIsFiltered:(_Bool)arg2;
- (void)chat:(NSString *)arg1 updateDisplayName:(NSString *)arg2;
- (void)chat:(NSString *)arg1 updateProperties:(NSDictionary *)arg2;
- (void)cleanupAttachments;
- (void)loadAttachmentsForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4 queryID:(NSString *)arg5;
- (void)loadUnreadForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(unsigned long long)arg4 fallbackGUID:(NSString *)arg5 chatId:(NSString *)arg6 queryID:(NSString *)arg7;
- (void)loadFrequentRepliesForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(unsigned long long)arg4 chatID:(NSString *)arg5 queryID:(NSString *)arg6;
- (void)updateUnformattedID:(NSString *)arg1 forBuddyID:(NSString *)arg2 onService:(NSString *)arg3;
- (void)markHasHadSuccessfulQueryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3;
- (void)markSavedForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markSavedForMessageGUID:(NSString *)arg1;
- (void)markPlayedForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markPlayedForMessageGUID:(NSString *)arg1;
- (void)storeItem:(IMItem *)arg1 inChatGUID:(NSString *)arg2;
- (void)markReadForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 messages:(NSArray *)arg4 clientUnreadCount:(unsigned long long)arg5;
- (void)markReadForMessageGUID:(NSString *)arg1;
- (void)updateMessage:(IMMessageItem *)arg1;
- (void)markAsSpamForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3;
- (void)clearHistoryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 beforeGUID:(NSString *)arg4 afterGUID:(NSString *)arg5 chatID:(NSString *)arg6 queryID:(NSString *)arg7;
- (void)deleteMessageWithGUIDs:(NSArray *)arg1 queryID:(NSString *)arg2;
- (void)requestPendingMessages;
- (void)loadHistoryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(unsigned long long)arg4 beforeGUID:(NSString *)arg5 afterGUID:(NSString *)arg6 chatID:(NSString *)arg7 queryID:(NSString *)arg8;
- (void)loadMessageWithGUID:(NSString *)arg1 queryID:(NSString *)arg2;
- (void)setListenerCapabilities:(unsigned int)arg1;
- (void)account:(NSString *)arg1 avAction:(unsigned int)arg2 withArguments:(NSDictionary *)arg3 toAVChat:(NSString *)arg4 isVideo:(_Bool)arg5;
- (void)fileTransferRemoved:(NSString *)arg1;
- (void)fileTransferStopped:(NSString *)arg1;
- (void)fileTransfer:(NSString *)arg1 acceptedWithPath:(NSString *)arg2 autoRename:(_Bool)arg3 overwrite:(_Bool)arg4;
- (void)fileTransfer:(NSString *)arg1 updatedWithProperties:(NSDictionary *)arg2;
- (void)fileTransfer:(NSString *)arg1 createdWithProperties:(NSDictionary *)arg2;
- (void)deleteFileTransferWithGUID:(NSString *)arg1;
- (void)sendStandaloneFileTransfer:(NSString *)arg1;
- (void)requestBuddyPicturesAndPropertiesForAccount:(NSString *)arg1;
- (void)writeAccount:(NSString *)arg1 defaults:(NSDictionary *)arg2;
- (void)removeAccount:(NSString *)arg1;
- (void)addAccount:(NSString *)arg1 defaults:(NSDictionary *)arg2 service:(NSString *)arg3;
- (void)deactivateAccounts:(NSArray *)arg1;
- (void)activateAccounts:(NSArray *)arg1;
- (void)requestPendingACInvites;
- (void)requestPendingVCInvites;
- (void)setVCCapabilities:(unsigned long long)arg1;
- (void)setValue:(id)arg1 ofPersistentProperty:(NSString *)arg2;
- (void)setValue:(id)arg1 ofProperty:(NSString *)arg2;
- (void)changeMyStatus:(NSDictionary *)arg1 forAccount:(NSString *)arg2;
- (void)terminate;
- (void)logoutAllAccounts;
- (void)loginAllAccounts;
- (void)autoLoginActiveAccountsIfNecessary;
@end

