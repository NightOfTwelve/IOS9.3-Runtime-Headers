//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMapServiceCompletionTicket-Protocol.h>

@class GEOMapServiceTraits, GEOSearchRequest, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOAutoCompleteTicket : NSObject <GEOMapServiceCompletionTicket>
{
    GEOSearchRequest *_searchRequest;
    GEOMapServiceTraits *_traits;
}

@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (_Bool)isRapEnabled;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultMuid:(unsigned long long)arg2;
- (void)applyToSuggestionList:(id)arg1;
- (_Bool)matchesFragment:(id)arg1;
- (void)cancel;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAutoCompleteRequest:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

