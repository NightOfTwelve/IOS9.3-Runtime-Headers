//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BrightnessSystem : NSObject
{
    _Bool _initializationComplete;
}

- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (_Bool)isAlsSupported;
- (id)copyPropertyForKey:(id)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

