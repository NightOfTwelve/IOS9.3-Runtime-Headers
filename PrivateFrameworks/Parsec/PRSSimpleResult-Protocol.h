//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSBaseResult-Protocol.h>
#import <Parsec/PRSCardResult-Protocol.h>

@class NSArray, NSString, PRSImage;

@protocol PRSSimpleResult <PRSBaseResult, PRSCardResult>
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *section_header;
@property(retain, nonatomic) NSString *templateName;

@optional
@property(retain, nonatomic) NSArray *more_icons;
@property(retain, nonatomic) PRSImage *icon;
@property(nonatomic) long long footnote_size;
@property(nonatomic) long long footnote_maxlines;
@property(nonatomic) _Bool footnote_nowrap;
@property(retain, nonatomic) NSString *footnote;
@property(nonatomic) long long description_size;
@property(nonatomic) long long description_maxlines;
@property(nonatomic) _Bool description_nowrap;
@property(retain, nonatomic) NSString *resultDescription;
@property(retain, nonatomic) PRSImage *title_glyph;
@property(nonatomic) long long title_size;
@property(nonatomic) long long title_maxlines;
@end

