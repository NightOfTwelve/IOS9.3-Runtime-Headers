//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUModelObject.h>

@class MPUModelCurator, NSDate, NSString;

@interface MPUModelPlaylist : MPUModelObject
{
    NSString *_name;
    MPUModelCurator *_curator;
    unsigned long long _trackCount;
    NSString *_editorNotes;
    NSDate *_releaseDate;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _editorialArtworkCatalogBlock;
    CDUnknownBlockType _tracksArtworkCatalogsBlock;
}

+ (id)__tracksArtworkCatalogsBlock__KEY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__releaseDate__KEY;
+ (id)__editorNotes__KEY;
+ (id)__trackCount__KEY;
+ (id)__curator__KEY;
+ (id)__name__KEY;
@property(copy, nonatomic) CDUnknownBlockType tracksArtworkCatalogsBlock; // @synthesize tracksArtworkCatalogsBlock=_tracksArtworkCatalogsBlock;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @synthesize editorialArtworkCatalogBlock=_editorialArtworkCatalogBlock;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *editorNotes; // @synthesize editorNotes=_editorNotes;
@property(nonatomic) unsigned long long trackCount; // @synthesize trackCount=_trackCount;
@property(copy, nonatomic) MPUModelCurator *curator; // @synthesize curator=_curator;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)tracksArtworkCatalogs;
- (id)editorialArtworkCatalog;
- (id)artworkCatalog;
- (id)descriptionWithType:(unsigned long long)arg1;

@end

