//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction
{
}

@property(readonly, copy, nonatomic) NSString *networkPassword;
@property(readonly, copy, nonatomic) NSString *networkSSID;
@property(readonly, copy, nonatomic) NSString *deviceName;
- (id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3;
- (id)init;

@end

