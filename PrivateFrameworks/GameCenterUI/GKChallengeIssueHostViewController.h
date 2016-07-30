//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKUIRemoteViewController.h>

#import <GameCenterUI/GKChallengeIssueHostProtocol-Protocol.h>

@class GKGame, GKHostedChallengeIssueController, NSString;

@interface GKChallengeIssueHostViewController : GKUIRemoteViewController <GKChallengeIssueHostProtocol>
{
    GKHostedChallengeIssueController *_delegateWeak;
}

+ (id)challengeExtension;
- (void)setChallenge:(id)arg1 withPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(_Bool)arg4;
- (id)contextForRequestIdentifier;
- (void)didFinishWithPlayerInternals:(id)arg1 message:(id)arg2;
- (void)remoteViewControllerIsCanceling;
@property(nonatomic) GKHostedChallengeIssueController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

