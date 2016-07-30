//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUModelObject.h>

@class MPUModelArtist, NSDate, NSString;

@interface MPUModelAlbum : MPUModelObject
{
    _Bool _explicitAlbum;
    _Bool _compilation;
    NSString *_title;
    MPUModelArtist *_artist;
    unsigned long long _trackCount;
    unsigned long long _discCount;
    NSDate *_releaseDate;
    CDUnknownBlockType _artworkCatalogBlock;
}

+ (id)__artworkCatalogBlock__KEY;
+ (id)__releaseDate__KEY;
+ (id)__compilation__KEY;
+ (id)__explicitAlbum__KEY;
+ (id)__discCount__KEY;
+ (id)__trackCount__KEY;
+ (id)__artist__KEY;
+ (id)__title__KEY;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic, getter=isCompilation) _Bool compilation; // @synthesize compilation=_compilation;
@property(nonatomic, getter=isExplicitAlbum) _Bool explicitAlbum; // @synthesize explicitAlbum=_explicitAlbum;
@property(nonatomic) unsigned long long discCount; // @synthesize discCount=_discCount;
@property(nonatomic) unsigned long long trackCount; // @synthesize trackCount=_trackCount;
@property(retain, nonatomic) MPUModelArtist *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)descriptionWithType:(unsigned long long)arg1;

@end

