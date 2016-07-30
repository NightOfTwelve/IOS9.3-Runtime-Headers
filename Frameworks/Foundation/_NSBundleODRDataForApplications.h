//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/_NSBundleODRDataCommon.h>

@class NSDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon
{
    NSDictionary *_tagToTagState;
    NSMutableSet *_extensionConnections;
    NSObject<OS_dispatch_group> *_initialStateGroup;
    NSString *_rootSandboxPath;
}

+ (id)dataForBundle:(id)arg1 createIfRequired:(_Bool)arg2;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (double)preservationPriorityForTag:(id)arg1;
- (void)_waitForDaemon;
- (void)addExtensionEndpoint:(id)arg1;
- (void)assetPacksBecameUnavailable:(id)arg1;
- (void)assetPacksBecameAvailable:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;

@end
