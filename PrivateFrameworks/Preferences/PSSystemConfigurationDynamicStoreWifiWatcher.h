//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PSSystemConfigurationDynamicStoreWifiWatcher : NSObject
{
    struct __SCDynamicStore *_prefs;
    struct __CFString *_wifiKey;
    struct __CFString *_wifiInterface;
    struct __CFString *_tetheringLink;
}

+ (_Bool)wifiEnabled;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (id)wifiConfig;
- (id)_wifiNameWithState:(id)arg1;
- (id)_wifiPowerWithState:(id)arg1;
- (id)_wifiTetheringWithState:(id)arg1;
- (void)findKeysAirPortState:(id *)arg1 andTetheringState:(id *)arg2;

@end

