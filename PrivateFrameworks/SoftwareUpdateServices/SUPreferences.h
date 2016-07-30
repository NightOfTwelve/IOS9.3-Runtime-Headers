//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SUPreferences : NSObject
{
    int _logLevel;
    _Bool _disableUserWiFiOnlyPeriod;
    _Bool _disableBuildNumberComparison;
    _Bool _allowSameBuildUpdates;
    _Bool _disableAvailabilityAlerts;
    _Bool _disableAutoDownload;
    _Bool _simulateAutoDownload;
    _Bool _disableAutoSU;
    struct __asl_object_s *_aslHandle;
    _Bool _scanWeeklyInternally;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool scanWeeklyInternally; // @synthesize scanWeeklyInternally=_scanWeeklyInternally;
@property(readonly, nonatomic) struct __asl_object_s *aslHandle; // @synthesize aslHandle=_aslHandle;
@property(readonly, nonatomic, getter=isAutoSUDisabled) _Bool disableAutoSU; // @synthesize disableAutoSU=_disableAutoSU;
@property(readonly, nonatomic) _Bool simulateAutoDownload; // @synthesize simulateAutoDownload=_simulateAutoDownload;
@property(readonly, nonatomic, getter=isAutoDownloadDisabled) _Bool disableAutoDownload; // @synthesize disableAutoDownload=_disableAutoDownload;
@property(readonly, nonatomic) _Bool disableAvailabilityAlerts; // @synthesize disableAvailabilityAlerts=_disableAvailabilityAlerts;
@property(readonly, nonatomic) _Bool allowSameBuildUpdates; // @synthesize allowSameBuildUpdates=_allowSameBuildUpdates;
@property(readonly, nonatomic) _Bool disableBuildNumberComparison; // @synthesize disableBuildNumberComparison=_disableBuildNumberComparison;
@property(readonly, nonatomic) _Bool disableUserWiFiOnlyPeriod; // @synthesize disableUserWiFiOnlyPeriod=_disableUserWiFiOnlyPeriod;
@property(readonly, nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
- (void *)_copyPreferenceForKey:(struct __CFString *)arg1 ofType:(unsigned long long)arg2;
- (_Bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (void)_loadPreferences;
- (int)_defaultLogLevel;
- (void)reload;
- (void)dealloc;
- (id)init;

@end

