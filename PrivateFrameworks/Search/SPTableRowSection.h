//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/SPSection.h>

#import <Search/PRSTableRowSection-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol PRSAlignmentSchema;

@interface SPTableRowSection : SPSection <PRSTableRowSection>
{
}


// Remaining properties
@property(retain, nonatomic) id <PRSAlignmentSchema> alignment_schema; // @dynamic alignment_schema;
@property(retain, nonatomic) NSURL *attribution_url;
@property(nonatomic) _Bool card_padding_bottom;
@property(nonatomic) _Bool card_padding_top;
@property(nonatomic) _Bool hide_divider; // @dynamic hide_divider;
@property(nonatomic) long long row_type; // @dynamic row_type;
@property(retain, nonatomic) NSString *tab_group_id; // @dynamic tab_group_id;
@property(retain, nonatomic) NSString *table_id; // @dynamic table_id;
@property(retain, nonatomic) NSString *type;
@property(retain, nonatomic) NSURL *url;
@property(retain, nonatomic) NSArray *value; // @dynamic value;
@end

