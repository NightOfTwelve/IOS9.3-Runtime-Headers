//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSNumber, NSString;

@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>
- (void)removeAllStoredPseudoContactsWithCompletion:(void (^)(NSError *))arg1;
- (_Bool)removeAllStoredPseudoContacts:(id *)arg1;
- (void)drainBothQueuesCompletelyWithCompletion:(void (^)(NSError *))arg1;
- (_Bool)drainBothQueuesCompletely:(id *)arg1;
- (_Bool)sendRTCLogs:(id *)arg1;
- (void)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned long long)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (NSArray *)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)clearCachesFully:(_Bool)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)clearCachesFully:(_Bool)arg1 error:(id *)arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (NSArray *)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 error:(id *)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (NSArray *)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 error:(id *)arg6;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(void (^)(NSError *))arg1;
- (_Bool)resetConfirmationAndRejectionHistory:(id *)arg1;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)allContactsLimitedTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 error:(id *)arg5;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 error:(id *)arg4;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id *)arg6;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 error:(id *)arg5;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(NSNumber *, NSError *))arg2;
- (NSNumber *)emailAddressIsSignificant:(NSString *)arg1 error:(id *)arg2;
- (void)addSearchableItems:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)addSearchableItems:(NSArray *)arg1 error:(id *)arg2;
@end

