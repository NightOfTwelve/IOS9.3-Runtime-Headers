//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSCoding-Protocol.h>

@class NSArray, NSString, XBLaunchInterface;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSCoding>
{
    XBLaunchInterface *_defaultInterface;
    _Bool _launchesOpaque;
    NSArray *_launchInterfaces;
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_sandboxPath;
    NSString *_bundleContainerPath;
}

+ (id)_snapshotPredicateForRequest:(id)arg1;
+ (void)removeCompatibilityInfoForBundleIdentifier:(id)arg1;
+ (id)_compatibilityInfoForAppInfo:(id)arg1;
@property(copy, nonatomic) NSString *bundleContainerPath; // @synthesize bundleContainerPath=_bundleContainerPath;
@property(nonatomic) _Bool launchesOpaque; // @synthesize launchesOpaque=_launchesOpaque;
@property(copy, nonatomic) NSString *sandboxPath; // @synthesize sandboxPath=_sandboxPath;
@property(copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSArray *launchInterfaces; // @synthesize launchInterfaces=_launchInterfaces;
- (void)_generateLaunchImageForRequest:(id)arg1 remoteContextID:(unsigned int)arg2 snapshotProvider:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureSnapshot:(id)arg1 withLaunchImageForRequest:(id)arg2 remoteContextID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addLaunchImageForRequest:(id)arg1 remoteContextID:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)existingLaunchImageForRequest:(id)arg1;
- (void)configureSnapshot:(id)arg1 forLaunchRequest:(id)arg2;
- (id)launchInterfaceIdentifierForRequest:(id)arg1;
- (id)launchInterfaceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) XBLaunchInterface *defaultLaunchInterface;
@property(readonly, nonatomic) _Bool allowsSavingLaunchImages;
- (void)_writeOutChanges;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithBundle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

