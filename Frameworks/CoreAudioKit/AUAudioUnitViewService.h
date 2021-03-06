//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CoreAudioKit/AUAudioUnitRemoteViewProtocol-Protocol.h>

@class AURemoteExtensionContext, NSString;

@interface AUAudioUnitViewService : UIViewController <AUAudioUnitRemoteViewProtocol>
{
    AURemoteExtensionContext *_extensionContext;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
@property AURemoteExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void)connectToContextWithSessionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_connectChildView:(CDUnknownBlockType)arg1;
- (id)exportedInterface;
- (id)remoteViewControllerInterface;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

