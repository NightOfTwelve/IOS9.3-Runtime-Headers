//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@interface SUCarrierDownloadPolicyProperties : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)_longLongForKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_carrierSUProperties;
- (_Bool)_isValidHour:(long long)arg1;
- (long long)peakEndHour;
- (long long)peakStartHour;
- (unsigned long long)numberOfDaysToWaitForCellularAutoDownload;
- (long long)maximumDownloadSizeInBytes;
- (_Bool)isAutoDownloadAllowable;
- (_Bool)isDownloadAllowableOver2G;
- (_Bool)isDownloadAllowable;
- (_Bool)isDownloadFree;

@end

