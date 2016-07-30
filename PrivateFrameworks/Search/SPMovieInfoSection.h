//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SPSection.h>

#import <Search/PRSMovieInfoSection-Protocol.h>

@class NSArray, NSString, NSURL, PRSImage;
@protocol PRSActionButton;

@interface SPMovieInfoSection : SPSection <PRSMovieInfoSection>
{
}


// Remaining properties
@property(retain, nonatomic) id <PRSActionButton> action_button; // @dynamic action_button;
@property(retain, nonatomic) NSURL *attribution_url;
@property(retain, nonatomic) NSArray *buy_button_sections; // @dynamic buy_button_sections;
@property(nonatomic) _Bool card_padding_bottom;
@property(nonatomic) _Bool card_padding_top;
@property(nonatomic) _Bool hide_divider;
@property(retain, nonatomic) PRSImage *image; // @dynamic image;
@property(retain, nonatomic) PRSImage *rt_glyph; // @dynamic rt_glyph;
@property(retain, nonatomic) NSString *rt_text; // @dynamic rt_text;
@property(retain, nonatomic) NSArray *sections; // @dynamic sections;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSURL *url;
@end

