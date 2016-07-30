//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSDate, NSString;

@interface WBSAddressBookMatch : WBSFormAutoFillItem
{
    id _value;
    NSString *_property;
    NSString *_key;
    NSString *_identifier;
    NSString *_label;
}

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)completion;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4;
@property(copy, nonatomic) NSDate *dateValue;
@property(copy, nonatomic) NSString *stringValue;
- (void)_setValue:(id)arg1;

@end

