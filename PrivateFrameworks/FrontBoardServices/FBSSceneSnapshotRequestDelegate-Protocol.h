//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSSceneSnapshotContext, FBSSceneSnapshotRequest;

@protocol FBSSceneSnapshotRequestDelegate <NSObject>
- (_Bool)snapshotRequest:(FBSSceneSnapshotRequest *)arg1 performWithContext:(FBSSceneSnapshotContext *)arg2;
- (_Bool)snapshotRequestAllowSnapshot:(FBSSceneSnapshotRequest *)arg1;
@end

