//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKDOMFeature-Protocol.h>
#import <ITMLKit/IKJSPlayerAppBridge-Protocol.h>

@class IKAppContext, NSString;
@protocol IKAppPlayerDelegate;

@interface IKAppDOMPlayer : NSObject <IKJSPlayerAppBridge, IKDOMFeature>
{
    NSString *_featureName;
    IKAppContext *_appContext;
    id <IKAppPlayerDelegate> _delegate;
}

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(nonatomic) __weak id <IKAppPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (void).cxx_destruct;
- (id)currentAVMediaElementForPlayer:(id)arg1;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

