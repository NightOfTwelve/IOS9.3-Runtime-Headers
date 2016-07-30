//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/ABPersonViewControllerDelegate-Protocol.h>
#import <EventKitUI/EKEditItemViewControllerProtocol-Protocol.h>

@class ABPersonViewController, NSString;
@protocol EKEditItemViewControllerDelegate, EKIdentityProtocol;

@interface EKIdentityViewController : UIViewController <ABPersonViewControllerDelegate, EKEditItemViewControllerProtocol>
{
    id <EKIdentityProtocol> _identity;
    ABPersonViewController *_personViewController;
}

- (void).cxx_destruct;
- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setIdentity:(id)arg1;
- (void)loadView;
- (id)initWithIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool presentModally;
@property(readonly) Class superclass;

@end

