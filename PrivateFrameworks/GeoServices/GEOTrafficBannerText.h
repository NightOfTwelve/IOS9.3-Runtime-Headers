//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray;

@interface GEOTrafficBannerText : PBCodable <NSCopying>
{
    GEOFormattedString *_bannerLargeText;
    GEOFormattedString *_bannerSmallText;
    unsigned int _hideAtDistance;
    unsigned int _incidentDistance;
    unsigned int _incidentIndex;
    NSMutableArray *_localizedIncidentBanners;
    NSMutableArray *_localizedIncidentSpokenTexts;
    NSMutableArray *_localizedIncidentSubBanners;
    int _previousBannerChange;
    unsigned int _showAtDistance;
    GEOFormattedString *_spokenPrompt;
    struct {
        unsigned int hideAtDistance:1;
        unsigned int incidentDistance:1;
        unsigned int incidentIndex:1;
        unsigned int previousBannerChange:1;
        unsigned int showAtDistance:1;
    } _has;
}

@property(nonatomic) unsigned int incidentIndex; // @synthesize incidentIndex=_incidentIndex;
@property(nonatomic) unsigned int incidentDistance; // @synthesize incidentDistance=_incidentDistance;
@property(nonatomic) unsigned int hideAtDistance; // @synthesize hideAtDistance=_hideAtDistance;
@property(nonatomic) unsigned int showAtDistance; // @synthesize showAtDistance=_showAtDistance;
@property(retain, nonatomic) GEOFormattedString *spokenPrompt; // @synthesize spokenPrompt=_spokenPrompt;
@property(retain, nonatomic) GEOFormattedString *bannerSmallText; // @synthesize bannerSmallText=_bannerSmallText;
@property(retain, nonatomic) GEOFormattedString *bannerLargeText; // @synthesize bannerLargeText=_bannerLargeText;
@property(retain, nonatomic) NSMutableArray *localizedIncidentSpokenTexts; // @synthesize localizedIncidentSpokenTexts=_localizedIncidentSpokenTexts;
@property(retain, nonatomic) NSMutableArray *localizedIncidentSubBanners; // @synthesize localizedIncidentSubBanners=_localizedIncidentSubBanners;
@property(retain, nonatomic) NSMutableArray *localizedIncidentBanners; // @synthesize localizedIncidentBanners=_localizedIncidentBanners;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPreviousBannerChange;
@property(nonatomic) int previousBannerChange; // @synthesize previousBannerChange=_previousBannerChange;
@property(nonatomic) _Bool hasIncidentIndex;
@property(nonatomic) _Bool hasIncidentDistance;
@property(nonatomic) _Bool hasHideAtDistance;
@property(nonatomic) _Bool hasShowAtDistance;
@property(readonly, nonatomic) _Bool hasSpokenPrompt;
@property(readonly, nonatomic) _Bool hasBannerSmallText;
@property(readonly, nonatomic) _Bool hasBannerLargeText;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentSpokenTextsCount;
- (void)addLocalizedIncidentSpokenText:(id)arg1;
- (void)clearLocalizedIncidentSpokenTexts;
- (id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentSubBannersCount;
- (void)addLocalizedIncidentSubBanner:(id)arg1;
- (void)clearLocalizedIncidentSubBanners;
- (id)localizedIncidentBannerAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedIncidentBannersCount;
- (void)addLocalizedIncidentBanner:(id)arg1;
- (void)clearLocalizedIncidentBanners;
- (void)dealloc;

@end

