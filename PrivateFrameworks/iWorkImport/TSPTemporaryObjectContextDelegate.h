//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPObjectContextDelegate-Protocol.h>

@class NSError, NSMutableSet, NSSet, NSString, NSUUID;
@protocol NSFilePresenter;

__attribute__((visibility("hidden")))
@interface TSPTemporaryObjectContextDelegate : NSObject <TSPObjectContextDelegate>
{
    NSMutableSet *_persistenceWarnings;
    _Bool _ignoreDocumentSupport;
    NSError *_error;
}

@property(nonatomic) _Bool ignoreDocumentSupport; // @synthesize ignoreDocumentSupport=_ignoreDocumentSupport;
@property(readonly, nonatomic) NSSet *persistenceWarnings; // @synthesize persistenceWarnings=_persistenceWarnings;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)resumeAutosave;
- (void)suspendAutosave;
- (id)persistenceWarningsForData:(id)arg1 flags:(unsigned long long)arg2;
- (void)addPersistenceWarnings:(id)arg1;
- (void)presentPersistenceError:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
@property(readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly, nonatomic) _Bool isInCollaborationMode;
@property(readonly, nonatomic) _Bool isInReadOnlyMode;
@property(readonly) Class superclass;

@end

