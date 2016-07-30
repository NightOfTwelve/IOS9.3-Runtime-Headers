//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SearchUIRichTextData : NSObject
{
    NSString *_text;
    unsigned long long _textMaxLines;
    double _starRating;
    double _percentRating;
    NSArray *_icons;
    NSString *_contentAdvisory;
    NSArray *_formattedTextItems;
    NSString *_formattedTextDelimiter;
}

@property(copy, nonatomic) NSString *formattedTextDelimiter; // @synthesize formattedTextDelimiter=_formattedTextDelimiter;
@property(copy, nonatomic) NSArray *formattedTextItems; // @synthesize formattedTextItems=_formattedTextItems;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(nonatomic) double percentRating; // @synthesize percentRating=_percentRating;
@property(nonatomic) double starRating; // @synthesize starRating=_starRating;
@property(nonatomic) unsigned long long textMaxLines; // @synthesize textMaxLines=_textMaxLines;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)hasContentToDisplay;
- (id)initWithRichTextItem:(id)arg1;

@end

