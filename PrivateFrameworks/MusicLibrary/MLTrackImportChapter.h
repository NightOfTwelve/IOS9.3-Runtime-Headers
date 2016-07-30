//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying>
{
    NSData *_imageData;
    NSString *_imageCacheKey;
    unsigned long long _startTimeInMilliseconds;
    NSString *_title;
    NSURL *_url;
    NSString *_urlTitle;
}

@property(copy, nonatomic) NSString *imageCacheKey; // @synthesize imageCacheKey=_imageCacheKey;
@property(copy, nonatomic) NSString *URLTitle; // @synthesize URLTitle=_urlTitle;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long startTimeInMilliseconds; // @synthesize startTimeInMilliseconds=_startTimeInMilliseconds;
@property(copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (_Bool)isEqualIgnoringTimesAndTitle:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)normalizeProperties;

@end

