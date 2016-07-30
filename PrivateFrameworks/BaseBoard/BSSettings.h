//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSMutableCopying-Protocol.h>

@class NSMapTable, NSString;
@protocol BSSettingDescriptionProvider;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding, BSDescriptionProviding>
{
    id <BSSettingDescriptionProvider> _descriptionProvider;
    NSMapTable *_settingToFlagMap;
    NSMapTable *_settingToObjectMap;
}

@property(nonatomic) __weak id <BSSettingDescriptionProvider> descriptionProvider; // @synthesize descriptionProvider=_descriptionProvider;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_setObject:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)_setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)_applyToSettings:(id)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_newMapTable;
- (void)_enumerateSettingsForObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)allSettings;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)objectForSetting:(unsigned long long)arg1;
- (void)enumerateFlagsWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)boolForSetting:(unsigned long long)arg1;
- (long long)flagForSetting:(unsigned long long)arg1;
- (_Bool)isEmpty;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

