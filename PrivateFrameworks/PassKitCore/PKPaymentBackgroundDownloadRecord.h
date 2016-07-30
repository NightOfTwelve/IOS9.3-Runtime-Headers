//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding>
{
    long long _taskType;
    long long _retryCount;
}

+ (id)taskWithType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

