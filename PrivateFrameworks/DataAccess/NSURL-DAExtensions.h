//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (DAExtensions)
+ (int)da_classicPortForScheme:(id)arg1;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (id)da_URLWithDirtyString:(id)arg1;
- (id)da_pathWithoutTrailingRemovingSlash;
- (id)da_rawPath;
- (id)da_urlBySettingPath:(id)arg1;
- (id)da_urlBySettingPort:(id)arg1;
- (id)da_urlBySettingHost:(id)arg1;
- (id)da_urlBySettingScheme:(id)arg1;
- (id)da_urlByRemovingUsername;
- (id)da_urlBySettingUsername:(id)arg1;
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(_Bool)arg2;
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(_Bool)arg2;
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(_Bool)arg2;
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(_Bool)arg2;
- (_Bool)da_isEqualToDAVURL:(id)arg1;
@end

