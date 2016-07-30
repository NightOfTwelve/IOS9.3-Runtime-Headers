//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BBSettingsGateway, NSArray, NSDateComponents;

@interface QuietHoursStateController : NSObject
{
    unsigned long long _mode;
    NSArray *_overrides;
    unsigned long long _privilegeTypes;
    int _recordID;
    NSDateComponents *_fromComponents;
    NSDateComponents *_toComponents;
    BBSettingsGateway *_bbGateway;
    unsigned long long _overrideType;
    _Bool _valid;
    _Bool _isEffectiveWhileUnlocked;
    NSArray *_behaviorOverrides;
    long long _overrideStatus;
}

+ (void)setScheduledRangeFrom:(id)arg1 to:(id)arg2;
+ (void)setScheduledEnabled:(_Bool)arg1;
+ (void)setManualEnabled:(_Bool)arg1;
+ (_Bool)isDNDScheduled;
+ (id)sharedController;
@property(nonatomic) long long overrideStatus; // @synthesize overrideStatus=_overrideStatus;
@property(nonatomic) unsigned long long overrideType; // @synthesize overrideType=_overrideType;
@property(readonly, nonatomic) BBSettingsGateway *bbGateway; // @synthesize bbGateway=_bbGateway;
@property(retain, nonatomic) NSDateComponents *toComponents; // @synthesize toComponents=_toComponents;
@property(retain, nonatomic) NSDateComponents *fromComponents; // @synthesize fromComponents=_fromComponents;
@property(nonatomic) int recordID; // @synthesize recordID=_recordID;
@property(nonatomic) unsigned long long privilegeTypes; // @synthesize privilegeTypes=_privilegeTypes;
@property(nonatomic) _Bool isEffectiveWhileUnlocked; // @synthesize isEffectiveWhileUnlocked=_isEffectiveWhileUnlocked;
@property(copy, nonatomic) NSArray *overrides; // @synthesize overrides=_overrides;
@property(copy, nonatomic) NSArray *behaviorOverrides; // @synthesize behaviorOverrides=_behaviorOverrides;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (void)setAllowedGroup:(id)arg1 recordID:(int)arg2 groupName:(id)arg3;
- (int)userSelectedGroupID;
- (unsigned long long)allowedGroupType;
- (void)setRepeatedCalls:(_Bool)arg1;
- (_Bool)manualModeEnabled;
- (_Bool)repeatedCalls;
- (void)resetToFallbackRange;
- (void)dealloc;
- (id)init;

@end

