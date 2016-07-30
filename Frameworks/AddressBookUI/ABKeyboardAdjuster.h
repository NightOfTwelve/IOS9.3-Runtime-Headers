//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface ABKeyboardAdjuster : NSObject
{
    NSMutableSet *_adjustmentRecords;
    _Bool _active;
}

+ (id)sharedAdjuster;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)resetAdjustment;
- (void)dateFieldDateDidEndEditingNotification:(id)arg1;
- (void)dateFieldDateDidBeginEditingNotification:(id)arg1;
- (void)textViewTextDidEndEditingNotification:(id)arg1;
- (void)textViewTextDidBeginEditingNotification:(id)arg1;
- (void)textFieldTextDidEndEditingNotification:(id)arg1;
- (void)textFieldTextDidBeginEditingNotification:(id)arg1;
- (_Bool)shouldForceAutomaticKeyboardForView:(id)arg1;
- (_Bool)containsScrollView:(id)arg1;
- (void)removeScrollView:(id)arg1;
- (void)addScrollView:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)manuallyAdjustEdgeInsets:(struct UIEdgeInsets)arg1 force:(_Bool)arg2;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (void)cancelDelayedAdjustmentsForView:(id)arg1;
- (id)recordForScrollView:(id)arg1;

@end

