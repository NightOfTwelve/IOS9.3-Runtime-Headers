//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKPass, PKPassGroupView, PKPassView, PKReusablePassViewQueue;

@protocol PKPassGroupViewDelegate <NSObject>

@optional
- (struct CGRect)groupView:(PKPassGroupView *)arg1 targetPageControlFrameForProposedFrame:(struct CGRect)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(PKPassGroupView *)arg1;
- (PKReusablePassViewQueue *)groupViewReusablePassViewQueue:(PKPassGroupView *)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(PKPassGroupView *)arg1;
- (_Bool)groupViewPassesGrowCenteredWhenFlipped:(PKPassGroupView *)arg1;
- (_Bool)groupViewPassesGrowWhenFlipped:(PKPassGroupView *)arg1;
- (void)groupView:(PKPassGroupView *)arg1 didScrollToPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 resizeButtonPressedForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 flipButtonPressedForPass:(PKPass *)arg2;
- (_Bool)groupView:(PKPassGroupView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didUpdatePassView:(PKPassView *)arg2;
- (void)groupViewFrontPassDidResize:(PKPassGroupView *)arg1 animated:(_Bool)arg2;
- (_Bool)groupViewShouldAllowPassResize:(PKPassGroupView *)arg1;
- (void)groupViewFrontPassDidFlip:(PKPassGroupView *)arg1 animated:(_Bool)arg2;
- (_Bool)groupViewShouldAllowPassFlip:(PKPassGroupView *)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(PKPassGroupView *)arg1;
- (void)groupView:(PKPassGroupView *)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (void)groupViewPanDidEnd:(PKPassGroupView *)arg1;
- (void)groupViewPanDidBegin:(PKPassGroupView *)arg1;
- (_Bool)groupViewShouldAllowPanning:(PKPassGroupView *)arg1;
- (void)groupView:(PKPassGroupView *)arg1 didEndShowingFontmostPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didBeginShowingFontmostPassView:(PKPassView *)arg2;
- (void)groupViewTapped:(PKPassGroupView *)arg1;
@end

