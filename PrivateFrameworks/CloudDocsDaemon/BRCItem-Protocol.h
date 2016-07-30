//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession, BRCItemID, BRCLocalContainer, BRCServerZone, BRCStatInfo, NSNumber;

@protocol BRCItem <NSCopying, NSSecureCoding>
@property(nonatomic) unsigned long long sharingOptions;
@property(readonly, nonatomic) BRCLocalContainer *container;
@property(readonly, nonatomic) BRCServerZone *serverZone;
@property(readonly, nonatomic) BRCAccountSession *session;
@property(readonly, nonatomic) NSNumber *ownerKey;
@property(readonly, nonatomic) BRCStatInfo *st;
@property(readonly, nonatomic) BRCItemID *itemID;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, nonatomic) _Bool isDocument;
@property(readonly, nonatomic) _Bool isPackage;
@property(readonly, nonatomic) _Bool isAlias;
@property(readonly, nonatomic) _Bool isLive;
@property(readonly, nonatomic) _Bool isDead;
- (_Bool)validateLoggingToFile:(struct __sFILE *)arg1;
@end

