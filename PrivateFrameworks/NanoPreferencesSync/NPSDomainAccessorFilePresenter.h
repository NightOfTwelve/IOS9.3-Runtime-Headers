//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPreferencesSync/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSString, NSURL;
@protocol NPSDomainAccessorFilePresenterDelegate;

@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter>
{
    NSURL *_domainURL;
    id <NPSDomainAccessorFilePresenterDelegate> _delegate;
    NSOperationQueue *_presenterOperationQueue;
}

@property(retain, nonatomic) NSOperationQueue *presenterOperationQueue; // @synthesize presenterOperationQueue=_presenterOperationQueue;
@property(readonly, nonatomic) __weak id <NPSDomainAccessorFilePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
- (void).cxx_destruct;
- (_Bool)presentedItemNeedsWatching;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)synchronizeForReadingOnly:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 domainURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

