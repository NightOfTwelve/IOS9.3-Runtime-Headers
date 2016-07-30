//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSString, TSKPopoverBasedViewController, UIView;

@protocol TSKPopoverBasedViewControllerDelegate <NSObject>

@optional
- (void)popoverController:(TSKPopoverBasedViewController *)arg1 learnMoreAPDIDTapped:(NSString *)arg2;
- (double)paddingAboveHalfHeightAtTopOfScreen;
- (_Bool)popoverController:(TSKPopoverBasedViewController *)arg1 shouldReceiveOutsideTouchAtLocation:(struct CGPoint)arg2 inView:(UIView *)arg3;
- (_Bool)wantsCloseArrowForPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerDidDismissPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerWillDismissPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerWillShowPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
@end

