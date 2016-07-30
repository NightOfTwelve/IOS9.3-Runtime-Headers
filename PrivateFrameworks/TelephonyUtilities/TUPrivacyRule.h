//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSCoding-Protocol.h>

@class NSString, TUPhoneNumber;

@interface TUPrivacyRule : NSObject <NSCoding>
{
    int _type;
    TUPhoneNumber *_phoneNumber;
    NSString *_email;
}

+ (id)ruleForEmail:(id)arg1;
+ (id)ruleForPhoneNumber:(id)arg1;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) TUPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForEmail:(id)arg1;
- (id)initForPhoneNumber:(id)arg1;

@end

