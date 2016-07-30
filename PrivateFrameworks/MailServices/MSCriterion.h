//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MailServices/NSSecureCoding-Protocol.h>

@class NSString;
@protocol NSObject;

@interface MSCriterion : NSObject <NSSecureCoding>
{
    NSString *_type;
    NSString *_qualifier;
    id <NSObject> _criteria;
}

+ (_Bool)supportsSecureCoding;
- (id)criteria;
- (id)qualifier;
- (id)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1 allRequired:(_Bool)arg2;
- (id)initWithType:(id)arg1 qualifier:(id)arg2 expression:(id)arg3;
- (id)description;
- (void)dealloc;
- (id)_initWithType:(id)arg1 qualifier:(id)arg2 criteria:(id)arg3;
- (id)init;

@end

