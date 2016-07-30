//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying>
{
    float _averageUserRating;
    long long _numberOfUserRatings;
    NSString *_numberOfUserRatingsString;
    long long _numberOfUserReviews;
    NSString *_numberOfUserReviewsString;
}

@property(copy, nonatomic) NSString *numberOfUserReviewsString; // @synthesize numberOfUserReviewsString=_numberOfUserReviewsString;
@property(nonatomic) long long numberOfUserReviews; // @synthesize numberOfUserReviews=_numberOfUserReviews;
@property(copy, nonatomic) NSString *numberOfUserRatingsString; // @synthesize numberOfUserRatingsString=_numberOfUserRatingsString;
@property(nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(nonatomic) float averageUserRating; // @synthesize averageUserRating=_averageUserRating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

