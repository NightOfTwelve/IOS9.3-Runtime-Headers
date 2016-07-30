//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardUIServices/NSObject-Protocol.h>

@class FBUISceneIdentity, FBUISceneSpecification, NSString;
@protocol FBUISceneWorkspace;

@protocol FBUISceneManager <NSObject>
- (void)workspace:(id <FBUISceneWorkspace>)arg1 destroySceneWithIdentity:(FBUISceneIdentity *)arg2;
- (void)workspace:(id <FBUISceneWorkspace>)arg1 createSceneWithName:(NSString *)arg2 specification:(FBUISceneSpecification *)arg3;
- (FBUISceneIdentity *)workspace:(id <FBUISceneWorkspace>)arg1 identityForSceneWithName:(NSString *)arg2 specification:(FBUISceneSpecification *)arg3;
- (void)invalidateSceneWorkspace:(id <FBUISceneWorkspace>)arg1;
- (void)registerSceneWorkspace:(id <FBUISceneWorkspace>)arg1;
@end

