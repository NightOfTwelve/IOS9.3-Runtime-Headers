//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/NSObject-Protocol.h>

@class ML3DatabaseImport, NSArray, NSDictionary, NSString, NSUUID;

@protocol MLMediaLibraryServiceProtocol <NSObject>
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)updateSpotlightIndexForBundleID:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)setDeviceSharedLibraryPath:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)getDeviceSharedLibraryPath:(void (^)(NSString *))arg1;
- (void)getLanguageResourcesWithCompletion:(void (^)(ML3LanguageResources *, NSError *))arg1;
- (void)unlockDatabaseWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)lockDatabaseForReason:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)performImport:(ML3DatabaseImport *)arg1 fromSource:(unsigned long long)arg2 withUUID:(NSUUID *)arg3 completionHandler:(void (^)(_Bool, NSError *, NSData *))arg4;
- (void)setOptions:(NSDictionary *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(NSDictionary *)arg2 options:(NSDictionary *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)endTransaction:(NSUUID *)arg1 shouldCommit:(_Bool)arg2 withCompletionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)executeQuery:(NSString *)arg1 withParameters:(NSArray *)arg2 options:(NSDictionary *)arg3 onTransaction:(NSUUID *)arg4 withCompletionHandler:(void (^)(NSData *, NSError *))arg5;
- (void)executeUpdate:(NSString *)arg1 withParameters:(NSArray *)arg2 onTransaction:(NSUUID *)arg3 withCompletionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)beginTransactionForDatabaseAtPath:(NSString *)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(NSUUID *, NSError *))arg4;
- (void)recreateDatabaseAtPath:(NSString *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)validateDatabaseAtPath:(NSString *)arg1 withCompletionHandler:(void (^)(_Bool, NSError *))arg2;
@end

