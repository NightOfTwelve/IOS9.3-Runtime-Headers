//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSDiscardableContent-Protocol.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent>
{
    UIImage *_tintedImage;
    UIColor *_tintColor;
    struct {
        unsigned int isDiscarded:1;
        unsigned int isPressed:1;
        unsigned int useCount;
    } _flags;
}

@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) UIImage *tintedImage; // @synthesize tintedImage=_tintedImage;
- (void).cxx_destruct;
- (_Bool)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (id)_tintedDisclosureImage:(_Bool)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithPressed:(_Bool)arg1 tintColor:(id)arg2;

@end

