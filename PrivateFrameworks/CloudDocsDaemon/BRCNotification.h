//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BRQueryItem.h>

@class BRCItemID, BRCLocalContainer, NSMutableSet, NSNumber, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCNotification : BRQueryItem
{
    BRCItemID *_itemID;
    BRCItemID *_parentID;
    unsigned long long _oldParentFileID;
    unsigned long long _parentFileID;
    NSSet *_parentIDs;
    NSMutableSet *_containerIDsWithReverseAliases;
    BRCLocalContainer *_container;
    NSString *_aliasContainerID;
    NSString *_unsaltedBookmarkData;
}

+ (id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2;
+ (id)notificationGatheredFromItem:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *unsaltedBookmarkData; // @synthesize unsaltedBookmarkData=_unsaltedBookmarkData;
@property(readonly, nonatomic) NSString *aliasContainerID; // @synthesize aliasContainerID=_aliasContainerID;
@property(readonly, nonatomic) BRCLocalContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSMutableSet *containerIDsWithReverseAliases; // @synthesize containerIDsWithReverseAliases=_containerIDsWithReverseAliases;
@property(retain, nonatomic) NSSet *parentIDs; // @synthesize parentIDs=_parentIDs;
@property(readonly, nonatomic) unsigned long long parentFileID; // @synthesize parentFileID=_parentFileID;
@property(readonly, nonatomic) unsigned long long oldParentFileID; // @synthesize oldParentFileID=_oldParentFileID;
@property(readonly, nonatomic) BRCItemID *parentID; // @synthesize parentID=_parentID;
@property(readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (void)merge:(id)arg1;
- (_Bool)canMerge:(id)arg1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (void)_addAliasDecoration:(id)arg1;
- (id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
@property(readonly, nonatomic) NSNumber *parentFileObjectID;
@property(readonly, nonatomic) NSNumber *oldParentFileObjectID;
- (id)subclassDescription;

// Remaining properties
@property(readonly, nonatomic) NSURL *url; // @dynamic url;

@end

