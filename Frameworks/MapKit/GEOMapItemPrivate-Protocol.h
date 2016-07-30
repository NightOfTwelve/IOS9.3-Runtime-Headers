//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/GEOMapItem-Protocol.h>

@class GEOFeatureStyleAttributes, GEOMapItemAdditionalPlaceInfo, GEOMapItemAttribution, GEOMapItemClientAttributes, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOPDBusinessClaim, GEOPDFlyover, GEOPDPlace, GEOPlace, NSArray, NSData, NSString, NSURL;
@protocol GEOMapItemPrivate, GEOMapItemTransitAttribution, GEOMapItemTransitInfo;

@protocol GEOMapItemPrivate <GEOMapItem>
@property(readonly, nonatomic, getter=_photos) NSArray *photos;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;
@property(readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property(readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) _Bool hasBusinessClaim;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
@property(readonly, nonatomic, getter=_encyclopedicAttribution) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) _Bool needsAttribution;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_factoids) NSArray *factoids;
@property(readonly, nonatomic, getter=_hasPairOfFactoids) _Bool hasPairOfFactoids;
@property(readonly, nonatomic, getter=_textBlockText) NSString *textBlockText;
@property(readonly, nonatomic, getter=_textBlockTitle) NSString *textBlockTitle;
@property(readonly, nonatomic, getter=_hasTextBlock) _Bool hasTextBlock;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_hasTelephone) _Bool hasTelephone;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) _Bool hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) _Bool hasOperatingHours;
@property(readonly, nonatomic, getter=_acceptsApplePay) _Bool acceptsApplePay;
@property(readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) _Bool hasAcceptsApplePayAmenity;
@property(readonly, nonatomic, getter=_takesReservations) _Bool takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) _Bool hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) _Bool goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) _Bool hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) _Bool hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) _Bool hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) _Bool hasAnyAmenities;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) _Bool hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) _Bool hasUserRatingScore;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic, getter=_hasAreaInMeters) _Bool hasAreaInMeters;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) _Bool hasMUID;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) _Bool hasFlyover;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOMapItemTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
@property(readonly, nonatomic, getter=_hasTransit) _Bool hasTransit;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) _Bool hasResultProviderID;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
@property(readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) _Bool hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property(readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property(readonly, nonatomic, getter=_place) GEOPlace *place;
- (id <GEOMapItemPrivate>)_mapItemByStrippingOptionalData;
- (GEOMapItemAdditionalPlaceInfo *)_asPlaceInfo;
- (_Bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (NSArray *)_localizedCategoryNamesForType:(unsigned int)arg1;
- (GEOMapRegion *)_arrivalMapRegionForTransportType:(int)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (_Bool)_hasTravelTimeForTransportType:(int)arg1;
- (int)_recommendedTransportType;
- (NSString *)_spokenAddressForLocale:(NSString *)arg1;
@end

