//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCDocumentItem, BRCItemID, BRCLocalItem, BRCPackageItem, BRCRelativePath, BRCServerItem;

@interface BRCPathToItemLookup : NSObject
{
    BRCRelativePath *_pathOfItem;
    BRCRelativePath *_relpathOfFSEvent;
    BRCLocalItem *_matchByFileID;
    BRCDocumentItem *_matchByDocumentID;
    BRCLocalItem *_matchByPath;
    BRCServerItem *_serverItem;
    BRCServerItem *_serverByPath;
    BRCPackageItem *_packageItem;
    BRCItemID *_parentID;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byPath:1;
        unsigned int parentID:1;
        unsigned int serverItem:1;
        unsigned int serverByPath:1;
        unsigned int packageItem:1;
    } _fetched;
}

+ (id)lookupForRelativePath:(id)arg1;
@property(readonly, nonatomic) BRCRelativePath *relpathOfFSEvent; // @synthesize relpathOfFSEvent=_relpathOfFSEvent;
@property(readonly, nonatomic) BRCRelativePath *relpathOfItem; // @synthesize relpathOfItem=_pathOfItem;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_fetchByDocumentID;
- (_Bool)_fetchByFileID;
- (id)_byPathWithLastPathComponent:(id)arg1;
- (_Bool)_fetchByPath;
@property(readonly, nonatomic) BRCLocalItem *byPath;
- (id)byPathWithLastPathComponent:(id)arg1;
@property(readonly, nonatomic) BRCServerItem *serverByPath;
@property(retain, nonatomic) BRCDocumentItem *byDocumentID;
@property(retain, nonatomic) BRCLocalItem *byFileID;
@property(readonly, nonatomic) BRCItemID *parentID;
- (id)initWithRelativePath:(id)arg1;

@end

