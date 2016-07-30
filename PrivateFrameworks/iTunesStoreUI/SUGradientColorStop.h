//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCoding-Protocol.h>

@interface SUGradientColorStop : NSObject <NSCoding>
{
    double _r;
    double _g;
    double _b;
    double _a;
    double _offset;
    struct CGColor *_rawColor;
}

- (id)description;
@property(readonly, nonatomic) double offset;
- (struct CGColor *)copyCGColor;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(struct CGColor *)arg1 offset:(double)arg2;
- (id)init;

@end

