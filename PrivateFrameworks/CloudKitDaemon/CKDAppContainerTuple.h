//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKContainerID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying>
{
    NSString *_applicationBundleID;
    NSString *_sourceApplicationBundleID;
    CKContainerID *_containerID;
    NSString *_applicationContainerPath;
}

@property(retain, nonatomic) NSString *applicationContainerPath; // @synthesize applicationContainerPath=_applicationContainerPath;
@property(retain, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(retain, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)pushTokenBundleID;
- (_Bool)isEqual:(id)arg1;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 applicationContainerPath:(id)arg3 containerID:(id)arg4;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerID:(id)arg3;
- (id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2;

@end

