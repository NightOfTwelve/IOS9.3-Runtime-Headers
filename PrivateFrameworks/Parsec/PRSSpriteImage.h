//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Parsec/PRSImage.h>

@interface PRSSpriteImage : PRSImage
{
    struct CGRect _spriteRect;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(readonly) struct CGRect spriteRect; // @synthesize spriteRect=_spriteRect;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSpriteMap:(id)arg1;

@end

