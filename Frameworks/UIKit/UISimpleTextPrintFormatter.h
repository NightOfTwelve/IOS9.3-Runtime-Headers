//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPrintFormatter.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@interface UISimpleTextPrintFormatter : UIPrintFormatter
{
}

- (id)initWithAttributedText:(id)arg1;
- (id)initWithText:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSAttributedString *attributedText; // @dynamic attributedText;
@property(retain, nonatomic) UIColor *color; // @dynamic color;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) long long textAlignment; // @dynamic textAlignment;

@end

