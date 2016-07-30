//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteUI/RUILoaderDelegate-Protocol.h>
#import <RemoteUI/RUIObjectModelDelegate-Protocol.h>
#import <RemoteUI/RUIParserDelegate-Protocol.h>
#import <RemoteUI/UINavigationControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURLSessionConfiguration, RUILoader, RUINavigationController, RUIPage, RUIStyle, UINavigationController, UIViewController;
@protocol RemoteUIControllerDelegate;

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate, UINavigationControllerDelegate>
{
    RUINavigationController *_modalNavigationController;
    NSMutableArray *_objectModels;
    NSMutableArray *_modalObjectModels;
    NSMutableDictionary *_elementChangeHandlers;
    RUIPage *_pageOriginatingLoad;
    NSString *_listeningForSMSIdentifier;
    NSString *_SMSAutoFillToken;
    UIViewController *_hostViewController;
    RUILoader *_loader;
    NSString *_userAgentString;
    id <RemoteUIControllerDelegate> _delegate;
    CDUnknownBlockType _loadCompletion;
    NSURLSessionConfiguration *_sessionConfiguration;
    RUIStyle *_style;
}

@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(copy, nonatomic) CDUnknownBlockType loadCompletion; // @synthesize loadCompletion=_loadCompletion;
@property(nonatomic) __weak id <RemoteUIControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;
@property(retain, nonatomic) RUILoader *loader; // @synthesize loader=_loader;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *navigationController;
- (void)_stopListeningForSMSAutoFill;
- (void)_beginListeningForSMSAutoFill;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)objectModel:(id)arg1 willLoadLinkURL:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(_Bool)arg3;
- (id)viewControllerForAlertPresentation;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
- (id)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)sessionConfigurationForLoader:(id)arg1;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)setHandlerForButtonName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setHandlerForButtonsMatching:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeHandlerForKey:(id)arg1;
- (id)setHandlerForElementsMatching:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setHandlerForElementName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setHandlerWithKey:(id)arg1 forElementsMatching:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *displayedPages;
- (void)_modalViewControllerWasPopped:(id)arg1;
- (void)_modalNavigationWasDismissed;
- (id)dismissObjectModelsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popObjectModelAnimated:(_Bool)arg1;
- (void)pushObjectModel:(id)arg1 animated:(_Bool)arg2;
- (void)_removePreviousObjectModelsBackToIdentifier:(id)arg1;
- (void)_didRemoveObjectModel:(id)arg1;
- (void)_willPresentObjectModel:(id)arg1 modally:(_Bool)arg2;
- (void)loadData:(id)arg1 baseURL:(id)arg2;
- (void)loadURL:(id)arg1 postBody:(id)arg2;
- (void)_loadURL:(id)arg1 fromObjectModel:(id)arg2 postBody:(id)arg3;
- (void)loadRequest:(id)arg1;
- (void)loadURL:(id)arg1 postBody:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadURL:(id)arg1 postBody:(id)arg2 fromObjectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

