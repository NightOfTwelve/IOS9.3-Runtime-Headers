//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PreferencesUI/NSObject-Protocol.h>

@class NSNumber, NSString, TKTonePickerViewController, TKVibrationPickerViewController;

@protocol TKTonePickerViewControllerDelegate <NSObject>

@optional
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 didDismissVibrationPickerViewController:(TKVibrationPickerViewController *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 willPresentVibrationPickerViewController:(TKVibrationPickerViewController *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 selectedMediaItemWithIdentifier:(NSNumber *)arg2;
- (void)tonePickerViewController:(TKTonePickerViewController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
@end

