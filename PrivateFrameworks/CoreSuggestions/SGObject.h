//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class SGOrigin, SGRecordId;

@interface SGObject : NSObject <NSCopying, NSSecureCoding>
{
    SGRecordId *_recordId;
    SGOrigin *_origin;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) SGOrigin *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToSuggestion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

