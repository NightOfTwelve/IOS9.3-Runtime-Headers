//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSCopying-Protocol.h>

@class NSData, NSDictionary, NSString, SBSApplicationShortcutIcon;

@interface SBSApplicationShortcutItem : NSObject <NSCopying, BSXPCCoding>
{
    NSString *_type;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    SBSApplicationShortcutIcon *_icon;
    unsigned long long _activationMode;
    NSString *_bundleIdentifierToLaunch;
    NSData *_userInfoData;
}

+ (id)staticShortcutItemWithDictionary:(id)arg1 localizationHandler:(CDUnknownBlockType)arg2;
+ (unsigned long long)_activationModeForString:(id)arg1;
+ (long long)_iconTypeForString:(id)arg1;
@property(retain, nonatomic) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
@property(copy, nonatomic) NSString *bundleIdentifierToLaunch; // @synthesize bundleIdentifierToLaunch=_bundleIdentifierToLaunch;
@property(nonatomic) unsigned long long activationMode; // @synthesize activationMode=_activationMode;
@property(copy, nonatomic) SBSApplicationShortcutIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

