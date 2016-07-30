//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    unsigned long long _machAbsoluteTime;
    long long _categoryType;
    NSDictionary *_context;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly, nonatomic) long long categoryType; // @synthesize categoryType=_categoryType;
@property(readonly, nonatomic) unsigned long long machAbsoluteTime; // @synthesize machAbsoluteTime=_machAbsoluteTime;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 categoryType:(long long)arg3 context:(id)arg4;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;

@end

