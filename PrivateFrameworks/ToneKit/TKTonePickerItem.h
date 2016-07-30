//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/TKPickerSelectableItem.h>

#import <ToneKit/TKPickerContainerItem-Protocol.h>

@class NSString, TKTonePickerController, TKTonePickerSectionItem;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem>
{
    TKTonePickerController *_parentTonePickerController;
    long long _numberOfChildren;
    unsigned long long _itemKind;
}

- (void)_setItemKind:(unsigned long long)arg1;
@property(nonatomic) unsigned long long itemKind; // @synthesize itemKind=_itemKind;
- (void)_setNumberOfChildren:(long long)arg1;
@property(nonatomic) long long numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property(nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController; // @synthesize _parentTonePickerController;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) TKTonePickerSectionItem *parentSectionItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

