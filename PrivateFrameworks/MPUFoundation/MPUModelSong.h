//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUModelObject.h>

@class MPUModelAlbum, MPUModelArtist, MPUModelComposer, MPUModelGenre, MPUModelLyrics, NSString;

@interface MPUModelSong : MPUModelObject
{
    _Bool _explicitSong;
    _Bool _artistUploadedContent;
    NSString *_title;
    MPUModelAlbum *_album;
    MPUModelArtist *_artist;
    MPUModelGenre *_genre;
    MPUModelComposer *_composer;
    double _duration;
    unsigned long long _trackNumber;
    unsigned long long _discNumber;
    unsigned long long _beatsPerMinute;
    MPUModelLyrics *_lyrics;
    CDUnknownBlockType _artworkCatalogBlock;
}

+ (id)__artworkCatalogBlock__KEY;
+ (id)__lyrics__KEY;
+ (id)__beatsPerMinute__KEY;
+ (id)__artistUploadedContent__KEY;
+ (id)__explicitSong__KEY;
+ (id)__discNumber__KEY;
+ (id)__trackNumber__KEY;
+ (id)__duration__KEY;
+ (id)__composer__KEY;
+ (id)__genre__KEY;
+ (id)__artist__KEY;
+ (id)__album__KEY;
+ (id)__title__KEY;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(retain, nonatomic) MPUModelLyrics *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) unsigned long long beatsPerMinute; // @synthesize beatsPerMinute=_beatsPerMinute;
@property(nonatomic, getter=isArtistUploadedContent) _Bool artistUploadedContent; // @synthesize artistUploadedContent=_artistUploadedContent;
@property(nonatomic, getter=isExplicitSong) _Bool explicitSong; // @synthesize explicitSong=_explicitSong;
@property(nonatomic) unsigned long long discNumber; // @synthesize discNumber=_discNumber;
@property(nonatomic) unsigned long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) MPUModelComposer *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) MPUModelGenre *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) MPUModelArtist *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) MPUModelAlbum *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)descriptionWithType:(unsigned long long)arg1;

@end

