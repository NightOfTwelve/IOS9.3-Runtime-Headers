//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHChangeRequest-Protocol.h>

@class NSManagedObject, PLPhotoLibrary;

@protocol PHInsertChangeRequest <PHChangeRequest>
@property(readonly, getter=isNew) _Bool new;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(PLPhotoLibrary *)arg1;
- (_Bool)canGenerateUUIDLocally;
- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id *)arg2;
- (_Bool)validateInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id *)arg2;
- (id)initForNewObject;
@end

