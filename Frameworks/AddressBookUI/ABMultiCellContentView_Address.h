//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookUI/ABMultiCellContentView_DisplayAlternate.h>

@class NSArray, NSMutableArray;

@interface ABMultiCellContentView_Address : ABMultiCellContentView_DisplayAlternate
{
    NSArray *_lineInfos;
    NSMutableArray *_lineSubviews;
    struct _NSRange _streetRange;
    unsigned long long _entryFieldIndexOfFirstStreetField;
    NSMutableArray *_verticalDividers;
}

+ (id)lineInfosForPropertyGroup:(id)arg1 info:(id)arg2;
+ (id)streetTextForPropertyGroup:(id)arg1 info:(id)arg2;
+ (long long)calculateStreetRowsForText:(id)arg1;
+ (unsigned long long)rowsForPropertyGroup:(id)arg1 info:(id)arg2;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(_Bool)arg6;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)addStreetFieldAnimated:(_Bool)arg1;
- (void)removeStreetFieldAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)streetFieldAtLineIndex:(unsigned long long)arg1;
- (unsigned long long)lineIndexOfStreetField:(id)arg1;
- (void)removeTextFieldAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (id)pickerView;
- (void)reloadFromModel;
- (void)reload;
- (id)propertyKeyForTag:(long long)arg1;
- (long long)tagForPropertyKey:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPropertyGroupInfo:(id)arg1;
- (void)dealloc;

@end

