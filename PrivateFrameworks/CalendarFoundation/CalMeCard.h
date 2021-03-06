//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CalendarFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CalMeCard : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSArray *_emailAddresses;
    NSString *_uniqueID;
    long long _version;
}

+ (id)cardFromPath:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property long long version; // @synthesize version=_version;
@property(readonly, retain) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, retain) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, retain) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)writeToPath:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMeCard:(id)arg1;
- (id)preferredEmailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 emailAddresses:(id)arg2 uniqueID:(id)arg3;

@end

