//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardUIServices/FBUISceneClientProxy-Protocol.h>

@class FBUISceneParameters;
@protocol FBUISceneClientDelegate, FBUISceneHostProxy;

@protocol FBUISceneClient <FBUISceneClientProxy>
- (void)sceneHost:(id <FBUISceneHostProxy>)arg1 registerWithInitialParameters:(FBUISceneParameters *)arg2;
- (void)registerWithDelegate:(id <FBUISceneClientDelegate>)arg1;
@end

