//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SPSection.h>

#import <Search/PRSRowSection-Protocol.h>

@class NSArray, NSString, NSURL, PRSImage;

@interface SPRowSection : SPSection <PRSRowSection>
{
}


// Remaining properties
@property(retain, nonatomic) NSURL *attribution_url;
@property(nonatomic) _Bool card_padding_bottom;
@property(nonatomic) _Bool card_padding_top;
@property(nonatomic) _Bool hide_divider;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) _Bool key_nowrap; // @dynamic key_nowrap;
@property(nonatomic) long long key_weight; // @dynamic key_weight;
@property(retain, nonatomic) NSString *punchout_picker_dismiss_label; // @dynamic punchout_picker_dismiss_label;
@property(retain, nonatomic) NSString *punchout_picker_label; // @dynamic punchout_picker_label;
@property(retain, nonatomic) NSArray *punchouts; // @dynamic punchouts;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSURL *url;
@property(retain, nonatomic) NSString *value; // @dynamic value;
@property(retain, nonatomic) PRSImage *value_image; // @dynamic value_image;
@property(retain, nonatomic) NSString *value_image_align; // @dynamic value_image_align;
@property(nonatomic) _Bool value_nowrap; // @dynamic value_nowrap;
@property(nonatomic) long long value_weight; // @dynamic value_weight;
@end

