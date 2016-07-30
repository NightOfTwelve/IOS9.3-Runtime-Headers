//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/PKModularService-Protocol.h>

@class NSString, TKTokenDriver;

@interface TKTokenService_Subsystem : NSObject <PKModularService>
{
    TKTokenDriver *_driver;
    NSString *_driverClassID;
}

+ (id)sharedSubsystem;
+ (id)initForPlugInKit;
@property(readonly, nonatomic) NSString *driverClassID; // @synthesize driverClassID=_driverClassID;
@property(readonly, nonatomic) TKTokenDriver *driver; // @synthesize driver=_driver;
- (void).cxx_destruct;
- (void)endUsing:(id)arg1;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

