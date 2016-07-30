//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <GameCenterUI/GKRemoteViewControllerDelegate-Protocol.h>
#import <GameCenterUI/GKServiceViewControllerDelegate-Protocol.h>

@class GKGame, NSExtension, NSString;

@interface GKUIRemoteViewController : _UIRemoteViewController <GKRemoteViewControllerDelegate, GKServiceViewControllerDelegate>
{
    GKGame *_game;
    NSExtension *_extension;
    id _requestIdentifier;
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (_Bool)shouldPropagateAppearanceCustomizations;
+ (id)initialItemsForExtension;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)setupCallbackBlocksForExtension:(id)arg1 withParentViewController:(id)arg2;
@property(copy, nonatomic) id requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(CDUnknownBlockType)arg3;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)nudge;
- (id)contextForRequestIdentifier;
- (void)cancelExtension;
- (long long)_desiredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

