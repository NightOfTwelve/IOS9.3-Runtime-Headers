//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSDescriptionProviding-Protocol.h>
#import <SplashBoard/NSCoding-Protocol.h>

@class NSMutableSet, NSSet, NSString, XBApplicationIdentity;

@interface XBApplicationSnapshotGroup : NSObject <NSCoding, BSDescriptionProviding>
{
    NSString *_identifier;
    XBApplicationIdentity *_appIdentity;
    NSMutableSet *_snapshots;
}

@property(readonly, copy, nonatomic) NSSet *snapshots; // @synthesize snapshots=_snapshots;
@property(copy) XBApplicationIdentity *appIdentity; // @synthesize appIdentity=_appIdentity;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_invalidate;
- (_Bool)_validateWithAppIdentity:(id)arg1;
- (_Bool)removeSnapshot:(id)arg1;
- (void)addSnapshot:(id)arg1;
@property(readonly, copy, nonatomic) NSString *containerPath; // @dynamic containerPath;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 appIdentity:(id)arg2;
- (id)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

