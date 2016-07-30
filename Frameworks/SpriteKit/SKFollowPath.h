//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

__attribute__((visibility("hidden")))
@interface SKFollowPath : SKAction
{
    struct SKCFollowPath *_mycaction;
    struct CGPath *_cgPath;
}

+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 speed:(double)arg4;
+ (id)followPath:(struct CGPath *)arg1 speed:(double)arg2;
+ (id)followPath:(struct CGPath *)arg1 asOffset:(_Bool)arg2 orientToPath:(_Bool)arg3 duration:(double)arg4;
+ (id)followPath:(struct CGPath *)arg1 duration:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)reversedAction;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

