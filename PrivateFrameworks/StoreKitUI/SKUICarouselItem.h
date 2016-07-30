//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUIArtworkList, SKUILink;

@interface SKUICarouselItem : NSObject
{
    NSString *_accessibilityLabel;
    SKUIArtworkList *_artworkList;
    long long _carouselItemIdentifier;
    SKUILink *_link;
}

@property(readonly, nonatomic) SKUILink *link; // @synthesize link=_link;
@property(readonly, nonatomic) long long carouselItemIdentifier; // @synthesize carouselItemIdentifier=_carouselItemIdentifier;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
- (void).cxx_destruct;
- (id)description;
- (void)_setLinkItem:(id)arg1;
- (id)artworkForSize:(struct CGSize)arg1;
- (id)initWithComponentContext:(id)arg1;

@end

