//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface QLDisplayBundleLoader : NSObject
{
    NSMutableDictionary *_displayBundlesById;
}

+ (_Bool)URLIsAudioOnly:(id)arg1;
+ (id)sharedLoader;
- (id)copyDisplayBundleWithPreviewItem:(id)arg1 displayBundleIdentifier:(id)arg2;
- (Class)displayBundleClassForPreviewItem:(id)arg1;
- (Class)loadDisplayBundle:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_lookForDisplayBundles;

@end
