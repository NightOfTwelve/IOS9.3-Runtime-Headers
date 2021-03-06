//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DCService, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL;

@interface DCDatabase : NSObject
{
    NSManagedObjectModel *_model;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    DCService *_service;
    NSURL *_databaseURL;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)_managedObjectModel;
+ (id)databaseForService:(id)arg1;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(readonly, nonatomic) DCService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSManagedObjectModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
- (_Bool)_databaseFileExists;
- (void)_setupManagedObjectContext;
- (void)removeCancelledUpload:(id)arg1;
- (void)removeUploadForPath:(id)arg1;
- (void)saveUploadFileURL:(id)arg1 generationIdentifier:(id)arg2 taskIdentifier:(id)arg3 forPath:(id)arg4;
- (void)saveUploadFileURL:(id)arg1 forPath:(id)arg2;
- (id)uploadForTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2;
- (id)uploadForPath:(id)arg1;
- (unsigned long long)numberOfPendingUploads;
- (id)allUploads;
- (id)uploadPaths;
- (void)removeOtherMetadataForDocumentIdentifier:(id)arg1;
- (void)saveOtherMetadata:(id)arg1 forDocumentIdentifier:(id)arg2;
- (id)otherMetadataForDocumentIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2;
- (id)otherMetadataForDocumentIdentifier:(id)arg1;
- (void)removeStoredLocalMetadataForDocumentIdentifier:(id)arg1;
- (void)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2;
- (id)storedLocalMetadataForDocumentIdentifier:(id)arg1;
- (void)removePath:(id)arg1;
- (void)renamePath:(id)arg1 toPath:(id)arg2;
- (id)pathsForDocumentIdentifier:(id)arg1;
- (id)documentIdentifierForPath:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1 forPath:(id)arg2;
- (_Bool)saveWithError:(id *)arg1 rollbackOnFailure:(_Bool)arg2;
- (_Bool)saveWithError:(id *)arg1;
- (_Bool)save;
- (id)initWithService:(id)arg1;
- (id)_databaseDirectory;
- (void)deleteDatabase;
- (void)reset;

@end

