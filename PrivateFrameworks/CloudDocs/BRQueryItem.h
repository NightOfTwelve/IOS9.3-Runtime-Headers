//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CloudDocs/NSCopying-Protocol.h>
#import <CloudDocs/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString, NSURL;

@interface BRQueryItem : NSObject <NSSecureCoding, NSCopying>
{
    union {
        struct {
            unsigned int downloadStatus:2;
            unsigned int uploadStatus:2;
            unsigned int itemStatus:2;
            unsigned int conflicted:1;
            unsigned int document:1;
            unsigned int preCrashMarker:1;
            unsigned int isUploadActive:1;
            unsigned int isDownloadActive:1;
            unsigned int isDownloadRequested:1;
            unsigned int isAlias:1;
            unsigned int shareOptions:3;
            unsigned int isHiddenExt:1;
        } ;
        unsigned int value;
    } _flags;
    unsigned short _diffs;
    NSString *_containerID;
    NSString *_parentPath;
    NSString *_logicalName;
    NSString *_physicalName;
    NSNumber *_fileObjectID;
    NSNumber *_size;
    NSNumber *_mtime;
    NSNumber *_btime;
    NSMutableDictionary *_attrs;
    NSURL *_url;
    NSURL *_localRepresentationURL;
    id _replacement;
    _Bool _isNetworkOffline;
    long long _logicalHandle;
    long long _physicalHandle;
}

+ (id)askDaemonQueryItemForURL:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(nonatomic) _Bool isNetworkOffline; // @synthesize isNetworkOffline=_isNetworkOffline;
@property(readonly, nonatomic) NSNumber *btime; // @synthesize btime=_btime;
@property(readonly, nonatomic) NSNumber *mtime; // @synthesize mtime=_mtime;
@property(readonly, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) NSString *physicalName; // @synthesize physicalName=_physicalName;
@property(readonly, nonatomic) NSString *logicalName; // @synthesize logicalName=_logicalName;
@property(readonly, nonatomic) NSString *parentPath; // @synthesize parentPath=_parentPath;
@property(readonly, nonatomic) NSNumber *fileObjectID; // @synthesize fileObjectID=_fileObjectID;
@property(readonly, nonatomic) unsigned short diffs; // @synthesize diffs=_diffs;
@property(readonly, nonatomic) NSURL *localRepresentationURL; // @synthesize localRepresentationURL=_localRepresentationURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)attributesForNames:(id)arg1;
- (id)attributeNames;
- (id)valueForKey:(id)arg1;
- (id)attributeForName:(id)arg1;
@property(nonatomic) id replacement;
- (void)merge:(id)arg1;
- (_Bool)canMerge:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)_mergeURL:(id)arg1;
- (void)_mergeAttrs:(id)arg1;
@property(readonly, nonatomic) _Bool hasTransferStatuses;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToQueryItem:(id)arg1;
@property(readonly, nonatomic) NSString *path;
- (id)description;
- (id)subclassDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQueryItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_setAttr:(id)arg1 forKey:(id)arg2;
- (id)sharedItemRole;
- (_Bool)isHiddenExt;
- (_Bool)isShared;
@property(readonly, nonatomic) _Bool isAlias;
@property(readonly, nonatomic) _Bool isDocument;
@property(readonly, nonatomic) _Bool isUploadActive;
@property(readonly, nonatomic) _Bool isDownloadRequested;
@property(readonly, nonatomic) _Bool isDownloadActive;
@property(nonatomic) _Bool isPreCrash;
- (void)clearDiffs;
- (void)markDead;
@property(readonly, nonatomic) _Bool isDead;
@property(readonly, nonatomic) _Bool isLive;
@property(readonly, nonatomic) _Bool isConflicted;
@property(readonly, nonatomic) _Bool isInTransfer;
@property(readonly, nonatomic) unsigned int shareOptions;
@property(readonly, nonatomic) unsigned int uploadStatus;
@property(readonly, nonatomic) unsigned int downloadStatus;

@end

