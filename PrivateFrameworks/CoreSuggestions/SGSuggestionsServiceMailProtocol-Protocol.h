//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>

@class CSSearchableItem, NSArray, NSData, NSString;

@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol>
- (void)resolveFullDownloadRequests:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (_Bool)resolveFullDownloadRequests:(NSArray *)arg1 error:(id *)arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id *)arg2;
- (void)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3;
- (_Bool)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 error:(id *)arg3;
- (void)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (_Bool)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 error:(id *)arg3;
- (void)messagesToRefreshWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (NSArray *)messagesToRefreshWithError:(id *)arg1;
- (void)suggestionsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 options:(unsigned long long)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (NSArray *)suggestionsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (void)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)prepareForRealtimeExtractionWithCompletion:(void (^)(NSError *))arg1;
- (_Bool)prepareForRealtimeExtraction:(id *)arg1;
@end

