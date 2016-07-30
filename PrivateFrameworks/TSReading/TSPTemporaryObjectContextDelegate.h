//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSPFileCoordinatorDelegate-Protocol.h>
#import <TSReading/TSPObjectContextDelegate-Protocol.h>

@class NSError, NSMutableSet, NSSet, NSString, NSURL;
@protocol NSFilePresenter;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate>
{
    NSMutableSet *_persistenceWarnings;
    _Bool _ignoreDocumentSupport;
    NSURL *_packageURL;
    NSError *_error;
}

@property(nonatomic) _Bool ignoreDocumentSupport; // @synthesize ignoreDocumentSupport=_ignoreDocumentSupport;
@property(readonly, nonatomic) NSSet *persistenceWarnings; // @synthesize persistenceWarnings=_persistenceWarnings;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSURL *packageURL; // @synthesize packageURL=_packageURL;
- (void).cxx_destruct;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;
- (void)addPersistenceWarnings:(id)arg1;
- (void)presentPersistenceError:(id)arg1;
- (id)initWithPackageURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly) Class superclass;

@end

