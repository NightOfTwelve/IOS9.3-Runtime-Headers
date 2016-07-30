//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISURLOperationPool, NSLock, NSString, SUClientInterface, SUImageCache, SUScriptExecutionContext;
@protocol SUClientDelegate;

@interface SUClient : NSObject
{
    struct __CFArray *_assetTypes;
    SUClientInterface *_clientInterface;
    id <SUClientDelegate> _delegate;
    _Bool _dontSaveNavigationPath;
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    NSLock *_lock;
    SUScriptExecutionContext *_scriptExecutionContext;
}

+ (id)viewControllerFactory;
+ (id)imagePool;
+ (id)sharedClient;
+ (void)setSharedClient:(id)arg1;
@property(retain, nonatomic) ISURLOperationPool *imagePool; // @synthesize imagePool=_imagePool;
@property(retain, nonatomic) SUImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) _Bool dontSaveNavigationPath; // @synthesize dontSaveNavigationPath=_dontSaveNavigationPath;
@property(nonatomic) id <SUClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reloadScriptExecutionContext;
- (void)_purgeCaches;
- (_Bool)_presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)viewControllerFactory;
- (void)setViewControllerFactory:(id)arg1;
@property(retain, nonatomic) NSString *searchURLBagKey;
@property(retain, nonatomic) NSString *searchHintsURLBagKey;
- (void)setQueueSessionManager:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setAssetTypes:(struct __CFArray *)arg1;
- (_Bool)sendActionForDialog:(id)arg1 button:(id)arg2;
@property(readonly, nonatomic) SUScriptExecutionContext *scriptExecutionContext; // @synthesize scriptExecutionContext=_scriptExecutionContext;
- (id)queueSessionManager;
- (_Bool)openURL:(id)arg1 inClientApplication:(id)arg2;
- (_Bool)openInternalURL:(id)arg1;
- (_Bool)openExternalURL:(id)arg1;
- (_Bool)enterAccountFlowWithViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)dismissTopViewControllerAnimated:(_Bool)arg1;
- (_Bool)composeReviewWithViewController:(id)arg1 animated:(_Bool)arg2;
- (id)clientIdentifier;
@property(readonly) SUClientInterface *clientInterface;
- (struct __CFArray *)assetTypes;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;
- (id)init;

@end

