//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject
{
    _Bool _mediaMatchesPortraitOrientation;
    _Bool _mediaMatchesLandscapeOrientation;
    NSString *_href;
    NSString *_rel;
    NSString *_sizes;
}

@property(nonatomic) _Bool mediaMatchesLandscapeOrientation; // @synthesize mediaMatchesLandscapeOrientation=_mediaMatchesLandscapeOrientation;
@property(nonatomic) _Bool mediaMatchesPortraitOrientation; // @synthesize mediaMatchesPortraitOrientation=_mediaMatchesPortraitOrientation;
@property(copy, nonatomic) NSString *sizes; // @synthesize sizes=_sizes;
@property(copy, nonatomic) NSString *rel; // @synthesize rel=_rel;
@property(copy, nonatomic) NSString *href; // @synthesize href=_href;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *hrefURL;

@end

