//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SPRichText.h>

#import <SpotlightUI/SearchUIRichTextItem-Protocol.h>

@class NSArray, NSString;

@interface SPRichText (SearchUIExtensions) <SearchUIRichTextItem>
@property(readonly, nonatomic) double starRating;
@property(readonly, copy, nonatomic) NSString *contentAdvisory;
@property(readonly, nonatomic) NSArray *icons;
@property(readonly, copy, nonatomic) NSString *formattedTextDelimiter;
@property(readonly, copy, nonatomic) NSArray *formattedTextItems;
@property(readonly, nonatomic) unsigned long long textMaxLines;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *text;
@end

