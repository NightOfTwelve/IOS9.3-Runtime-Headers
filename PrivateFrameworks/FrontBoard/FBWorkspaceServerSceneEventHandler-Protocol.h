//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSWorkspaceSceneActionsEvent, FBSWorkspaceSceneClientSettingsChangedEvent, FBSWorkspaceSceneLayerEvent;

@protocol FBWorkspaceServerSceneEventHandler <NSObject>
- (void)sceneDidReceiveActions:(FBSWorkspaceSceneActionsEvent *)arg1;
- (void)sceneDidUpdateClientSettings:(FBSWorkspaceSceneClientSettingsChangedEvent *)arg1;
- (void)sceneDetachLayer:(FBSWorkspaceSceneLayerEvent *)arg1;
- (void)sceneUpdateLayer:(FBSWorkspaceSceneLayerEvent *)arg1;
- (void)sceneAttachLayer:(FBSWorkspaceSceneLayerEvent *)arg1;
@end

