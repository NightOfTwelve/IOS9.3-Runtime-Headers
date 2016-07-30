//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_password;
    NSNumber *_channel;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSNumber *channel; // @synthesize channel=_channel;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3;

@end
