//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

#import <FitnessUI/UIPickerViewDataSource-Protocol.h>
#import <FitnessUI/UIPickerViewDelegate-Protocol.h>

@class NSString;

@interface FIUIHealthSettingsWeightPickerController : FIUIHealthSettingsPickerController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    long long numberOfComponents;
    long long numberOfRows;
    CDUnknownBlockType _weightUpdateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType weightUpdateHandler; // @synthesize weightUpdateHandler=_weightUpdateHandler;
- (void).cxx_destruct;
- (void)_updateWithWeightQuantity:(id)arg1;
- (void)setWeightQuantity:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)_weightQuantityForRow:(long long)arg1;
- (double)_weightInLocaleUnitForRow:(long long)arg1;
- (id)_weightDisplayStringForRow:(long long)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)_setDefaultValuesOnWeightPickerIfRequiredWithWeight:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)forceUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

