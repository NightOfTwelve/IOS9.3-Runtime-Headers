//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightUI/SearchUITitleCardSection-Protocol.h>

@class NSString, UIImage;

@protocol SearchUIRichTitleCardSection <SearchUITitleCardSection>
@property(readonly, nonatomic) _Bool centered;
@property(readonly, nonatomic) UIImage *titleImage;
@property(readonly, copy, nonatomic) NSString *contentRatingText;
@property(readonly, copy, nonatomic) NSString *subtitle;

@optional
@property(readonly, nonatomic) _Bool shouldCropImageToCircle;
@end

