//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MKMapService : NSObject
{
}

+ (id)sharedService;
- (id)mapItemsForPlacesInDetails:(id)arg1;
- (id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2;
- (id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 mapItemForStartDirectionsSearchInput:(id)arg3 mapitemForEndDirectionsSearchInput:(id)arg4 pushToken:(id)arg5 allowContactBackAtEmailAddress:(id)arg6 traits:(id)arg7;
- (void)_mapItemsForResponseData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)submitUsageForTraits:(id)arg1 actionDetails:(id)arg2 routeDetails:(id)arg3;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (void)submitUsageForTraits:(id)arg1;
- (void)submitUserAction:(id)arg1 eventKey:(int)arg2;
- (void)submitUserAction:(id)arg1 eventKey:(int)arg2 selectedIndex:(unsigned long long)arg3 uniqueID:(id)arg4;
- (void)submitUserAction:(id)arg1 eventKey:(int)arg2 uniqueURL:(id)arg3;
- (void)submitUserAction:(id)arg1 eventKey:(int)arg2 eventValue:(id)arg3;
- (void)submitUserAction:(id)arg1 sharingType:(id)arg2;
- (void)submitUsageForTraitsWithSearchFieldType:(int)arg1 prefix:(id)arg2 displayedResults:(id)arg3 selectedIndex:(int)arg4;
- (void)submitUsageForTraitsWithAction:(int)arg1 uiTarget:(int)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 actionDetails:(id)arg2 uiTarget:(int)arg3 eventValue:(id)arg4;
- (void)submitUsageForTraitsWithAction:(int)arg1 actionDetails:(id)arg2 uiTarget:(int)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 categoriesDisplayed:(id)arg2 categorySelected:(id)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapRegion:(id)arg2 zoomLevel:(double)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 flyoverAnimationID:(unsigned long long)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitIncident:(id)arg8;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 resultIndex:(int)arg4 targetID:(unsigned long long)arg5 transitCardCategory:(int)arg6;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 targetID:(unsigned long long)arg4;
- (void)submitUsageForTraits:(id)arg1 eventValue:(id)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 regionName:(id)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 targetID:(unsigned long long)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1;
- (id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3;
- (id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForCategoryListWithTraits:(id)arg1;
- (id)ticketForURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 includeETA:(_Bool)arg4 traits:(id)arg5;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForPlaceRefinementRequestWithCoordinate:(CDStruct_c3b9c2ee *)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(CDStruct_c3b9c2ee)arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeETA:(_Bool)arg2 traits:(id)arg3;
- (id)_ticketForReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(_Bool)arg2 includeETA:(_Bool)arg3 traits:(id)arg4;
- (id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2;
- (id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(_Bool)arg3 traits:(id)arg4;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(_Bool)arg2 traits:(id)arg3;
- (id)ticketForFreshBusinessClaimComponentWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)ticketForFreshMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(_Bool)arg4 traits:(id)arg5;
- (id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 includeETA:(_Bool)arg4 traits:(id)arg5;
- (id)ticketForMUIDs:(id)arg1 includeETA:(_Bool)arg2 traits:(id)arg3;
- (id)defaultTraitsWithTraits:(id)arg1;
- (id)defaultTraitsWithTransportType:(unsigned long long)arg1;
- (id)defaultTraits;

@end

