//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface TSWPLoadableFonts : NSObject
{
    NSOperationQueue *_fontQueue;
    NSMutableDictionary *_loadableFonts;
    NSMutableDictionary *_loadableFontFamilies;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
- (void)p_loadFontWithInfo:(id)arg1;
- (void)unregisterFontsForGroup:(id)arg1;
- (void)registerFontName:(id)arg1 forPath:(id)arg2 forGroup:(id)arg3 isObfuscated:(_Bool)arg4 backgroundLoad:(_Bool)arg5;
- (void)loadFontsForGroup:(id)arg1;
- (void)loadFontWithName:(id)arg1;
- (void)loadAll;
- (void)backgroundLoadAll;
- (void)resumeBackgroundLoading;
- (void)pauseBackgroundLoading;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

