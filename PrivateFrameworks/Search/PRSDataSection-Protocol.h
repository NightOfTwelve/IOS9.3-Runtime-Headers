//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Search/PRSSection-Protocol.h>

@class NSArray, NSString, PRSImage;

@protocol PRSDataSection <PRSSection>

@optional
@property(retain, nonatomic) NSString *data_align;
@property(retain, nonatomic) NSString *image_align;
@property(retain, nonatomic) PRSImage *image;
@property(retain, nonatomic) NSArray *values;
@property(retain, nonatomic) NSArray *keys;
@end

