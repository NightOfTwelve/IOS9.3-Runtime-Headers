//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMFoundation/IMItem.h>

#import <IMFoundation/IMRemoteObjectCoding-Protocol.h>
#import <IMFoundation/NSCoding-Protocol.h>
#import <IMFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IMGroupActionItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
    long long _actionType;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
}

@property(retain, nonatomic) NSString *otherUnformattedID; // @synthesize otherUnformattedID=_otherUnformattedID;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(retain, nonatomic) NSString *otherCountryCode; // @synthesize otherCountryCode=_otherCountryCode;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (id)copyDictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

