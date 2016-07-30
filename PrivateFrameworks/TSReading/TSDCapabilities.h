//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSDCapabilities : NSObject
{
    long long _platform;
    long long _device;
    long long _renderer;
}

+ (id)currentCapabilities;
@property(readonly, nonatomic) long long renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) struct CGSize maximumTextureSize;
@property(readonly, nonatomic) _Bool hasLightningPort;
@property(readonly, nonatomic) _Bool isRendererH5OrBelow;
@property(readonly, nonatomic) _Bool isRendererH4OrBelow;
@property(readonly, nonatomic) _Bool isRendererH3OrBelow;
- (id)init;
- (void)p_setupDevice;
- (void)p_setupPlatform;

@end

