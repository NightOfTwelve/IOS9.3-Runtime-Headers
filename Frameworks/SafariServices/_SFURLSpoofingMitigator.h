//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _SFURLSpoofingMitigator : NSObject
{
    NSDate *_dateOfStartOfLastProvisionalNavigation;
    unsigned long long _recentlyInterruptedNavigationCount;
    _Bool _UIShouldReflectCommittedURLInsteadOfCurrentURL;
}

+ (_Bool)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
@property(readonly, nonatomic) _Bool UIShouldReflectCommittedURLInsteadOfCurrentURL; // @synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL;
- (void).cxx_destruct;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(_Bool)arg1;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (void)didCommitNavigation;
- (void)didFailProvisionalNavigationWithError:(id)arg1;
- (void)didStartProvisionalNavigation;

@end

