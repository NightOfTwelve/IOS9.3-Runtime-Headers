//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIPattern : NSObject
{
    struct CGImage *_patternImage;
    struct CGPattern *_pattern;
    double _alpha;
}

@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (struct CGImage *)patternImageRef;
- (id)description;
- (void)setPatternInContext:(struct CGContext *)arg1;
- (struct CGPattern *)pattern;
- (struct CGPattern *)_newPattern;
- (void)dealloc;
- (id)initWithImageRef:(struct CGImage *)arg1;

@end

