//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPostalAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;
- (id)bestValue:(id)arg1;
- (_Bool)_isMinimalAddress:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (id)defaultActionURL;
- (id)displayStringForValue:(id)arg1;
- (id)normalizedValue;
@property(readonly, nonatomic) CNPostalAddress *address;

@end

