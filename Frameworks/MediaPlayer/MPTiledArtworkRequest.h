//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSArray;
@protocol NSCopying;

@interface MPTiledArtworkRequest : NSObject <NSCopying>
{
    NSArray *_artworkCatalogsCache;
    CDUnknownBlockType _artworkCatalogsBlock;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    double _tileSpacing;
    id <NSCopying> _entityIdentifier;
    id <NSCopying> _namespaceIdentifier;
    id <NSCopying> _revisionIdentifier;
}

@property(copy, nonatomic) id <NSCopying> revisionIdentifier; // @synthesize revisionIdentifier=_revisionIdentifier;
@property(copy, nonatomic) id <NSCopying> namespaceIdentifier; // @synthesize namespaceIdentifier=_namespaceIdentifier;
@property(copy, nonatomic) id <NSCopying> entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) double tileSpacing; // @synthesize tileSpacing=_tileSpacing;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogsBlock; // @synthesize artworkCatalogsBlock=_artworkCatalogsBlock;
- (void).cxx_destruct;
- (id)artworkCatalogsWithCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

