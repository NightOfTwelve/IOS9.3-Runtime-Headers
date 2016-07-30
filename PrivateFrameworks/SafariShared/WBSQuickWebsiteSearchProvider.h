//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WBSOpenSearchDescription, WBSOpenSearchURLTemplate;

@interface WBSQuickWebsiteSearchProvider : NSObject
{
    NSString *_displayName;
    NSString *_hostname;
    NSString *_sourcePageURLString;
    NSDate *_dateAdded;
    WBSOpenSearchURLTemplate *_searchURLTemplateFromForm;
    NSString *_openSearchDescriptionURLString;
    NSDate *_dateOfLastSearch;
}

@property(copy, nonatomic) NSDate *dateOfLastSearch; // @synthesize dateOfLastSearch=_dateOfLastSearch;
@property(copy, nonatomic) NSString *openSearchDescriptionURLString; // @synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString;
@property(retain, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplateFromForm; // @synthesize searchURLTemplateFromForm=_searchURLTemplateFromForm;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, nonatomic) NSString *sourcePageURLString; // @synthesize sourcePageURLString=_sourcePageURLString;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *hostname;
@property(readonly, nonatomic) NSString *displayName;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property(readonly, nonatomic) WBSOpenSearchDescription *openSearchDescription;
- (id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2;
- (id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

